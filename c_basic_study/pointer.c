 #include <stdio.h>

int swapStudent(int* l, int* r)
{
	int temp;
	if(*l > *r)
	{
		temp = *l;
		*l = *r;
		*r = temp;
	}
}

int main()
{
	int left;
	int right;
	scanf("%d", &left);
	scanf("%d", &right);
	
	swapStudent(&left, &right);
	
	printf("왼쪽 : %d, 오른쪽 : %d", left, right);
	
	return 0;
}