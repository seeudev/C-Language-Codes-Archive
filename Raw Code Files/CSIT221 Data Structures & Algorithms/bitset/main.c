#include<stdio.h>
#include "BitSet.h"

int main (){
	BitSet set1;
	initialize(set1);
	add(set1, 3); add(set1, 6); add(set1, 7); add(set1, 8); add(set1, 5);
	printf("Set1\n");
	display(set1);
	if(isEmpty(set1)){
		printf("isEmpty");
	}else{
		printf("notEmpty");
	}
	printf("\nCardinality: %d\n",cardinality(set1));
	BitSet set2;
	initialize(set2);
	add(set2, 3); add(set2, 6); add(set2, 7); add(set2, 8);
	printf("Set2\n");
	display(set2);
	BitSet uni;
	initialize(uni);
	getUnion(uni,set1,set2);
	printf("Union\n");
	display(uni);
	BitSet inter;
	initialize(inter);
	intersection(inter,set1,set2);
	printf("Intersection\n"); display(inter);
	BitSet diff;
	initialize(diff);
	difference(diff,set1,set2);
	printf("Difference\n"); display(diff);
	if(isSubset(set1,set2)){
		printf("isSubset\n");
	}else{
		printf("notSubset\n");
	}
	if(areDisjoint(set1,set2)){
		printf("areDisjointed\n");
	}else{
		printf("notDisjointed\n");
	}
	if(areEqual(set1,set2)){
		printf("areEqual\n");
	}else{
		printf("notEqual\n");
	}
	getch();
	return 0;
}
