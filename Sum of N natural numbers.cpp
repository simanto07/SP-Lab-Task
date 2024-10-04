//task 12(sum of N natural nums)
#include <stdio.h>

int main() {
    int n,i,sum=0;
    printf("Enter N=");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        sum=sum+i ;
    }
    printf("Sum of first %d natural number is= %d ",n,sum);

    return 0;
}
