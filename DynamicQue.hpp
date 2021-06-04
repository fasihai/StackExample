/*
 * DynamicQue.hpp
 *
 *  Created on: May 21, 2020
 *      Author: fasihatiq
 */

#ifndef DYNAMICQUE_HPP_
#define DYNAMICQUE_HPP_

#include <iostream>
#include <string>
using namespace std;

template <class T>
class DynamicQue {
public:
	DynamicQue();
	virtual ~DynamicQue();

	void dQu(T&);
	void eQu(T);
	void removeQu();
	bool blank();

private:
	struct DynamicNo{

		T data;
		DynamicNo *next;
	};

	int DynamicNumber;
		DynamicNo *first;
		DynamicNo *last;


};

#endif /* DYNAMICQUE_HPP_ */
