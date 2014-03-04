/*
 * Matrix.cpp
 *
 *  Created on: Jan 22, 2014
 *      Author: polimi
 */

#include "Matrix.h"
#include <limits>
#include <algorithm>

const Matrix Matrix::NaM(0,0);

Matrix::Matrix(const unsigned int rows, const unsigned int columns): mRows(rows), mColumns(columns) {
	if (mRows*mColumns == 0)
		mData = NULL;
	 else
		mData = new float[mRows*mColumns];
}

Matrix::Matrix(const Matrix& other): mRows(other.mRows), mColumns(other.mColumns) {
	if (mRows*mColumns == 0)
		mData = NULL;
	else {
		mData = new float[mRows*mColumns];
		std::copy(other.mData, other.mData + mRows*mColumns, mData);
	}
}

Matrix::~Matrix() {
	delete mData;
}

float Matrix::element(unsigned int row, unsigned int column) const {
	if (row < mRows && column < mColumns)
		return mData[row * mColumns + column];
	else
		return std::numeric_limits<double>::quiet_NaN();
}

float &Matrix::element(unsigned int row, unsigned int column) throw() {
	if (row < mRows && column < mColumns)
		return mData[row * mColumns + column];
	else
		throw("invalid access");
}

Matrix &Matrix::operator=(const Matrix& other){
	mRows = other.mRows;
	mColumns = other.mColumns;
	if (mData != NULL) delete mData;
	if (mRows*mColumns == 0)
		mData = NULL;
	else {
		mData = new float[mRows*mColumns];
		std::copy(other.mData, other.mData + mRows*mColumns, mData);
	}
	return *this;
}

Matrix Matrix::operator*(const float scalar) const{
	Matrix ret(*this);
	ret *= scalar;
	return ret;
}

Matrix &Matrix::operator*=(const float scalar){
	for (unsigned int r = 0; r < mRows; r++)
		for (unsigned int c = 0; c < mColumns; c++)
			element(r,c) *= scalar;
	return *this;
}

Matrix Matrix::operator/(const float scalar) const{
	Matrix ret(*this);
	ret /= scalar;
	return ret;
}

Matrix &Matrix::operator/=(const float scalar){
	for (unsigned int r = 0; r < mRows; r++)
		for (unsigned int c = 0; c < mColumns; c++)
			element(r,c) /= scalar;
	return *this;
}

Matrix Matrix::operator+(const float scalar) const{
	Matrix ret(*this);
	ret += scalar;
	return ret;
}

Matrix &Matrix::operator+=(const float scalar){
	for (unsigned int r = 0; r < mRows; r++)
		for (unsigned int c = 0; c < mColumns; c++)
			element(r,c) += scalar;
	return *this;
}

Matrix Matrix::operator-(const float scalar) const{
	Matrix ret(*this);
	ret -= scalar;
	return ret;
}

Matrix &Matrix::operator-=(const float scalar){
	for (unsigned int r = 0; r < mRows; r++)
		for (unsigned int c = 0; c < mColumns; c++)
			element(r,c) -= scalar;
	return *this;
}

Matrix Matrix::operator+(const Matrix &rhs) const{
	if (mRows != rhs.mRows || mColumns != rhs.mColumns)
		return NaM;
	Matrix ret(*this);
	ret += rhs;
	return ret;
}

Matrix &Matrix::operator+=(const Matrix &rhs){
	if (mRows != rhs.mRows || mColumns != rhs.mColumns)
		*this = NaM;
	else
		for (unsigned int r = 0; r < mRows; r++)
			for (unsigned int c = 0; c < mColumns; c++)
				element(r,c) += rhs(r,c);
	return *this;
}

Matrix Matrix::operator-(const Matrix &rhs) const{
	if (mRows != rhs.mRows || mColumns != rhs.mColumns)
		return NaM;
	Matrix ret(*this);
	ret -= rhs;
	return ret;
}

Matrix &Matrix::operator-=(const Matrix &rhs){
	if (mRows != rhs.mRows || mColumns != rhs.mColumns)
		*this = NaM;
	else
		for (unsigned int r = 0; r < mRows; r++)
			for (unsigned int c = 0; c < mColumns; c++)
				element(r,c) -= rhs(r,c);
	return *this;
}

Matrix Matrix::operator*(const Matrix &rhs) const{
	if (!isValid() || !rhs.isValid())
		return NaM;
	if (mColumns != rhs.mRows)
		return NaM;
	Matrix ret(*this);
	for (unsigned int r = 0; r < mRows; r++)
		for (unsigned int c = 0; c < rhs.mColumns; c++){
			ret(r,c) = 0;
			for (unsigned int w = 0; w < mColumns; w++)
				ret(r,c) += element(r,w) * rhs(w,c);
		}
	return ret;
}

Matrix &Matrix::operator*=(const Matrix &rhs){
	*this = *this*rhs;
	return *this;
}

bool Matrix::operator==(const Matrix &rhs) const{
	if (mRows != rhs.mRows || mColumns != rhs.mColumns)
		return false;
	for (unsigned int r = 0; r < mRows; r++)
		for (unsigned int c = 0; c < mColumns; c++)
			if (element(r,c) != rhs(r,c))
				return false;
	return true;
}

Matrix Matrix::zero(unsigned int rows, unsigned int columns){
	Matrix ret(rows, columns);
	for (unsigned int r=0; r < rows; r++)
		for (unsigned int c=0; c < columns; c++)
			ret(r,c) = 0;
	return ret;
}

Matrix Matrix::identity(unsigned int size){
	Matrix ret = Matrix::zero(size, size);
	for (unsigned int i = 0; i < size; i++)
		ret(i,i) = 1;
	return ret;
}

Matrix operator*(const float scalar, const Matrix &rhs){
	return rhs * scalar;
}

Matrix operator+(const float scalar, const Matrix &rhs){
	return rhs + scalar;
}

Matrix operator-(const float scalar, const Matrix &rhs){
	return rhs-scalar;
}

std::ostream& operator<< (std::ostream& os, const Matrix &rhs){
	if (rhs.isValid())
		for (unsigned int r = 0; r < rhs.getRows(); r++){
			for (unsigned int c = 0; c < rhs.getColumns(); c++){
				os << rhs(r,c);
				if (c + 1 < rhs.getColumns())
					 os << ", ";
			}
			os << std::endl;
		}
	else
		os << "NaM" << std::endl;
	return os;
}
