#include <stdio.h>
#include <conio.h>

int main ()
{
    int num1,num2,ans;
    char oper;
    
    printf ("Input two numbers:\n\n");
    scanf ("%d\t%c\t%d",&num1,&oper,&num2);
    
    //equations
    
    switch(oper)
    {
      case '-': ans = num1-num2;
      break;
      case '+': ans = num1+num2;
      break;
      case '/': ans = num1/num2;
      break;
      case '*': ans = num1*num2;
      break;
      
      default: goto fail;        
                
                }
    
    fail:
         printf ("\nFailed.");
    
    printf ("\n%d%c%d=%d",num1,oper,num2,ans );
    
    getch();
    return 0;
           }
