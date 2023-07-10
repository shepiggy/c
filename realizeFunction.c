/*
	realize strcat strncat
*/

#include<stdio.h>

char* Strcat(char* dest, char* source);          //dest : destination
char* Strncat(char* dest, char* source, int n);  //dest : destination
//strcat strncat ���ص��ǵ�ַ ����char*
int main()
{
	char str1[100] = "abcd";
	char str2[] = "efgh";

	//printf("%s\n", Strcat(str1, str2));
	printf("%s", Strncat(str1, str2, 2));
	return 0;
}


char* Strcat(char* dest, char* source)
{
	if (dest == NULL || source == NULL)          //NULL������stdio.h
	{
		return dest;
	}

	char* p = dest;

	while (*p != '\0')
	{
		p++;
	}

	while (*source != '\0')
	{
		*p = *source;
		p++;
		source++;
	}

	*p = '\0';

	return dest;
}
char* Strncat(char* dest, char* source, int n)
{
	char* ret = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (n && (*dest++ = *source++) != '\0')   //ע��*p1++ = *p2++ ���ȼ���:
		//*p1 = *p2
		//*(p1 + 1) = *(p2 +1)
	//������
	{                                                //*(p1 + i) = *(p2 + i)       //��Strcat������һ������˼  
		n--;
	}

	*dest = '\0';

	return ret;
}
//�����������ķ���ֵ�����ַ�����Ԫ�صĵ�ַ (������ %s ��ӡ���)