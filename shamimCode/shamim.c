
#include<stdio.h>
int main()
{
    int twenty, ten, five, one, pay_amount;
    printf("Enter the payable amount:");
    scanf("%d",&pay_amount);
    twenty=pay_amount/20;
    ten=((pay_amount-(twenty*20))/10);
    five=((pay_amount-((twenty*20)+(ten*10)))/5);
    one=((pay_amount-((twenty*20)+(ten*10)+(five*5)))/1);
    printf("$20 Bills:%d \n",twenty);
    printf("$10 Bills:%d \n",ten);
    printf("$05 Bills:%d \n",five);
    printf("$01 Bills:%d \n",one);
    getch();
}
