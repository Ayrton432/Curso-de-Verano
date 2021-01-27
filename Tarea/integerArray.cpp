#include <iostream>
#include "IntegerArray.h"

using namespace std;

IntegerArray::IntegerArray(int size) {
    this->data = new int[size];
    this->size = size;
} 

IntegerArray::IntegerArray(IntegerArray &o) {
    this->data = new int[o.size];
    size = o.size;
    for(int i = 0; i < size; i++)
        data[i] = o.data[i];
}

IntegerArray::~IntegerArray() {
    delete[] data;
}

void IntegerArray::push_back(int p) {
	if(index < size)
		data[index] = p;	
		index++;
}

void IntegerArray::remove() {
	if(index > 0)
		index--;
}

void IntegerArray::print() {
	for(int i = 0; i < index; i++)
		cout <<  "[ " << data[i] <<" ]" << " ";	
} 

