#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "mdArray.h"

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

int main(int argc, char *argv[]) {
	
	int choice;
    int i=0,j=0,k=0,l=0;
    
    do {
    	system("cls");
        landingGreet();
        gotoxy(29,11); border();
		gotoxy(22,13);printf(NEONCYAN"Enter valid choice [TME] only: "RESET); scanf(" %c", &choice);
        switch(choice) {
            case 'T':
            case 't': {
                system("cls");
                inputPage();
                int rows, cols;
				  while (1) {
				    printf("\n\nEnter the number of rows and columns (0 0 to exit LOOP): ");
				    scanf("%d %d", &rows, &cols);
				
				    if (rows == 0 && cols == 0) {
				      break;
				    }
				
				    int matrix[rows][cols];
				
				    printf("Enter the matrix elements:\n");
				    for (i = 0; i < rows; i++) {
				      for (j = 0; j < cols; j++) {
				        scanf("%d", &matrix[i][j]);
				      }
				    }
				
				    int transposed[cols][rows];
				    transpose_matrix(rows, cols, matrix, transposed);
				    printf("\n");
					border();
					printf("Inputted Matrix:\n");
					
					for (i = 0; i < rows; ++i) {
                    for (j = 0; j < cols; ++j) {
                        printf("%5d ", matrix[i][j]);
                    }
                    printf("\n");
                }
                	printf("\n");
					border();
				    printf("Transposed matrix:\n");
				    for (i = 0; i < cols; i++) {
				      for (j = 0; j < rows; j++) {
				        printf("%5d ", transposed[i][j]);
				      }
				      printf("\n");
				    }
				
				    printf("\n");
				  } 
                getch();
                break;
            }
            case 'M':
            case 'm': {
                // Multi-dimensional array initialization
                system("cls");
                inputPage();
                int fourDarray[2][2][3][3] = 	
				{
    				{ 
						{
							{10, 12, 14}, 
							{16, 18, 20}, 
							{22, 24, 26}
						},
      					{
						  	{ 1,  2,  3}, 
							{ 4,  5,  6}, 
							{ 7,  8,  9}
						} 
	  				},
    				{ 
						{
							{11, 13, 15}, 
							{17, 19, 21}, 
							{23, 25, 27}
						},
      					{
						  	{ 8, 10, 12}, 
							{14, 16, 18}, 
							{20, 22, 24}
						} 
	  				}
  				};
                
                // Printing the array elements
                printf("\n");
                printf("< 4D > Multi-Dimensional Array\n\n");
                print_4d_array(fourDarray);
                getch();
                break;
            }
            case 'E':
            case 'e':
            	system("cls");
                inputPage();
                printf("\n\nExiting...\n");
                getch();
                break;
            default:
            	system("cls");
                inputPage();
                printf("\n\nInvalid choice. Please enter again.\n\n");
                getch();
        }
    } while(choice != 'E' && choice != 'e');
    
    return 0;
}
