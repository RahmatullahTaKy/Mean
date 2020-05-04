#include<stdio.h>
int main()
{
    float a[10],s=0,n;
    int i;
    printf(" Enter Your number: ");
    for(i=1;i<=10;i++)
    {
        scanf("%f",&a[i-1]);
        s=s+a[i-1];
    }
    n=s/(i-1);
    printf("%f\n",n);
    return 0;
}