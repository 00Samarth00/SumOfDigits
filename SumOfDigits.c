#include<stdio.h>
int sod(int n)
{
    int x,ld,s=0;
    x=n;

    while(x>0)
    {
        ld=x%10;
        s=s+ld;
        x=x/10;
    }


    return s;

}


void main()
{
    int n;
    printf("Enter a number to find the sum of its digits :\n");
    scanf("%d",&n);
    printf("Sum of its digits - %d",sod(n));
}
