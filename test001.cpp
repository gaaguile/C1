#include<stdio.h>
#include<mkl.h>
#include<mkl_vsl.h>	

#include "std_lib_facilities.h"
//#test 02 about comments

int main() {
	cout << " How many times Do you want to repeat my goog luck phrase? ";
	int times;
	cin >> times;

	for (int i = 0; i < times; i++) {
		cout << i<< "\tHello world of C++ and Intel MKL (Lapack & BLAS) \n";
	}
	cout << "Press ANY key\n";
	int key;
	cin >> key;
	cout << key;
	return 0;


}