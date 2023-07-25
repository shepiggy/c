//张老师和杜老师编程课

#include<stdio.h>
#include<string.h>


int main() {
	char word[100][51] = { 0 }, temp[51] = { 0 };             //temp : temporary : 临时
	char sen[10000] = { 0 };        //sen : sentence : 句子
	int i = 0, j = 0, m = 0, n = 0, len = 0;

	printf("请输入句子:\n");
	fgets(sen, 10000, stdin);
	if (strlen(sen) > 1) {
		sen[strlen(sen) - 1] = '\0';             //由于fgets将回车也识别，因此strlen是正常的值的时候加一，如：strlen("abc"),(注意"abc"是用fgets输入的)，则结果为4（因为包含了\n）
	}

	len = strlen(sen);

	for (i = 0; i <= len; i++) {
		if (sen[i] == ' ' || i == len) {
			if (m > 0) {
				temp[m] = '\0';
				strcpy(word[n], temp);           //word是二维数组，word[n]就是word第n行的地址
				n++;
				m = 0;
			}
		}
		else {
			temp[m] = sen[i];
			m++;
		}
	}

	for (i = 0; i < strlen(temp); i++) {        //用这个for循环将temp[51]中的51个元素重新赋值为0，注意不要用temp[51]={0}!初始化的时候才那样
		temp[i] = 0;							//如果你这里也用temp[51]={0},则会报错！左边temp[51]是指第51个元素，即是一个char
	}											//而初始化的char temp[51]={0}是将整个数组赋值为0，这两个是不一样的
												//而右边的{0}是一整个数组，你怎么可以把一个char和数组写在一起呢？
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - 1 - i; j++) {
			if (strcmp(word[j], word[j + 1]) > 0) {
				strcpy(temp, word[j]);
				strcpy(word[j], word[j + 1]);
				strcpy(word[j + 1], temp);
			}
		}
	}


	for (i = 0; i < n; i++) {
		/*if (*word[i] != *word[i + 1]) {      			//之前就说："abc"，这字符串其实真正是一个地址（a的地址）
		}*/									   			//那比较两个字符串"abc","def"其实就是a的地址与d的地址比较
		if (strcmp(word[i], word[i + 1]) != 0) {        //地址比较没有实际意义，因此比较字符串不应该那样，而是应该用字符串比较函数strcmp
			printf("%s\n", word[i]);
		}
	}
	return 0;
}
