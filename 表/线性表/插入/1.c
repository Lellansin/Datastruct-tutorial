#include <stdio.h>

int main(int argc, char const *argv[])
{
	// 定义一个整形数组 arr 长度 10
	int arr[10] = { 1, 2, 3, 5, 8};
	// 要在第 2 个位置插入一个元素 9 如果这样写
	a[1] = 9;
	// 肯定不行, 这样就会变成：
	// { 1, 9, 3, 5, 8} 而原来的元素就被抹掉了
}