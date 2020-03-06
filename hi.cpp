
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <inttypes.h>
#include "command.hpp"
#include "regist.hpp"
#include "memory.hpp"

using namespace std;


int main()
{
	char * filename = "test.txt";
 	//sc_memoryInit();
 	//sc_memorySave(filename);
	//sc_memorySet(101,2);
	int n = 0, m = 0;
	//sc_memoryGet(5, &n);
	//cout << n << endl;
	//sc_memoryLoad(filename);
	sc_commandEncode(0x10, 23, &n);
	// cout << n << endl;
	for (int i = 15; i > 0; i--){
		int bit = (n >> i) & 1;
		cout << bit;
	}
	cout << endl;
	int a, b;
	sc_commandDecode (&a, &b, n);
	cout << "Command: " << 0xa << endl << "Operand: " << b << endl;
	//sc_commandDecode( )
	cout << endl;
	//sc_regSet(1, 0);
	sc_regGet(Invalid, &m);
	cout << m << endl;

	//for(int i = 0; i < 100; i++){
	//	cout << memory[i];
	//}
    return 0;
}
