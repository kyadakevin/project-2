#include<stdio.h>
int main()
{
    int a,b,c;
    float d;
    printf("\nEnter the value = ");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("\nTotal : %d",c);
    c=a-b;
    printf("\nDifference : %d",c);
    c=a*b;
    printf("\nMul : %d",c);
    d=a/b;
    printf("\nDiv : %0.2f",d);
    c=a%b;
    printf("\nMod : %d",c);
}
