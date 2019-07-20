#include <stdio.h>

int main(){
    double x=0;
    double y=0;
    char m;

    printf("Enter the first number,the operator,the second number:");
    scanf("%lf %c %lf", &x, &m, &y);

    char c=x;
    char z=y;

    if (((x =(double)c)&&(y =(double)z))||(x==0&&(y=(double)z))||((x =(double)c)&&y==0))
    {

    switch (m){

        case '+' :
        printf("%lf+%lf=%lf",x,y,x+y);
        break;
        case '-' :
        printf("%lf-%lf=%lf",x,y,x-y);
        break;
        case '*' :
        printf("%lf*%lf=%lf",x,y,x*y);
        break;
        case '/' :
               if (y == 0){
               printf("Error: Zero devision abortion");
               }
               else
               {printf("%lf/%lf=%lf",x,y,x/y);}
        break;
        default:
        printf("Error! Check the operator");
        break;
    }
    }
    else
        printf("Invalid input! Enter decimal numders");
    return 0;
}