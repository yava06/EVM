#include "BigChar.hpp"
#include "terminal.hpp"
#include <iostream>

int bc_printA(char * str) {
  //printf("\E(0%s\E(B", str);
  cout << "\E(0" << str << "\E(B";
  return 0;
}

int bc_box(int x1, int y1, int x2, int y2) {
  int now_x = 0, now_y = 0;
  // if(x1 == 0){
  //   x1 = 1;
  // }
  for (now_x = x1 + 1; now_x < x2; now_x++){
    mt_gotoXY(now_x, y1);
    bc_printA("r");
  }
  for (now_y = y1 + 1; now_y < y2; now_y++){
    mt_gotoXY(x1, now_y);
    bc_printA("x");
  }
  for (now_x = x1 + 1; now_x < x2; now_x++){
    mt_gotoXY(now_x, y2);
    bc_printA("r");
  }
  for (now_y = y1 + 1; now_y < y2; now_y++){
    mt_gotoXY(x2, now_y);
    bc_printA("x");
  }
  mt_gotoXY(x1, y1);
  bc_printA("l");
  mt_gotoXY(x1, y2);
  bc_printA("m");
  mt_gotoXY(x2, y1);
  bc_printA("k");
  mt_gotoXY(x2, y2);
  bc_printA("j");

  //mt_gotoXY(now_y, y2);
  //  printf("\n");
  //  while (now_x < x2){
  //    printf("\n");
  //    //
  //    bc_printA("x");
  //    for (now_y = 0; now_y < y2; now_y++){
  //      printf(" ");
  //    }
  //    bc_printA("x");
  //
  //    now_x++;
  //  }
  return 0;
}
