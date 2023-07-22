#include<stdio.h>
#include<string.h>

void Delete(char* a, char* b, int lena, int lenb);

int main(){
    char a[100] = {0}, b[100] = {0};
    int lena = 0, lenb = 0;

    printf("请输入一个字符串\n");
    gets(a);       //也可以用fgets,但是记得要把最后的换行改为\0，我这里嫌麻烦就没有用fgets而是用的gets
    printf("请输入待删除的字符串\n");
    gets(b);

    lena = strlen(a);
    lenb = strlen(b);
    Delete(a, b, lena, lenb);          //void Delete(char* originalStr, char* deleteStr, int lena, int lenb);

    printf("删除指定字符串后的字符串是:");
    puts(a);

    return 0;
}
void Delete(char* a, char* b, int lena, int lenb){

    int i = 0, k = 0, j = 0, m = 0;
    char c[100];
    for(i=0;a[i];i++){
        k = i;
        for(j=0;j<lenb;j++){
            c[j] = a[k++];
        }
        c[j]='\0';
        if(strcmp(b,c)==0){
            strcpy(a+i,a+k);
            i--;
        }
    }

}