#include <stdio.h>
int main() 
{
	int i, max, tri_num = 0;
	printf("Enter the maximum number.\n");
	scanf_s("%d", &max);
	for (i = 1; i <= max; i++) {
		tri_num = tri_num + i;
		printf("The triangular number of %d is %d\n", i, tri_num);
	}

	return 0;
}