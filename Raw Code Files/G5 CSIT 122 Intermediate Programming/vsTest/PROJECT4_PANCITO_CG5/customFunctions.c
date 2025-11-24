#include<windows.h>
#include<process.h>
#include<stdio.h>
#include<conio.h>
//ARRAYS

//void createArray(int LA[], int n){
//	
//}
//void readArray(int la[], int n){
//	int i;
//	for (i=0;i<n;i++){
//		printf ("LA [%d] = ",i);
//		scanf ("%d", &la[i]);		
//	}
//}
void printArray(int la[], int *n)
{
	int i,l=*n;
	gotoxy(22,3); printf("Array Size: [%d]\tArray Elements: %d",l,l);
	for (i=0;i<l; i++){
		gotoxy(25,(i+5));printf ("LA[%d] = %d\n",i,la[i]);
	}
}

//int sumAll (int la[], int n){
//	int i, sum=0;
//	for (i=0;i<n;i++)
//		sum = sum + la[i];	
//
//return sum;
//}
//float avePosEven(int LA[], int n){
//	int i = 0;
//	float sum = 0.0;
//	int count = 0;
//	
//	for (i=0;i<n;i++){
//		if (LA[i]> 0 && LA [i] %2==0){ 
//			sum += LA[i];
//			count++;
//		}
//	}
//	if (count > 0){
//	
//		return sum/count;
//	}else {
//		return 0.0;
//	}
//	
//}
//int largest(int LA[], int n) {
//    int max = LA[0]; 
//    int i;
//    for (i = 1; i < n; i++) {
//        if (LA[i] > max) {
//            max = LA[i];
//        }
//    }
//
//    return max;
//}
//int smallest(int LA[], int n){
//
//	int small = LA[0];
//	int i;
//	
//	for (i=1;i<n;i++)
//		if (LA[i] < small){
//			small = LA[i];
//		}
//	return small;
//}
int locate(int la[0],int *n,int item){

	int i,l=*n;
	
	for (i=0;i<l;i++){
		if (la[i] == item){
			return i; break;
		}
	}
}


//Terminal UI

void br(void){
	printf("#####################################\n");
}
void landingGreet(){
	
	drawDBox(10,1,67,20);
	
	drawDBox(12,2,65,19);
	
	gotoxy(22,4); printf("~~~~~~< ARRAY OPERATIONS >~~~~~~");

	gotoxy(28,6); printf("[A] INITIALIZE Array"); 
	gotoxy(28,7); printf("[B] PRINT Array"); 
	gotoxy(28,8); printf("[C] INSERT At Pos"); 
	gotoxy(28,9); printf("[D] INSERT Front"); 
	gotoxy(28,10); printf("[E] REMOVE At Pos"); 
	gotoxy(28,11); printf("[F] REMOVE Front");
	gotoxy(28,12); printf("[G] LOCATE");
	gotoxy(28,13); printf("[H] SORT Ascending <Bubble Sort>");
	gotoxy(28,14); printf("[I] SORT Descending <Bubble Sort>");
	gotoxy(28,15); printf("[J] EXIT");
	gotoxy(25,17); printf("Enter a VALID choice [A-J]: "); printf("\n");	
}

void inputPage(){
	
	drawDBox(10,0,75,25);
	gotoxy(30,1); printf("~~~~~~< ARRAYS >~~~~~~");

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

//ARRAYS PROJ4

void initializeArr(int la[0],int *n){
	int i=0,j,l=*n;
		for(i=0;i<l;i++){
			clrscr();
			inputPage();
			gotoxy(25,4); printf("INITIALIZING. . .");
			gotoxy(25,6); printf("ARRAY SIZE: %d",*n);
			gotoxy(25,8);printf("Enter Data in Array[%d]: ",i); scanf("\n%d",&la[i]);
			for(j=0;j<i;j++){
				if(la[j-1]==la[i]){
					gotoxy(20,10); printf("Inputted Integer Already Exists. . . Try Again."); i--; getch();
				}
			}
			}
	gotoxy(20,11); printf("Press any key to view PrintArray. . ."); getch();
	clrscr(); inputPage(); printArray(&la[0],&l); 
	gotoxy(12,24); printf("Press any key to continue. . ."); getch();
}

int inspect(int la[0]){
	if(la[0]==0&&la[1]==0){
		gotoxy(25,4); printf("NO ARRAY DETECTED. . .");
		gotoxy(25,6); printf("PLEASE INITIALIZE AN ARRAY");
		gotoxy(25,8); printf("Press any key to continue. . ."); getch();
		return 1;
	}else{
		return 0;
	}
}

int sameChecker(int la[0],int *n,int item){
	int i,flag=0,l=*n;
	for(i=0;i<l;i++){
		if(la[i]==item){
		gotoxy(25,5); printf("Integer exists in Array. . ."); getch();
		flag=1; 
		break; 
		}
	}
	if(flag==1){
		return 1;
	}else{
		return 0;
	}
}

int insPos(int la[0],int *n,int item,int k){
	int i,l=*n;
	for(i=l-1;i>=k;i--){
		la[i]=la[i-1];
//		printf("%d\n",la[i]);
	}
	la[k]=item;
	gotoxy(25,7); printf("Success!"); 
	gotoxy(25,9); printf("Integer %d inserted at Array[%d]",item,k); 
	gotoxy(20,11); printf("Press any key to view PrintArray. . ."); getch();
	clrscr(); inputPage(); printArray(&la[0],&l); 
	gotoxy(12,24); printf("Press any key to continue. . .");
}

int insFront(int la[0],int *n,int item){
	int i=0,l=*n;
	for(i=l-1;i>=0;i--){
		la[i]=la[i-1];
	}
	la[0]=item;
	gotoxy(25,7); printf("Success!"); 
	gotoxy(25,9); printf("Integer %d inserted at Array[0]",item); 
	gotoxy(20,11); printf("Press any key to view PrintArray. . ."); getch();
	clrscr(); inputPage(); printArray(&la[0],&l);
	gotoxy(12,24); printf("Press any key to continue. . .");
}

int removePos(int la[0],int *n,int item,int k){
	int i=0,l=*n,start;
	for(i=0;i<l;i++){
		if(la[i]==item){
		start=i;
		break; 
		}
	}
	for(i=start;i<l;i++){
		la[i]=la[i+1];
	}
}

int removeFront(int la[0],int *n,int item,int k){
	int i=0,l=*n,start=0;
//	for(i=0;i<l;i++){
//		if(la[i]==item){
//		start=i;
//		break; 
//		}
//	}
	for(i=start;i<l;i++){
		la[i]=la[i+1];
	}
}

void bubbleSortDesc(int la[0], int *n){
	int step = 0,i=0,l=*n;

  for (step = 0; step < l - 1; ++step) {
      

    for (i = 0; i < l - step - 1; ++i) {
      

      if (la[i] < la[i + 1]) {
        

        int temp = la[i];
        la[i] = la[i + 1];
        la[i + 1] = temp;
      }
    }
  }
}

void bubbleSortAsc(int la[0], int *n){
	int step = 0,i=0,l=*n;

  for (step = 0; step < l - 1; ++step) {
      

    for (i = 0; i < l - step - 1; ++i) {
      

      if (la[i] > la[i + 1]) {
        

        int temp = la[i];
        la[i] = la[i + 1];
        la[i + 1] = temp;
      }
    }
  }
}


