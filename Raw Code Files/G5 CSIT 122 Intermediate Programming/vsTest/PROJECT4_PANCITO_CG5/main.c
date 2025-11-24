#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "customFunctions.h"

int main(int argc, char *argv[]) {
	int x,y;
	char inp;
	int N=0;
	int ia[25]={0};
	int i;
	int loc;
	int ITEM,K,cFlag=0;
	do{
		system("Color 0C");
		clrscr();
		landingGreet();
		gotoxy(52,17); scanf("%c",&inp);
		if(islower(inp)){
			inp=toupper(inp);
		}
		switch(inp){
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
									gotoxy(40,(loc+5));printf ("<-Located");
									gotoxy(12,24); printf("Press any key to continue. . ."); getch();
								}else{
									gotoxy(25,6); printf("ARRAY INTEGER NOT FOUND. . . Try again."); getch();
									break;
								}
							
					}
				break;
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
		
	clrscr();
	printf("PROGRAM TERMINATED. . . \n\nPress any key to exit. . . ");
	
	
	getch();
	return 0;
}
