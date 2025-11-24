#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "customFunctions.h"

	int inp;
	int first[5]={0,0,0,0,0};
	int eco[5]={0,0,0,0,0};

int main(int argc, char *argv[]) {
	int c, flag=0;
	
	while(flag==0){
		if(first[4]==1&&eco[4]==1){
			clrscr();
			drawSBox(20,13,55,20);
			gotoxy(32,14);printf("SEATS FULL\n");
			gotoxy(22,16);printf("THANK YOU FOR CHOOSING SEES. . .\n");
			gotoxy(23,18);printf("PLEASE WAIT FOR THE NEXT FLIGHT\n");		
			gotoxy(12,24);printf("Press any key to continue. . ."); break; getch();
		}
		clrscr();
		menuwindow(&first[0],&eco[0]);
		gotoxy(30,11);printf("ENTER [1 OR 2]: "); scanf("%d",&inp);
		if(inp==1){
			c = check(&first[0]);
			//printf("%d",c);
			if(c==0){
				clrscr();
				add(&first[0]);
				menuwindow(&first[0],&eco[0]);
				gotoxy(30,11);printf("TICKET: ");
				gotoxy(28,17);printf("TYPE: First Class Section\n");
				gotoxy(28,18);printf("SEAT: FC #"); 
				gotoxy(12,24);printf("Press any key to continue. . ."); getch();
			}else{
				clrscr();
				add(&eco[0]);
				menuwindow(&first[0],&eco[0]);
				gotoxy(30,11);printf("TICKET: ");
				gotoxy(28,17);printf("TYPE: Economy Class Section\n");
				gotoxy(28,18);printf("SEAT: EC #");
				gotoxy(22,19);printf("NOTICE: TRANSFERRED TO ECONOMY");
				gotoxy(12,24);printf("Press any key to continue. . ."); getch();
			}
		}else if(inp==2){
			c=check(&eco[0]);
			if(c==0){
				clrscr();
				add(&eco[0]);
				menuwindow(&first[0],&eco[0]);
				gotoxy(30,11);printf("TICKET: ");
				gotoxy(28,17);printf("TYPE: Economy Class Section\n");
				gotoxy(28,18);printf("SEAT: EC #");
				gotoxy(12,24);printf("Press any key to continue. . ."); getch();
			}else{
				clrscr();
				add(&first[0]);
				menuwindow(&first[0],&eco[0]);
				gotoxy(30,11);printf("TICKET: ");
				gotoxy(28,17);printf("TYPE: First Class Section\n");
				gotoxy(28,18);printf("SEAT: FC #");
				gotoxy(22,19);printf("NOTICE: TRANSFERRED TO FIRST CLASS");
				gotoxy(12,24);printf("Press any key to continue. . ."); getch();
			}
		}else{
			clrscr();
			drawSBox(20,13,55,20);
			gotoxy(25,17);printf("INVAILD INPUT TRY AGAIN. . .\n");
			gotoxy(28,16);printf("INPUT ONLY 1 or 2\n");
			gotoxy(12,24);printf("Press any key to continue. . ."); getch();
		}
	}	
	gotoxy(12,24);printf("Press any key to continue. . ."); getch();
	return 0;
}
