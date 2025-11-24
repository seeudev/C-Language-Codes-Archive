#include<windows.h>
#include<process.h>
#include<stdio.h>
#include<conio.h>

#define NEONRED "\033[1;38;5;203m"
#define NEONGREEN "\033[1;38;5;82m"
#define NEONBLUE "\033[1;38;5;69m"
#define NEONYELLOW "\033[1;38;5;226m"
#define NEONMAGENTA "\033[1;38;5;198m"
#define NEONCYAN "\033[1;38;5;51m"
#define NEONORANGE "\033[1;38;5;208m"
#define NEONPINK "\033[1;38;5;213m"
#define NEONDARKVIOLET "\033[1;38;5;57m"
#define NEONPURPLE "\033[1;38;5;129m"
#define RESET   "\x1b[0m"

//ARRAYS

//Terminal UI

void br(void){
	printf("%c%c%c%c%c\n",178,178,178,178,178);
}
void landingGreet(){
	
	
	
	drawDBox(10,1,67,20);
	
	drawDBox(12,2,65,19);
	gotoxy(12,0); printf("%c",232); gotoxy(14,0);printf("MultArrays - [Executing] Windows Terminal"); gotoxy(62,0);printf("%c",196); gotoxy(64,0);printf("%c",254); gotoxy(66,0);printf("%c",88); 
	gotoxy(19,4); printf("%c%c%c%c%c|2D AND MULTI-DIMENSIONAL ARRAY|%c%c%c%c%c",176,177,178,219,222,221,219,178,177,176);
    gotoxy(28,7); printf(NEONRED"[T]ranspose Matrix\n"RESET);
    gotoxy(28,8); printf(NEONBLUE"[M]ulti-dimensional Array\n"RESET);
    gotoxy(28,9); printf(NEONYELLOW"[E]xit\n\n"RESET);
}

void inputPage(){
	
//	drawDBox(10,0,75,29);
	gotoxy(28,1); printf("%c%c%c%c%c|  PROCESSING  |%c%c%c%c%c",176,177,178,219,222,221,219,178,177,176);

}

void border(){
	
//	drawDBox(10,0,75,29);
	printf("%c%c%c%c%c|========|%c%c%c%c%c\n\n",176,177,178,219,222,221,219,178,177,176);

}

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

//ARRAYS PROJ5

void transpose_matrix(int rows, int cols, int matrix[rows][cols], int transposed[][rows]) {
	int i,j;
  for (i = 0; i < cols; i++) {
    for (j = 0; j < rows; j++) {
      transposed[i][j] = matrix[j][i];
    }
  }
}

void print_4d_array(int array[2][2][3][3]) {
	int i,j,k,l;
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      border();
      for (k = 0; k < 3; k++) {
        for (l = 0; l < 3; l++) {
          printf("%5d ", array[i][j][k][l]);
        }
        printf("\n");
      }
      printf("\n");
    }
  }
}


