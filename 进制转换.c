#include<stdio.h>
#include<math.h>

                          /*记得考虑int的范围哦，不要溢出了，不行可以用unsigned int*/

       /*csdn C语言学习—进制之间相互转换      输入待转换的数字是以int类型，弊端是我们不知道这个输入是否符合该的进制，如二进制输入个2*/
// int BinDec(int num);                    //bin : binary 二进制         dec : decimal 十进制

// int main(){
//     int num = 0;
    
//     printf("请输入要转换的二进制数:\n");
//     scanf("%d", &num);

//     printf("该二进制数对应的十进制数为:%d", BinDec(num));

//     return 0;          
// }

// int BinDec(int num){
//     int decNum = 0, i = 0, remainder = 0;        //remainder : 剩余
//     while(num != 0){                          
//         remainder = num % 10;                 //就像二进制111，对应的十进制是：1*2^2 + 1*2^1 + 1*2^0 ，就是把111取出，我们默认把它看作十进制然后 %10 再/10
//         num /= 10;                            //八进制，十六进制亦是如此
//         decNum += remainder * pow(2, i);        //把pow中的2改为x，便是求x进制的对应数
//         i++;                                    
//     }
//     return decNum;
// }





        /*另一种方法就是课本，及对应视频老师讲的方法         输入待转换的数字是以int类型，这就没有上面那种方法的弊端*/
// int HexDec(char str[]);       //hex : hexadecimal 十六进制

// int main(){
//     char str[10] = {0};
//     int i = 0, c = 0, flag = 0, flag1 = 0;

//     printf("请输入要转换的十六进制数:\n");
//     //gets其实不好，因为我们定义了10，即最多输入9个，那如果输入多了呢？所以更多用fgets，不过用它要把第strlen(str)-1改为'\0'
//     //但是这里我们为了检验是否输入正确还是用getchar
//     flag1 = 1;
//     while((c = getchar()) != '\0' && i < 10 && flag1){       //有时需要注意&& 和 =等的优先级不一样
//         if(c >= '0' && c <= '9' || c >= 'a' && c <= 'f'){    //这里便解决了第一种方法的那种弊端
//             flag = 1;
//             str[i++] = c;
//         }
//         else if(flag){
//             str[i] = '\0';
            
//             printf("该十六进制数对应的十进制数为:%d", HexDec(str));

//             printf("还想继续吗(y/n)?\n");
//             c = getchar();
//             if(c == 'n') flag1 = 0;
//             else{
//                 flag = 0;
//                 i = 0;
//                 printf("请输入要转换的十六进制数:\n");
//             }            
//         }
//     }
//     return 0;
// }

// int HexDec(char str[]){
//     int i = 0, decNum = 0;
//     for(i = 0; str[i] != '\0'; i++){
//         if(str[i] >= '0' && str[i] <= '9') decNum = decNum * 16 + str[i] - '0';
//         else if(str[i] >= 'a' && str[i] <= 'z') decNum = decNum * 16 + str[i] - 'a' + 10; 
//         else if(str[i] >= 'A' && str[i] <= 'Z') decNum = decNum * 16 + str[i] - 'A' + 10;
//     }

//     return decNum;
// }










         /*csdn C语言用递归函数实现进制转换        这个局限于只能十进制转换为x进制*/
void ConversionSystem(unsigned int n, unsigned int m);         //conversion 转换

int main(){
	unsigned int n = 0, m = 0;
	printf("请输入非负整数,（输入e以退出）\n"); 
	while(scanf("%lu", &n)==1){  //scanf接收到多少个数的时候，返回值就是多少（查csdn）                   
		printf("请输入你想转换的进制（2~10进制）\n");
	    scanf("%lu",&m);
		printf("该数转化为%d进制为：",m);
	    ConversionSystem(n, m);
		printf("\n请输入非负整数,（输入e以退出）\n");
	}
	return 0;
}
void ConversionSystem(unsigned int n, unsigned int m){      
	int temp = 0;                                         
	temp =n % m;                                                       
	if(n>=m)
		ConversionSystem(n/m,m);
	printf("%d", temp);
}
