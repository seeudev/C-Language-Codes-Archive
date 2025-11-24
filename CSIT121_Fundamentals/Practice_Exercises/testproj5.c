#include <stdio.h>

int main() {
	int i,j,k,l;
  int my_array[2][2][3][3] = {
    { {{10, 12, 14}, {16, 18, 20}, {22, 24, 26}},
      {{ 1,  2,  3}, { 4,  5,  6}, { 7,  8,  9}} },
    { {{11, 13, 15}, {17, 19, 21}, {23, 25, 27}},
      {{ 8, 10, 12}, {14, 16, 18}, {20, 22, 24}} }
  };

  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      printf("Layer %d, Row %d:\n", i, j);
      for (k = 0; k < 3; k++) {
        for (l = 0; l < 3; l++) {
          printf("%d ", my_array[i][j][k][l]);
        }
        printf("\n");
      }
      printf("\n");
    }
  }

  return 0;
}
