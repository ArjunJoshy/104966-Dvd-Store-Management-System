#ifndef DvdStore_H_INCLUDED
#define DvdStore_H_INCLUDED


void addstaff(void) ;
int checkid(int t) ;
void delestaff() ;
void editstaff(void) ;
int getdata() ;
void gotoxy (int x, int y) ;
void mainmenu() ;
void Password(void) ;
void returnfunc(void) ;
void searchstaff() ;
int chechid(int) ;
void viewstaff(void)  ;
int t(void) ; 
  
struct meroDate

{

int mm,dd,yy;

};

struct staff

{

int id;
char stname[20];
char name[20];
char available[20];
int qty;
int price;
int count;
char *cat;
struct meroDate issued;
struct meroDate duedate;

};
struct staff a;





#endif //DvdStore_H_INCLUDED
