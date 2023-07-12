#include<stdio.h>
#define N 10

int halfSearch(int* nums, int numSize, int target);
void shellSort(int* nums, int numSize);

int main() {

    //二分查找法（折半查找法）前提是：有序数组
    int nums[N] = { 0 };
    int target = 0, i = 0;

    printf("请输入%d个元素的数组:\n", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &nums[i]);
    }

    shellSort(nums, N);

    printf("该数组排序后的结果:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", nums[i]);
    }

    printf("\n请输入待查找的元素:\n");
    scanf("%d", &target);

    halfSearch(nums, N, target);

    //printf("%d", halfSearch(nums, N, target));

    return 0;
}

int halfSearch(int* nums, int numSize, int target) {
    int l = 0, h = numSize - 1;          //l : low     h : high
    int mid = 0;                         //mid : middle

    while (l <= h) {     //一定是<=，如果缺少=的话查找最右边数字是找不到的
        int mid = (l + h) / 2;
        if (nums[mid] > target) {
            h = mid - 1;
        }
        else if (nums[mid] < target) {
            l = mid + 1;
        }
        else {
            return mid;
        }
    }
    printf("没有找到！\n");             //发现没有，返回值为int类型的函数，也可以打印的！
    return -1;                         //而且没有printf打印%d的时候return返回的值不打印！
}

void shellSort(int* nums, int numSize) {
    int i = 0, j = 0, ins = 0, inc = 0;       //ins : insert      inc : increment
    for (inc = numSize / 2; inc > 0; inc /= 2) {
        for (i = inc; i < numSize; i++) {
            ins = nums[i];
            for (j = i; j >= inc && ins < nums[j - inc]; j -= inc) {
                nums[j] = nums[j - inc];
            }
            nums[j] = ins;
        }
    }
}
