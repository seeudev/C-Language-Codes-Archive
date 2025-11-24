#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "ARRAYop.h"

int main(int argc, char *argv[]) {
	
	//Variable Declarations
	int x,y;
	char inp;			//SELECTION INPUT
	int N=0;			//ARRAY SIZE
	int ia[25]={0};		//ARRAY
	int i;				//LOOP COUNTER
	int loc;			//LOCATION BOOL
	int ITEM,K,cFlag=0; //INPUTS AND FLAGS
	
	//Main Menu Loop
	do{
		system("Color 0C");
		clrscr();
		landingGreet();
		gotoxy(52,17); scanf("%c",&inp);
		//LowerCase Convert to Upper
		if(islower(inp)){
			inp=toupper(inp);
		}
		//Switch Case Choice
		switch(inp){
			//Initialize Array
			case 'A':
				system("Color 09");
				clrscr();
				inputPage();
				gotoxy(25,4); printf("INITIALIZING. . .");
				gotoxy(25,6); printf("Enter Array Size: "); scanf("%d",&N);
					if(N>17){
						gotoxy(25,8); printf("Size Exceeds Border. . .Try again."); getch(); break;
					}
				initializeArr(&ia[0],&N);
				break;
			//Array Print
			case 'B':
				system("Color 0A");
				clrscr();
				inputPage();
				if(inspect(&ia[0])){
					break;
				}
				gotoxy(25,3); printf("ARRAY PRINT. . .");
				gotoxy(12,24); printf("Press any key to continue. . .");
				printArray(&ia[0],&N); gotoxy(42,24); getch();
				break;
			//Array Insert at Pos
			case 'C':
				system("Color 0B");
				clrscr();
				inputPage();
				if(inspect(&ia[0])){
					break;
				}
				gotoxy(25,3); printf("ARRAY INSERT AT POS. . .");
				gotoxy(25,4); printf("Insert Int: "); scanf("%d",&ITEM);
				cFlag=sameChecker(&ia[0],&N,ITEM);
				if(cFlag==1){
					
					break;
				}else{
					gotoxy(25,5); printf("Insert at Array[?]: "); scanf("%d",&K);
					if(K<N&&K>=0){
						N++;
						insPos(&ia[0],&N,ITEM,K);
					}else{
						gotoxy(25,6); printf("Cannot Accept Subscript beyond Array Size");
						K=0;
						getch();
						break;
					}
					
					getch();
				}
				break;
			//Array Insert at Front
			case 'D':
				system("Color 0D");
				clrscr();
				inputPage();
				if(inspect(&ia[0])){
					break;
				}
				gotoxy(25,3); printf("ENTER AN INTEGER TO INSERT IN FRONT. . .");
				gotoxy(25,4); printf("Insert Int: "); scanf("%d",&ITEM);
				cFlag=sameChecker(&ia[0],&N,ITEM);
				if(cFlag==1){
					break;
				}else{
					N++;
					insFront(&ia[0],&N,ITEM);
					getch();
				}
				break;
			//Array Remove at Pos
			case 'E':
				system("Color 0E");
				clrscr();
				inputPage();
				if(inspect(&ia[0])){
					break;
				}
				gotoxy(25,3); printf("ENTER INTEGER IN ARRAY TO REMOVE. . .");
				gotoxy(25,4); printf("ENTER Int: "); scanf("%d",&ITEM);
				cFlag=sameChecker(&ia[0],&N,ITEM);
				if(cFlag==1){
					
					removePos(&ia[0],&N,ITEM,K);
					N--;
					gotoxy(25,7); printf("Success!");
					gotoxy(18,9); printf("Removed %d in Array. . .New Array Size Updated! SIZE: %d",ITEM,N);
					gotoxy(20,11); printf("Press any key to view PrintArray. . ."); getch();
					clrscr(); inputPage(); printArray(&ia[0],&N); 
					gotoxy(12,24); printf("Press any key to continue. . ."); getch();
				}else{
					gotoxy(25,6); printf("ARRAY INTEGER NOT FOUND. . . Try again."); getch();
					break;
				}
				break;
			//Array Remove at Front
			case 'F':
				system("Color 0F");
				clrscr();
				inputPage();
				if(inspect(&ia[0])){
					break;
				}
					removeFront(&ia[0],&N,ITEM,K);
					N--;
					gotoxy(25,7); printf("Success!");
					gotoxy(18,9); printf("Removed Array[0]. . .New Array Size Updated! SIZE: %d",N);
					gotoxy(20,11); printf("Press any key to view PrintArray. . ."); getch();
					clrscr(); inputPage(); printArray(&ia[0],&N); 
					gotoxy(12,24); printf("Press any key to continue. . ."); getch();
				break;
			//Locate Int in Array
			case 'G':
				system("Color 09");
				clrscr();
				inputPage();
				if(inspect(&ia[0])){
					break;
				}
				gotoxy(25,3); printf("ENTER INTEGER TO LOCATE. . .");
				gotoxy(25,4); printf("ENTER Int: "); scanf("%d",&ITEM);
					if(ITEM==0){
						gotoxy(25,5);printf("Cannot Enter Zero!"); getch(); break;
					}else{
						int loc=locate(&ia[0],&N,ITEM);	
							cFlag=sameChecker(&ia[0],&N,ITEM);
								if(cFlag==1){
									gotoxy(25,7); printf("Success!");
									gotoxy(25,9); printf("Integer Located at Array[%d]",loc);
									gotoxy(20,11); printf("Press any key to view PrintArray. . ."); getch();
									clrscr(); inputPage(); printArray(&ia[0],&N); 
									gotoxy(40,(loc+5));printf ("%c  Located",174);
									gotoxy(12,24); printf("Press any key to continue. . ."); getch();
								}else{
									gotoxy(25,6); printf("ARRAY INTEGER NOT FOUND. . . Try again."); getch();
									break;
								}
							
					}
				break;
			//Bubble Sort Ascending
			case 'H':
				system("Color 0A");
				clrscr();
				inputPage();
				if(inspect(&ia[0])){
					break;
				}
					bubbleSortAsc(&ia[0],&N);
					gotoxy(25,7); printf("Success!");
					gotoxy(25,9); printf("Array Sorted in Ascending Order");
					gotoxy(20,11); printf("Press any key to view PrintArray. . ."); getch();
					clrscr(); inputPage(); printArray(&ia[0],&N); 
					gotoxy(12,24); printf("Press any key to continue. . ."); getch();
				break;
			//Bubble Sort Descending
			case 'I':
				system("Color 0B");
				clrscr();
				inputPage();
				if(inspect(&ia[0])){
					break;
				}
					bubbleSortDesc(&ia[0],&N);
					gotoxy(25,7); printf("Success!");
					gotoxy(25,9); printf("Array Sorted in Descending Order");
					gotoxy(20,11); printf("Press any key to view PrintArray. . ."); getch();
					clrscr(); inputPage(); printArray(&ia[0],&N); 
					gotoxy(12,24); printf("Press any key to continue. . ."); getch();
		}
	}while(inp!='J');
	
	//Terminating Program Notice
	clrscr();
	printf("PROGRAM TERMINATED. . . \n\nPress any key to exit. . . ");
	getch();
	return 0;
}
