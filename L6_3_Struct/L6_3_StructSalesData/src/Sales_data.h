/*
 * Sales_data.h
 *
 *  Created on: 21/ott/2013
 *      Author: fraternali
 */

#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>
using namespace std;

struct Sales_data {
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};
#endif
