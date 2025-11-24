#include <stdio.h>
#include <conio.h>

int main ()
{
    float num1;
    float num2;
    float ans;
    char oper;
    
    printf ("Enter calculation:\n\n");
    scanf("%f %c %f",&num1,&oper,&num2);
    switch(oper)
    {
    case '+': ans = num1+num2;
    break;
    case '-': ans = num1-num2;
    break;
    case '*': ans = num1*num2;
    break;
    case '/': ans = num1/num2;
    break;
    
    default: goto fail;
}
 printf ("\n\nSolution:");
 printf ("\n\n%g%c%g = %g\n\n",num1,oper,num2,ans);
 goto exit;
 fail:
      printf ("Failed.\n");
 exit:
      return 0;

}
