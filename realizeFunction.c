/*
	realize strcat strncat
*/

#include<stdio.h>

char* Strcat(char* dest, char* source);          //dest : destination
char* Strncat(char* dest, char* source, int n);  //dest : destination
//strcat strncat 返回的是地址 故用char*
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
	if (dest == NULL || source == NULL)          //NULL包括于stdio.h
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

	while (n && (*dest++ = *source++) != '\0')   //注意*p1++ = *p2++ 它等价于:
		//*p1 = *p2
		//*(p1 + 1) = *(p2 +1)
	//………
	{                                                //*(p1 + i) = *(p2 + i)       //于Strcat函数中一样的意思  
		n--;
	}

	*dest = '\0';

	return ret;
}
//这两个函数的返回值都是字符串首元素的地址 (所以用 %s 打印输出)