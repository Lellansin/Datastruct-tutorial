#include <stdio.h> // for printf

int main()
{
	int i;
	int a[10] = { 1, 2, 3, 5, 8};

	// 遍历输出数组
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", a[i]);
	}

	return 0;
}