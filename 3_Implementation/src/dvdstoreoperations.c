#include"DvdStore.h"
#inclde<windows.h>
#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
#include<string.h>                 
#include<ctype.h>                   
#include<dos.h>                    
#include<time.h>

#define RETURNTIME 15

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
