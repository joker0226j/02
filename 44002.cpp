#include <stdio.h>
#include <stdlib.h>

int main() 
{
 int yea,mon,day;
 printf("請輸入你的出生年分(西元)：");
 scanf("%d",&yea);
 printf("請輸入你的出生月分：");
 scanf("%d",&mon);
 printf("請輸入你的出生日期：");
 scanf("%d",&day);
 printf("你的出生年月日為：%d年%d月%d日\n",yea,mon,day);
 system("pause");
 return 0; 
}
