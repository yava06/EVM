
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <inttypes.h>
#include <time.h>
#include "command.hpp"
#include "regist.hpp"
#include "memory.hpp"
#include "terminal.hpp"
#include "BigChar.hpp"

using namespace std;


int main()
{
	srand(time(NULL));
	char * filename = "test.txt";

 	//sc_memoryInit();
 	//sc_memorySave(filename);
	//sc_memorySet(101,2);
	int n = 0, m = 0;

mt_clrscr();
	int col = 0, fon = 0;
	col = rand()%8 + 1;
	fon = rand()%8 + 1;
	//printf("%d\n", col);
	//col = 9;
	//fon = 9;
	 // switch (col){
		//  case 1: {
		// 			mt_setfgcolor(cl_black);
		// 		 	break;
		//  }
		//  case 2:{
		// 	 	mt_setfgcolor(cl_red);
		// 		break;
		//  }
		//  case 3:{
		// 	 	mt_setfgcolor(cl_green);
		// 		break;
		//  }
		//  case 4:{
		// 	 mt_setfgcolor(cl_brown);
 		// 	break;
		// }
		//  case 5:{
		// 	 mt_setfgcolor(cl_blue);
 		// 	break;
		// }
		//  case 6:{
		// 	 	mt_setfgcolor(cl_cyan);
		// 		break;
		//  }
		//  case 7:{
		// 	 	mt_setfgcolor(cl_light_blue);
		// 		break;
		//  }
		//  case 8:{
		// 	 	mt_setfgcolor(cl_default);
		// 		break;
		//  }
	 // }
	 //
	 // switch (fon){
		//  case 1: {
		// 			mt_setbgcolor(cl_black);
		// 		 	break;
		//  }
		//  case 2:{
		// 	 	mt_setbgcolor(cl_red);
		// 		break;
		//  }
		//  case 3:{
		// 	 	mt_setbgcolor(cl_green);
		// 		break;
		//  }
		//  case 4:{
		// 	 mt_setbgcolor(cl_brown);
 		// 	break;
		// }
		//  case 5:{
		// 	 mt_setbgcolor(cl_blue);
 		// 	break;
		// }
		//  case 6:{
		// 	 	mt_setbgcolor(cl_cyan);
		// 		break;
		//  }
		//  case 7:{
		// 	 	mt_setbgcolor(cl_light_blue);
		// 		break;
		//  }
		//  case 8:{
		// 	 	mt_setbgcolor(cl_default);
		// 		break;
		//  }
	 // }
	 //
	  mt_gotoXY (1, 30);
	 //bc_printA("l");
	 bc_box(0, 0, 8, 8);
	 cout << "\n";
	//sc_memoryGet(5, &n);
	//cout << n << endl;
	//sc_memoryLoad(filename);
/*	sc_commandEncode(0x10, 23, &n);
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
*/
	//for(int i = 0; i < 100; i++){
	//	cout << memory[i];
	//}

    return 0;
}
