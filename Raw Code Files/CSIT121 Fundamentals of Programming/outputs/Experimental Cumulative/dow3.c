#include<stdio.h>

int main ()
{

    char inp;
    int lean;

    do
    {
        printf("Do you still want to play [Y/N]: "); scanf("\n%c",&inp);
        
        lean != (inp == 'Y' || inp == 'y');
        lean = (inp == 'N' || inp == 'n');
        if (inp == 'Y' || inp == 'y' || inp == 'N' || inp == 'n')
        {
            lean = lean;
        }
        else
        {
        	printf("Wrong answer\n");
		}
    }
    while(lean != 1);
}
