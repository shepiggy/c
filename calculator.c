#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h> 


void menu() {
	printf("***  1.Add        2.Sub  ***\n");
	printf("***  3.Mul        4.Div  ***\n");
	printf("***        0.exit        ***\n");
}

int Add(int x, int y) {
	return x + y;
}
int Sub(int x, int y) {
	return x - y;
}
int Mul(int x, int y) {
	return x * y;
}
int Div(int x, int y) {
	return x / y;
}

/*
	��������򵥵ķ�����1��
*/
//int main() {
//	int input = 0;
//
//	int x = 0, y = 0;
//	do {
//		menu();
//		printf("�����룺");
//		scanf("%d", &input);
//		
//		switch (input) {
//		case 1:
//			printf("������������������");//����scanf�������Ҫ�س������ǲ������ȡ�س������ʹprintf���ݻس�����һ�У����printf�ڲ���Ҫ'\n'
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Add(x, y));//ͬ�ϲ���Ҫ'\n'�������'\n'��Ϊ�˺���Ļ���
//			break;
//		case 2:
//			printf("������������������");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("������������������");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("������������������");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case 0://���Կ���switch case�����case��������ֿ������򣬼���������дcase 4����дcase 0
//			printf("�����˳�����\n");
//			break;
//		default:
//			printf("�������ֲ���ȷ�����������룺\n");
//			//[break;]
//		}
//	} while (input);
//	printf("�˳��ɹ�\n");
//
//	return 0;
//}


/*
	������ָ�����飩2��
*/
//int main() {
//	int input = 0;
//	int x = 0, y = 0;
//	int (*pfArr[5])(int, int) = { 0, Add, Sub, Mul, Div };//ѧϰһ������ķ��õ����0�Ͷ�Ӧ0���˳��������������Ҳ�պ�menu�ж�Ӧ
//	do {
//		menu();
//		printf("�����룺");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4) {
//			printf("������������������");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);//��ܰ��ʾ��(*pfArr[input])(x, y)Ҳ�ǿ��Ե�
//			printf("%d\n", ret);
//		}
//		else if (input == 0) {
//			printf("�����˳�����\n");
//		}
//		else {
//			printf("�������ֲ���ȷ�����������룺\n");
//		}
//	} while (input);
//	printf("�˳��ɹ�\n");
//	return 0;
//}



/*
	���ص���������1�Ļ������޸ģ�3��
*/
void Calc(int (*pf)(int, int)) {
	int x = 0, y = 0;
	printf("������������������");
	scanf("%d%d", &x, &y);
	printf("%d\n", pf(x, y));//��ܰ��ʾ��(*pf)(x, y) Ҳ�ǿ��Ե�
}

int main() {
	int input = 0;
	
	
	do {
		menu();
		printf("�����룺");
		scanf("%d", &input);
			
		switch (input) {
		case 1:
			Calc(Add);
			break;
		case 2:
			Calc(Sub);
			break;
		case 3:
			Calc(Mul);
			break;
		case 4:
			Calc(Div);
			break;
		case 0:
			printf("�����˳�����\n");
			break;
		default:
			printf("�������ֲ���ȷ�����������룺\n");
			//[break;]
		}
	} while (input);
	printf("�˳��ɹ�\n");
	return 0;
}