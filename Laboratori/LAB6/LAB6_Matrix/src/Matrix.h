/*
 * Matrix.h
 *
 *  Created on: Jan 22, 2014
 *      Author: polimi
 */

#ifndef MATRIX_H_
#define MATRIX_H_

#include <cstdlib>
#include <ostream>

class Matrix {
public:
	Matrix(unsigned int rows, unsigned int columns);
	Matrix(const Matrix& other);
	~Matrix();

	const unsigned int getRows() const { return mRows; }
	const unsigned int getColumns() const { return mColumns; }
	const bool isValid() const { return mData != NULL; }

	float operator()(const unsigned int row, const unsigned int column) const { return element(row, column); }
	float &operator()(const unsigned int row, const unsigned int column) { return element(row, column); }

	float element(const unsigned int row, const unsigned int column) const;
	float &element(const unsigned int row, const unsigned int column) throw();

	Matrix &operator=(const Matrix& other);

	Matrix &operator*=(const float scalar);
	Matrix operator*(const float scalar) const;
	Matrix &operator/=(const float scalar);
	Matrix operator/(const float scalar) const;
	Matrix &operator+=(const float scalar);
	Matrix operator+(const float scalar) const;
	Matrix &operator-=(const float scalar);
	Matrix operator-(const float scalar) const;

	Matrix &operator+=(const Matrix &rhs);
	Matrix operator+(const Matrix &rhs) const;
	Matrix &operator-=(const Matrix &rhs);
	Matrix operator-(const Matrix &rhs) const;
	Matrix &operator*=(const Matrix &rhs);
	Matrix operator*(const Matrix &rhs) const;

	bool operator==(const Matrix &rhs) const;

	static const Matrix NaM;

	static Matrix zero(unsigned int rows, unsigned int columns);
	static Matrix identity(unsigned int size);

protected:
	unsigned int mRows;
	unsigned int mColumns;
	float* mData;
};

Matrix operator*(const float scalar, const Matrix &rhs);
Matrix operator+(const float scalar, const Matrix &rhs);
Matrix operator-(const float scalar, const Matrix &rhs);

std::ostream& operator<< (std::ostream& os, const Matrix &rhs);

#endif /* MATRIX_H_ */
