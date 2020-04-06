#include "BigChar.hpp"


int bc_printA(char * str) {
  //printf("\E(0%s\E(B", str);
  cout << "\E(0" << *str << "\E(B";
  return 0;
}

int bc_box(int x1, int y1, int x2, int y2) {
  int now_x = 0, now_y = 0;
  // if(x1 == 0){
  //   x1 = 1;
  // }
  for (now_x = x1 + 1; now_x < x2; now_x++){
    mt_gotoXY(now_x, y1);
    bc_printA(BIGCHAR_HOR);
  }
  for (now_y = y1 + 1; now_y < y2; now_y++){
    mt_gotoXY(x1, now_y);
    bc_printA(BIGCHAR_VERT);
  }
  for (now_x = x1 + 1; now_x < x2; now_x++){
    mt_gotoXY(now_x, y2);
    bc_printA(BIGCHAR_HOR);
  }
  for (now_y = y1 + 1; now_y < y2; now_y++){
    mt_gotoXY(x2, now_y);
    bc_printA(BIGCHAR_VERT);
  }
  mt_gotoXY(x1, y1);
  bc_printA(BIGCHAR_UL);
  mt_gotoXY(x1, y2);
  bc_printA(BIGCHAR_DL);
  mt_gotoXY(x2, y1);
  bc_printA(BIGCHAR_UR);
  mt_gotoXY(x2, y2);
  bc_printA(BIGCHAR_DR);

return 0;
}

int bc_printbigchar(unsigned int bigchars[2], int x, int y, enum colors clr1, enum colors clr2){
  if(clr1 != 0)
    mt_setfgcolor(clr1);
	if(clr2 != 0)
    mt_setbgcolor(clr2);
  int n = 0;
	int x1=x+1,y1=y+1;
  for(int i = 31; i >= 0; i--){
    //while (n < 8) {
      //n++;
      mt_gotoXY(x1+(31-i)%8,y1+(31-i)/8);
      if((bigchars[0] >> i) & 1)
        bc_printA(BIGCHAR_REC);
      else
        cout << " ";
    //}
    //cout << "\n";
    //n = 0;
  }
	y1=y+5;
  for(int i = 31; i >= 0; i--){
  	mt_gotoXY(x1+(31-i)%8,y1+(31-i)/8);
  	if((bigchars[1] >> i) & 1)
      bc_printA(BIGCHAR_REC);
    else
      cout << " ";
  }
}
