#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <inttypes.h>
#include "regist.hpp"

using namespace std;

int sc_regInit(){
	reg = 0;
return 0;
	}

int sc_regSet(int pos, int value){
	if (pos < 0 || pos > REG_SIZE){
        	cout << "Registry is invalid" << endl;
		return -1;
		}
    	if (value != 0 && value != 1){
        	cout << "Value must be 0 or 1" << endl;
		return -1;
		}
	if (value == 0)
        	reg &= (~(1 << (pos - 1)));
    	else
        	reg |= (1 << (pos - 1));
return 0;
}

int sc_regGet(int pos, int *value){
	if (pos < 0 || pos > REG_SIZE) {
        	cout << "Registry is invalid" << endl;
		return -1;
		}
	//cout << *value << endl;
    	*value = (reg >> (pos - 1)) & 1;
	//cout << *value << endl;
return 0;
}
