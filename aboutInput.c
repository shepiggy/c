#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h> 
int main() {
	/*
	��ʽһ��
	*/

	/*
	char temp = 0, str[10] = {0};
	printf("����������������ַ�����");
	scanf("%s", str);

	//����������ַ����к��ո񣬵��»��������пո����ַ��������ո�
	while ((temp = getchar()) != '\n') {//ע���ǲ����� '\n'
		;//������뿴����ʹ��putchar()�鿴�ո����ַ�����ʲô��Ϊ�˱��ڹ۲����putchar('\t')�ָ�������
	}
	//�Ӵ˻������Ϳ��ˣ�������һ��ʹ��scanf()
	//���scanf()����int�Ļ��Ͳ���Ҫ�����Ǹ�while��
	*/


	/*
		��ʽ����
	*/

	char str2[10] = { 0 };
	printf("����������������ַ�����");
	scanf("%s", str2);
	printf("\n%s", str2);//���\n����û�У���Ϊ������scanf�����������Ҫ�س����������������������һ�λ��ж���Ҳ�ᱣ���ڻ�������
	
	//putchar(getchar());
	char temp = getchar();
	printf("\t%d", temp);

	scanf("%s", str2);
	printf("\n%s", str2);

	//putchar(getchar());
	temp = getchar();
	printf("\t%d", temp);//�������12�ո�34�����ӡ���Ϊ

	return 0;
}

//int main() {
//	int a = 9;
//	char c = 0;
//	char str[10] = { 0 };
//
//	/*scanf("%d", &a);//��ͷ�Ŀո񶼲�ʶ��
//	printf("%d", a);*///������涨���int a = 9;
//
//
//	/*scanf(" %c", &c);//��ͷ�Ŀո��ʶ������%cǰ���и��ո�
//	printf("%d", c);*/
//
//
//	/*scanf("%s", str);//��ͷ�Ŀո񶼲�ʶ��
//	printf("%s", str);*/
//	return 0;
//}