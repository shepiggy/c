//张老师和杜老师编程课

#include<stdio.h>
#include<string.h>

int main()
{
    char sen[100] = {0};         //sen : sentence 句子
    int i = 0, j = 0, len = 0, maxlen = -1, minlen = 100, maxpos = 0, minpos = 0;    //pos : position 位置
                                                                                  //len : length 长度      
    printf("请输入句子:\n");
    fgets(sen, 100, stdin);
    if(strlen(sen) > 1){
        sen[strlen(sen) - 1] = '\0';
    }

    len = strlen(sen); 
    while(1){
        while(i < len && (sen[i] == ' ' || sen[i] == ',')) i++;
        
        if(i >= len) break;        //唯一的出口
        
        j = i;
        while(j < len && !(sen[j] == ' ' || sen[j] == ',')) j++;

        if(j - i > maxlen){
            maxlen = j - i;                   //记录这些方便后面打印，当然也可以像讲作业老师那样用strncpy(temp,sen+i,maxlen)
            maxpos = i;				  //直接输出单词
        }
        if(j - i < minlen){
            minlen = j - i;
            minpos = i;
        }
        i= j;
    }        

    printf("最长的单词:\n");
    for(i = 0; i < maxlen; i++) printf("%c", sen[maxpos + i]);
    printf("\n最短的单词:\n");
    for(i = 0; i < minlen; i++) printf("%c", sen[minpos + i]);                                                             
    return 0;
}