#include <stdio.h>
#include <conio.h>
#include <string.h>



int main ()

{	
	char inp0, inp1, name[30];
	printf("Hello world!(y/n)\n");
	inp0 = getch();
	switch(inp0)
	{
		case'y':
			system("cls");
			printf("Good! What's your name?:\n");
			scanf("%s",name);
			system("cls");
			printf("%s\n",name); printf("Is this right?<y/n>:\n");
			inp1 = getch();
			switch(inp1)
			{
			case 'y':
				system("cls");
				printf("\nNice to meet you %s!",name);
				
				
				break;
			case 'n':
				printf("\nnoooo");
				break;
		}
			
			
			break;
		case'n':
			printf("no");
			break;
		default:
			printf("Failed.");
			break;
			
	}
	
	
	
	return 0;
}


