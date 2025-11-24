#include<stdio.h>
#include<stdlib.h>

int *insertFront(int *arr, int *size, int val){
    int i;
    arr = (int*)realloc(arr,(*size+1)*sizeof(int));
    for(i=*size;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=val;
    (*size)++;
    return arr;
}

int *insertBack(int *arr, int *size, int val){
    int i;
    arr = (int*)realloc(arr,(*size+1)*sizeof(int));
    arr[(*size)]=val;
    (*size)++;
    return arr;
}

int main (){
    
    int *arr=(int*)malloc(6*sizeof(int));
    int i;
    int n=6;
    for(i=0;i<n;i++){
        scanf("%d\n",&arr[i]);
    }
    print(arr,n);
    
    arr=insertFront(arr,&n,4);
    print(arr,n);
    
    arr=insertBack(arr,&n,5);
    print(arr,n);
    
    return 0;
}

void print(int *arr, int size){
    int i;
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
