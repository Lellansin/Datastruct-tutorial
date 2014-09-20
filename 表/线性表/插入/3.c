/*
 * 要在第 2 个位置插入一个元素 9
 */
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int i;
	int arr[10] = { 1, 2, 3, 5, 8};
	int len = 0; 	 // 当前长度
	int pos = 2 - 1; // 要要插入的位置 (第一个元素是 arr[0] 第二个自然是 2 - 1 = 1)
	int value = 9;   // 要插入的值

	// 把从 pos 到结尾的元素都完后移动一格
		// 1.可以通过, 找到这张表的结尾, 然后从最后依次完后移动
		// 2.也可以从第 pos 个位置开始往后移动
	// 然后在第 pos 个位置写入要插入的数据
}