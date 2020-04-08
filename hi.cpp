#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <inttypes.h>
#include <time.h>
#include <fcntl.h>
#include "command.hpp"
#include "regist.hpp"
#include "memory.hpp"
#include "terminal.hpp"
#include "BigChar.hpp"

using namespace std;

unsigned int bigSign[17][2] = {
	{0x3C66C3C3,0xC3C3663C},//0
	{0x08187818,0x1818187E},//1
	{0x3c66c306,0x1c3060ff},//2
	{0x7ec3061c,0x0603c37e},//3
	{0x040C1C3c,0x6cff0c0c},//4
	{0xffc0c0fe,0x0303c37e},//5
	{0x3c66c0fc,0xe6c3663c},//6
	{0xff030306,0x0c181818},//7
	{0x3c66663c,0x66c3663c},//8
	{0x3c66c367,0x3f03663c},//9
	{0x18183c3c,0x667ec3c3},//a
	{0xfcc6c6fc,0xc6c3c3fe},//b
	{0x3c66c3c0,0xc0c3663c},//c
	{0xfcc6c3c3,0xc3c3c6fc},//d
	{0xffc0c0f8,0xc0c0c0ff},//e
	{0xffc0c0f8,0xc0c0c0c0},//f
	{0x001818ff,0x18180000},//+
};

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
	 bc_box(0, 0, 10, 10);
	 cout << "\n";
	 bc_printbigchar(bigSign[9], 1, 1,  cl_red, cl_default);
	 cout << "\n\n";
	 bc_setbigcharpos(bigSign[9], 1, 2, 1);
	 cout << "\n\n";
   int value = 0;
	 bc_getbigcharpos(bigSign[9], 1, 2, &value);
	 unsigned int f;
	 int count = 0;
	 f = open("/home/yava06/EVM/file.dat", O_WRONLY);
	 bc_bigcharwrite(f, &bigSign[0][0], 17);
	 close(f);
	 f = open("/home/yava06/EVM/file.dat", O_RDONLY);
	 bc_bigcharread(f, &bigSign[0][0], 17, &count);
	 close(f);
	 // cout << value << endl;
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
