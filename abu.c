#include <stdio.h>

int main()
{
    //Integer Data type
    int a,b,sum;
    printf("\nEnter two numbers to add: ");
    scanf("%d %d",&a,&b);
    sum = a+b;
    printf("The sum is %d\n",sum);
{
    //Float Data type
    float a,b,div;
    printf("Enter two numbers to divide: ");
    scanf("%d %d",&a,&b);
    div = a/b;
    printf("\nThe Quotient when %f is divided by %f is %f",a,b,div);
}
{
    //String Data type
    char name[50];
    printf("\nEnter the name:");
    scanf("%s",&name);
    printf("The name you entered is %s",name);
}
{
    //Double Data type
    double u;
    printf("\nEnter upto six digits after the decimal point: ");
    scanf("%lf",&u);
    printf("\nThe number you entered is %lf",u);
}
    return 0;
}