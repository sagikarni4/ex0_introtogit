#include <stdio.h>
#define N 6

int course_number[N] = {4, 2, 1, 4, 3, 2};
int main() {
	for(int i = N-1; i >= 0; i--) {
		printf("%d", course_number[i]);
	}
	printf("\n");
	return 0;
}
