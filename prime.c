#define _CRT_SECURE_NO_WARNINGS

/*
	�ж�������������һƪ���£��ж�������N�־��磩
*/

#include<stdio.h> 
#include<math.h>//����sqr()

/*
	��һ���Գ�������������Ż���
*/

//int main() {
//	int i = 0, j = 0;
//	int count = 0;
//
//	for (i = 100; i <= 200; i++) {
//		for (j = 2; j < i; j++) {
//			if (i % j == 0) {
//				break;
//			}
//		}
//
//		if (j == i) {
//			count++;
//			printf("%d\t%d\n", i, count);
//		}
//	}
//	return 0;
//}


/*
	���������԰�����ɫ��� ɸѡ��
*/

int main() {
	int arr[100] = { 0 };
	for (int i = 0; i < 100; i++) {
		arr[i] = i + 1;
	}
	arr[0] = 0;
	/*
		����Ҫ���Ǵ���1����Ȼ������2Ҳ������������arr[0]=1��arr[1]=2�����ȡ����ˡ�������ֵΪ0���������鶼��ʼ��Ϊ0�ˣ�������������������д��
	*/

	for (int i = 1; i < 100; i++) {//����ֱ�Ӵ�arr[1]��ʼ
		arr[i] = i + 1;
	}

	for (int j = 2; j < sqrt(100); j++) {
		for (int i = j + 1; i < 100; i++) {
			if (arr[i] != 0 && arr[i] % j == 0) {
				arr[i] = 0;
			}
		}
	}


	for (int i = 1, n = 0; i < 100; i++) {
		if (arr[i] != 0) {
			printf("%d\t", arr[i]);
			n++;
		}
		if (n == 10) {
			printf("\n");
			n = 0;
		}
	}
	return 0;
}


