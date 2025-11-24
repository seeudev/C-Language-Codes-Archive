//CHRISTIAN HARRY R. PANCITO CSIT221-G11
#include<stdio.h>
#include "BitSet.h"

typedef int BitSet[MAX];
int i,flag,ctr;

void initialize(BitSet set){
	for(i=0;i<MAX;i++){
		set[i]=0;
//		printf("bitset %d is %d\n",i,set[i]);
	}
}
//i.	Set all the bits to 0.
void add(BitSet set,int elem){
	set[elem]=1;
}
//i.	Set the elemth bit to 1
void display(BitSet set){
	for(i=0;i<MAX;i++){
		printf(" BitSet %d is %d\n",i,set[i]);
	}
}
//i.	Display the content of the bit, from position 0 to MAX-1
int isEmpty(BitSet set){
	flag=0;
	for(i=0;i<MAX;i++){
		if(set[i]==1){
			flag=1;
		}
	}
	if(flag==1){
		return 0;
	}else{
		return 1;
	}
}
//i.	Check if BitSet is empty. BitSet is empty if all bits are 0.
int cardinality(BitSet set){
	ctr=0;
	for(i=0;i<MAX;i++){
		if(set[i]==1){
			ctr++;
		}
	}
	return ctr;
}
//i.	Return the number of bits that are equal to 1
void getUnion(BitSet result,BitSet set1, BitSet set2){
	for(i=0;i<MAX;i++){
		result[i]=set1[i];
	}
	for(i=0;i<MAX;i++){
		if(result[i]==0){
			result[i]=set2[i];
		}
	}
}
//i.	Get the union of set1 and set2, storing it to result. The union of sets is an operation that combines all the elements of two or more sets.
void intersection(BitSet result,BitSet set1, BitSet set2){
	for(i=0;i<MAX;i++){
		if(set1[i]==1&&set2[i]==1){
			result[i]=1;
		}
	}
}
//i.	Get the intersection of set1 and set2, storing it to result. The union of sets is an operation that results in a new set containing only the elements that are present in all of the original sets.
void difference(BitSet result,BitSet set1, BitSet set2){
	for(i=0;i<MAX;i++){
		result[i]=set1[i];
	}
	for(i=0;i<MAX;i++){
		if(result[i]==1&&set2[i]==1){
			result[i]=0;
		}
	}
}
//i.	Get the difference of set1 and set2, storing it to result. The union of sets is an operation that results in a new set containing the elements that are present in the first set but not in the second set.
int isSubset(BitSet set1,BitSet set2){
	BitSet difsub;
	initialize(difsub);
	if(isEmpty(set1)){
		return 1;
	}
	difference(difsub,set1,set2);
//	printf("difference sub\n"); display(difsub);
	if(isEmpty(difsub)){
		return 1;
	}else{
		return 0;
	}
}
//i.	Check whether set1 is a subset of set2. a subset is a set where all elements of the first set (the subset) are also elements of the second set (the superset).
int areDisjoint(BitSet set1,BitSet set2){
	flag=0;
	for(i=0;i<MAX;i++){
		if(set1[i]==1&&set2[i]==1){
			flag=1;
		}
	}
	if(flag){
		return 0;
	}else{
		return 1;
	}
}
//i.	Check whether the sets are disjointed, meaning they have no common elements. 
int areEqual(BitSet set1,BitSet set2){
	flag=0;
	for(i=0;i<MAX;i++){
		if(set1[i]==set2[i]){
			flag=flag;
		}else{
			flag=1;
		}
//		printf("flag %d",flag);
	}
	if(flag){
		return 0;
	}else{
		return 1;
	}
}
//i.	Check whether the sets are equal.

