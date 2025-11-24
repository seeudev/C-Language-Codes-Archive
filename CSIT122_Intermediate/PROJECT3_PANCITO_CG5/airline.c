#include<windows.h>
#include<process.h>
#include<stdio.h>
#include<conio.h>
//Operations

int sumNum(int num1, int num2){
	return num1+num2;
}
int diffNum(int num1, int num2){
	return num1-num2;
}
int prodNum(int num1, int num2){
	return num1*num2;
}
float quoNum(int num1, int num2){
	float res,fn1,fn2;
	fn1=num1;
	fn2=num2;
	res = fn1/fn2;
	return res;
}
int modNum(int num1, int num2){
	return num1%num2;
}

//Terminal UI

void br(void){
	printf("#####################################\n");
}
void landingGreet(){
	
	drawDBox(10,0,70,25);
	
	gotoxy(25,2); printf("");
	gotoxy(29,4); printf("");

	
}

void inputPage(){
	
	drawDBox(10,0,75,17);
	gotoxy(25,2); printf("~~~~~< CALCULATOR >~~~~~");

	
}

void menuwindow(int x[],int y[]){
	drawDBox(10,0,70,25);
	gotoxy(25,3); printf("Welcome to ==//SEES AIR//==");
	gotoxy(30,5); printf("Online Booking. . .");
	gotoxy(18,7); printf("First Class Section: [%d] [%d] [%d] [%d] [%d]",x[0],x[1],x[2],x[3],x[4]);
	gotoxy(22,9); printf("Economy Section: [%d] [%d] [%d] [%d] [%d]",y[0],y[1],y[2],y[3],y[4]);
}
//Logic

int check(int x[]){
	int i,r=0;
	for(i=0;i<5;i++){
		if(x[i]==1){
			r++;
		}
	}
	if (r==5){
		return 1;
	}else{
		return 0;
	}
	
}

void add(int x[]){
	int i;
	for(i=0;i<5;i++){
		if(x[i]==0){
			x[i]=1;
			break;
		}
	}
	drawSBox(20,13,55,20);
	gotoxy(22,14); printf("BOARDING PASS\n");
	gotoxy(25,16);printf("AIRLINE: SEES AIR\n");
	gotoxy(39,18); printf("%d\n",i+1);
//	gotoxy(30,11);printf("ticket\n");
//	gotoxy(30,11);printf("ticket\n");
	
}














//Initializing Phase

//char nameLogin(char name[30]){
//	
//	printf("Please enter your name: "); gets(name);
//	
//}

//MYTOOLS

void gotoxy(int x,int y)
{
 HANDLE hConsoleOutput;
 COORD dwCursorPosition;
 dwCursorPosition.X=x;
 dwCursorPosition.Y=y;
 
 hConsoleOutput=GetStdHandle(STD_OUTPUT_HANDLE);
 SetConsoleCursorPosition(hConsoleOutput, dwCursorPosition);
}
     
void clrscr()
{
 system("cls");
}

//draws a single-box
void drawSBox(int x1,int y1, int x2, int y2)
{
 int row,col;

 gotoxy(x1,y1);printf("%c",218);
 gotoxy(x2,y1);printf("%c",191);
 gotoxy(x1,y2);printf("%c",192);
 gotoxy(x2,y2);printf("%c",217);

 for(col=x1+1;col<x2;col++)
 {
  gotoxy(col,y1);printf("%c",196);
  gotoxy(col,y2);printf("%c",196);
 }

 for(row=y1+1;row<y2;row++)
 {
  gotoxy(x1,row);printf("%c",179);
  gotoxy(x2,row);printf("%c",179);
 }
}

//draws a doubline-box
void drawDBox(int x1,int y1, int x2, int y2)
{
 int row,col;char code;

 gotoxy(x1,y1);printf("%c",201);
  gotoxy(x2,y1);printf("%c",187);
  gotoxy(x1,y2);printf("%c",200);
 gotoxy(x2,y2);printf("%c",188);

 for(col=x1+1;col<x2;col++)
 {
  gotoxy(col,y1);printf("%c",205);
  gotoxy(col,y2);printf("%c",205);
 }

 for(row=y1+1;row<y2;row++)
 {
  gotoxy(x1,row);printf("%c",186);
  gotoxy(x2,row);printf("%c",186);
 }
}
