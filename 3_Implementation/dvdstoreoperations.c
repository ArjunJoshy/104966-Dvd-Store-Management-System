#include"DvdStore.h"
#inclde<windows.h>
#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#include<string.h>                 
#include<ctype.h>                   
#include<dos.h>                    
#include<time.h>

void addstaff(void)    

{

system("cls");

int i;

gotoxy(20,5);

printf("CHOOSE YOUR CATEGORIES");

gotoxy(20,7);

printf("[1] Movies");

gotoxy(20,9);

printf("[2] Series");

gotoxy(20,11);

printf("[3] Musics");

gotoxy(20,13);

printf("[4] Animated");

gotoxy(20,15);

printf("[5] Adults");

gotoxy(20,17);


printf("[7] Back to main menu");

gotoxy(20,19);



printf("Enter your choice:");

scanf("%d",&s);

if(s==7)



mainmenu() ;

system("cls");

fp=fopen("stf.dat","ab+");

if(getdata()==1)

{

a.cat=catagories[s-1];

fseek(fp,0,SEEK_END);

fwrite(&a,sizeof(a),1,fp);

fclose(fp);

gotoxy(21,14);

printf("The record is sucessfully saved");

gotoxy(21,15);

printf("Save any more?(Y / N):");

if(getch()=='n')

mainmenu();

else

system("cls");

addstaff();

}

}




void deletestaff()    

{

system("cls");

int d;

char another='y';

while(another=='y')  

{

system("cls");

gotoxy(10,5);

printf("Enter the DVD ID to  delete:");

scanf("%d",&d);

fp=fopen("stf.dat","rb+");

rewind(fp);

while(fread(&a,sizeof(a),1,fp)==1)

{

if(a.id==d)

{



gotoxy(10,7);

printf("The DVD record is available");

gotoxy(10,8);

printf("DVD name is %s",a.name);

gotoxy(10,9);

findstaff='t';

}

}

if(findstaff!='t')

{

gotoxy(10,10);

printf("No record is found modify the search");

if(getch())

mainmenu();

}

if(findstaff=='t' )

{

gotoxy(10,9);

printf("Do you want to delete it?(Y/N):");

if(getch()=='y')

{

ft=fopen("test.dat","wb+");  

rewind(fp);

while(fread(&a,sizeof(a),1,fp)==1)

{

if(a.id!=d)

{

fseek(ft,0,SEEK_CUR);

fwrite(&a,sizeof(a),1,ft); 

}                              

}

fclose(ft);

fclose(fp);

remove("stf.dat");

rename("test.dat","stf.dat"); 

fp=fopen("stf.dat","rb+");    

if(findstaff=='t')

{

gotoxy(10,10);

printf("The record is sucessfully deleted");

gotoxy(10,11);

printf("\n\tDelete another record?(Y/N)");

}

}

else

mainmenu();

fflush(stdin);

another=getch();

}

}

gotoxy(10,15);

mainmenu();

}
