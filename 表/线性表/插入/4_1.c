/*
 * 要在第 2 个位置插入一个元素 9
 */
#include <stdio.h>

void print(int *arr, int len)
{
	int i;
	for (i = 0; i < len; ++i)
	{
		printf("%d\n", arr[i]);
	}
}

int getLen(int *arr)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		if (arr[i] == 0)
		{
			return i;
		}
	}
}

void insert(int *arr, int pos, int value) 
{
	int i;
	int len = getLen(arr); // 获取最后结束的位置

	// 从最后向前开始循环
	for (i = len; i >= 0; i--)
	{
		// 当到了要插入的位置
		if (i == pos)
		{
			arr[pos] = value;
			break;
		} 
		// 其他情况把值往后移动
		else
		{
			arr[i + 1]  = arr[i];
		}
	}
}

int main(int argc, char const *argv[])
{
	int i;
	int arr[10] = { 1, 2, 3, 5, 8 };
	int pos = 2 - 1; // 要要插入的位置 (第一个元素是 arr[0] 第二个自然是 2 - 1 = 1)
	int value = 9;   // 要插入的值

	// 在数组 arr 的第 pos 个位置插入 value
	insert(arr, pos, value);
	// 打印当前的数组
	print(arr);
}

/*

关于这个方式的局限性:

1.	数组 arr 必须先制定长度 （上述程序就指定了10）。
	如果长度预估不够，就无法使用了。数据会溢出。

2.	插入一个元素需要挪动其他元素才能空出位置。
	最坏的情况（插入第一个位置）需要挪动整张表

*/