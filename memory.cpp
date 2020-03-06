#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <inttypes.h>

#include "memory.hpp"

using namespace std;



int sc_memoryInit(){
	for(int i = 0; i < 100; i++){
  		memory[i]=0;
  		}
  	for(int i = 0; i < 100; i++){
  		cout << memory[i];
  		}
  	cout << endl;
  	return 0;
  }

int sc_memorySet (int address, int value){
  	if((address > 99) || (address < 0)){
  		cout<< "Going beyond memory limits" << endl;
  		sc_regSet(Memory_overflow, 1);
  		//return 0;
  	}
  	else{
  		memory[address] = value;

  	}
		for (int i = 0; i < 100; i++){
			cout << memory[i] << " ";
		}

  	return 0;
  }

  int sc_memoryGet (int address, int * value){
  	if((address > 99) || (address < 0)){
  		cout<< "Going beyond memory limits" << endl;
			sc_regSet(1, 1);
  		return 0;
  	}
  	else{
  		*value=memory[address];

  		}
  	return *value;
  }

  int sc_memorySave (char * filename){
  	FILE *fp = fopen(filename, "wb");
  	if(fp==NULL)
      {
//perror("Error occured while opening file");
          return 1;
      }
      else{
      	fwrite(memory, sizeof(int), sizeof(memory), fp);
  		fclose(fp);
  	}
  	return 0;
  }

  int sc_memoryLoad (char * filename){
  	FILE *fp = fopen(filename, "rb");
  	if(fp==NULL)
      {
          perror("Error occured while opening file");
          return 1;
      }
      else{
  		fread(memory, sizeof(int), sizeof(memory), fp);
  		fclose(fp);
  	}
  return 0;
  }
