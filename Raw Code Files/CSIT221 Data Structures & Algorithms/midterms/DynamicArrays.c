#include<stdio.h>
#include<stdlib.h>

int *createArr(int size){
	int *newArr = (int*)malloc(size*sizeof(int));
	int i;
	for(i=0;i<size;i++){
		newArr[i]=0;
	}
	return newArr;
}

int *initializeArr(int *arr,int size){
	int i;
	printf("\nInitialize %d integers:\n",size);
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	return arr;
}

int *insertFront(int *arr, int *size,int data){
	arr=(int*)realloc(arr,(*size+1)*sizeof(int));
	int i;
	for(i=*size;i>0;i--){
		arr[i]=arr[i-1];
	}
	arr[0]=data;
	(*size)++;
	return arr;
}

int *insertBack(int *arr, int *size,int data){
	arr=(int*)realloc(arr,(*size+1)*sizeof(int));
	arr[*size]=data;
	(*size)++;
	return arr;
}

void printArr(int *arr, int size);

int main (){
	int n,inp=0;
	printf("Enter size: "); scanf("%d",&n);
	int *arr=createArr(n);
	printArr(arr,n);
	arr=initializeArr(arr,n);
	printArr(arr,n);
	printf("Insert Front: "); scanf("%d",&inp);
	arr=insertFront(arr,&n,inp);
	printArr(arr,n);
	printf("Insert Back: "); scanf("%d",&inp);
	arr=insertBack(arr,&n,inp);
	printArr(arr,n);
}

void printArr(int *arr, int size){
	int i;
	for(i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
	printf("Size: %d\n",size);
}
