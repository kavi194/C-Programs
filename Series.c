#include <stdio.h> 
int main()
{
    int i, num, sum=0;
    printf("Enter any numbers:");
    scanf("%d",&num);
    for(i=1;i<num;i=i+2)
    {
        printf("%d\n",i);
        sum=sum+i;
    }
    printf("%d\n");
    printf("\n sum=%d",sum+num);
    return 0;
}