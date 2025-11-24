//CHRISTIAN HARRY R. PANCITO CSIT221-G11
#define MAX 10

typedef int BitSet[MAX];
void initialize(BitSet set);
void add(BitSet set,int elem);
void display(BitSet set);
int isEmpty(BitSet set);
int cardinality(BitSet set);
void getUnion(BitSet result,BitSet set1, BitSet set2);
void intersection(BitSet result,BitSet set1, BitSet set2);
void difference(BitSet result,BitSet set1, BitSet set2);
int isSubset(BitSet set1,BitSet set2);
int areDisjoint(BitSet set1,BitSet set2);
int areEqual(BitSet set1,BitSet set2);
