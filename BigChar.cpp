#include "BigChar.hpp"


int bc_printA(char * str) {
  cout << "\E(0" << *str << "\E(B";
  return 0;
}

int bc_box(int x1, int y1, int x2, int y2) {
  if (x1 < 0 || y1 < 0 || x2 < 0 || y2 < 0)
    return -1;
  int now_x = 0, now_y = 0;
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

int bc_printbigchar(unsigned int bigchar[2], int x, int y, enum colors clr1, enum colors clr2){

  if(clr1 != 0 || clr2 != 0){
    mt_setfgcolor(clr1);
    mt_setbgcolor(clr2);
  }
  else
    return -1;
  int n = 0;
	int x1 = x + 1, y1 = y + 1;
  for(int i = 31; i >= 0; i--){
      mt_gotoXY(x1+(31-i)%8,y1+(31-i)/8);
      if((bigchar[0] >> i) & 1)
        bc_printA(BIGCHAR_REC);
      else
        cout << " ";
  }
	y1=y+5;
  for(int i = 31; i >= 0; i--){
  	mt_gotoXY(x1+(31-i)%8,y1+(31-i)/8);
  	if((bigchar[1] >> i) & 1)
      bc_printA(BIGCHAR_REC);
    else
      cout << " ";
  }
  mt_setfgcolor(cl_default);
  mt_setbgcolor(cl_default);
  return 0;
}

int bc_setbigcharpos(unsigned int *big, int x, int y, int value){
	if ((x < 0) || (y < 0)  || (x > 7) || (y > 7) || (value < 0) || (value > 1))
		return -1;
  int p = 0;
  if (y < 4)
    p = 0;
  else
    p = 1;
  if (value == 0)
    big[p] &= ~(1 << (31 - (8 * y + x)));
  else
	  big[p] |= value << (31 - (8 * y + x));
	return 0;
}

int bc_getbigcharpos(unsigned int * big, int x, int y, int *value){
  if ((x < 0) || (y < 0)  || (x > 7) || (y > 7))
		return -1;
  int p = 0;
  if (y < 4)
    p = 0;
  else
    p = 1;
  *value = big[p] >> (31 - (8 * y + x)) & 1;
   cout << *value << endl;
  return 0;
}

int bc_bigcharwrite(int fd, unsigned int *big, int count){
  int file;
  file = write(fd, big, count * sizeof(int) * 2);
  if (file == -1){
    cout << "Error1" << endl;
    return -1;
  }
  return 0;
}

int bc_bigcharread(int fd, unsigned int *big, int need_count, int *count){
  int file;
  *count = read(fd, big, need_count * sizeof(int) * 2);
  if (file == -1){
    cout << "Error2" << endl;
    return -1;
  }
  cout << *count << endl << &count << endl;
}
