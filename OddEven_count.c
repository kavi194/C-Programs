#include<stdio.h>
int main()
{
    int n;
    int i;
    int even_count = 0;
    int odd_count = 0;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
    {
        even_count = even_count + 1;
        printf("Even numbers are: \n",n);
    }
    else
    {
        odd_count = odd_count + 1;
        printf("Odd numbers are: \n",n);
    }
    }
    printf("even_count: %d \n",even_count);
    printf("odd_count: %d",odd_count);
    return 0;
}