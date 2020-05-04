#include<stdio.h>
int main()
{
    float a[5],s=0,n;
    int i;
    printf(" Enter Your number: ");
    for(i=0;i<5;i++)
    {
        scanf("%f",&a[i]);
        s=s+a[i];
    }
    n=s/(i);
    printf("%f\n",n);
    return 0;
}