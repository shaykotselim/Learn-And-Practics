#include<stdio.h>

int main (){
    // declar variable;

    int _days, _month, _year, remainYear, remainMonth;

    printf("Enter The Total Days:");
    //scan Total Days;
    scanf("%d",&_days);
    //find year;
    _year = _days /365;
    remainYear = _days % 365;
    //find month;
    _month = remainYear / 30;
    // find Days;
    remainMonth = remainYear % 30;

    printf("\n %d Year, %d Month, %d Days \n",_year,_month, remainMonth );

    getch();




}
