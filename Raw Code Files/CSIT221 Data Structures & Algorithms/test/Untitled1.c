#include<stdio.h>

int main (){
    char arr[8];
    int i=0,total=0;
    printf("Enter 8 characters:\n");
    for(i=0;i<7;i++){
        scanf("%c\n",&arr[i]);
        if(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u'||arr[i]=='A'||arr[i]=='E'||arr[i]=='I'||arr[i]=='O'||arr[i]=='U'){
            total++;
        }
    }
    printf("Number of vowel elements: %d",total);
    return 0;
}
