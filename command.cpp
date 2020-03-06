#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <inttypes.h>
#include "command.hpp"
#include "regist.hpp"
#include "memory.hpp"

using namespace std;

int sc_commandDecode (int *command, int *operand, int value){
		*operand = 0;
    *command = 0;
		int cmd = 0;
		int op = 0;

    int ch = 0;
    for (int i = 0; ch < 7; ++ch, ++i) {
        int bit = (value >> ch) & 1;
				//*operand |= (bit << i);
        op |= (bit << i);
				//cout << *operand << endl;
    }

    for (int i = 0; ch < 14; ++ch, ++i) {
        int bit = (value >> ch) & 1;
				//*command |= (bit << i);
        cmd |= (bit << i);
				//cout << *command;
		}
		//cout << cmd << endl;
		//cout << *command << " " << *operand << endl;
		if ((cmd > 0x9 && cmd < 0x12) || (cmd > 0x19 && cmd < 0x22) ||
			(cmd > 0x29 && cmd < 0x34) || (cmd > 0x39 && cmd < 0x44) || (cmd > 0x50 && cmd < 0x77)){
			 *command = cmd;
			 *operand = op;
			// cout << " LLLLLLoooll" << endl;
		 }
			else
			sc_regSet(Invalid, 1);
			//cout << "Lol";
			return 0;
}

int sc_commandEncode (int cmd, int op, int *value){
	*value = 0;
  //int bit = 0;
	int ch = 0;
	int command = 0;
	int operand = 0;
	if ((cmd > 0x9 && cmd < 0x12) || (cmd > 0x19 && cmd < 0x22) ||
		(cmd > 0x29 && cmd < 0x34) || (cmd > 0x39 && cmd < 0x44) || (cmd > 0x50 && cmd < 0x77)){
		 command = cmd;
		 operand = op;
		// cout << " LLLLLLoooll" << endl;
		for (int i = 0; ch < 7; ++ch, ++i) {
        int bit = (operand >> i) & 1;
        *value |= (bit << ch);
    }
		//cout << *value << endl;
    for (int i = 0; ch < 14; ++ch, ++i) {
        int bit = (command >> i) & 1;
        *value |= (bit << ch);
    }
	 }
	 else{
		 cout << "Invalid" << endl;
		 sc_regSet(Invalid, 1);
	 }

		//sc_commandDecode (0, 0, );
			//cout << *value  << endl;
		return 0;
}
