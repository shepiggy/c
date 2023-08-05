
/*
	数组nums包含从0到n的所有整数，但其中缺了一个。
	请编写代码找出那个缺失的整数。你有办法在O(n)时间内完成吗？

	示例 1：
	输入：[3,0,1]
	输出：2
 

	示例 2：
	输入：[9,6,4,2,3,5,7,0,1]
	输出：8
*/


int missingNumber(int* nums, int numsSize) {
	int x = 0;
	for (int i = 0; i <= numsSize; i++) {//数组元素范围是[0, n]，包含n，所以需要 =
		x ^= i;
	}
	for (int i = 0; i < numsSize; i++) {//数组的元素个数是n，所以不需要 =
		x ^= *(nums + i);
	}
	return x;
}