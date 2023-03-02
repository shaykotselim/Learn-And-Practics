
#include<stdio.h>
int main()
    {
    float loan_amount, interest, pay_amount, loanWith_interest, first_pay, sec_pay, third_pay;
    printf("Enter Amount of Loan:");
    scanf("%f",&loan_amount);
    printf("Enter the interest rate:");
    scanf("%f",&interest);
    printf("Enter monthly payment:");
    scanf("%f",&pay_amount);
    loanWith_interest=loan_amount+(loan_amount*(interest/100)/12);
    first_pay=loanWith_interest-pay_amount;
    sec_pay=loanWith_interest-(pay_amount+pay_amount);

    third_pay=loanWith_interest-(pay_amount+pay_amount+pay_amount);

    printf("Balance remaining after first payment:%.2f \n",first_pay);
    printf("Balance remaining after second payment:%.2f \n",sec_pay);
    printf("Balance remaining after third payment:%.2f \n",third_pay);
    getch();
    }
