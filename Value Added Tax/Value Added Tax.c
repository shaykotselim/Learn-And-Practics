#include<stdio.h>
    int main(){
            // declar variable type;

            float price ,  result , vat5;

            vat5 = 1.05;

            // scan number ;
            printf("Enter Product Price: ");
            scanf("%f",&price);
            // result ;
            result = price * vat5;


            printf("Total Price With 5 percent vat : %.2f ", result);
            getch();



    }
