#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>

/*
	ʹ�� goto ʵ�֣�
*/
int main() {
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("���ĵ��Խ���60���ڹػ������롰ȡ���ػ������ɹر�\n�����룺");
	scanf("%s", input);
	if (strcmp(input, "ȡ���ػ�") == 0) {
		system("shutdown -a");
	}
	else {
		goto again;
	}

	return 0;
}

/*
	��ͨ������
*/
//int main() {
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//
//	while (1) {
//		printf("���ĵ��Խ���60���ڹػ������롰ȡ���ػ������ɹر�\n�����룺");
//		scanf("%s", input);
//		if (strcmp(input, "ȡ���ػ�") == 0) {
//			system("shutdown -a");
//			break;
//		}
//	}
//	
//	return 0;
//}

