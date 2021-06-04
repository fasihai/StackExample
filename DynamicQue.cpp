/*
 * DynamicQue.cpp
 *
 *  Created on: May 21, 2020
 *      Author: fasihatiq
 */

#include "DynamicQue.hpp"

template <class T>
DynamicQue<T>::DynamicQue() {
	// TODO Auto-generated constructor stub

	DynamicNumber = 0;
	last = NULL;
	first = NULL;


}

template <class T>
DynamicQue<T>::~DynamicQue() {
	// TODO Auto-generated destructor stub
	removeQu();
}

template <class T>
void DynamicQue<T>::eQu(T inp){

	DynamicNo *anotherNo;
	anotherNo = new DynamicNo;
	anotherNo->data = inp;
	anotherNo->next = NULL;

	if(blank()){

		last = anotherNo;
		first = anotherNo;

	}
	else{

		last->next = anotherNo;
		last = anotherNo;
	}

	DynamicNumber++;
}
template <class T>
void DynamicQue<T>::dQu(T& inp){

	DynamicNo *temporary;

	if (blank()){

		cout << "Blank.\n";
	}
	else{

		inp = first->data;
		temporary = first;
		first = first->next;
		delete temporary;
		DynamicNumber++;

	}
}
template <class T>
bool DynamicQue<T>::blank(){

	if(DynamicNumber > 0){

		return false;
	}
	else{

		return true;
	}

}
template <class T>
void DynamicQue<T>::removeQu(){

		T temporary;

		while(!blank()){

			dQu(temporary);

		}
}

