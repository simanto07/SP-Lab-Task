//task 10(sum of array elements)
#include <stdio.h>

int main() {
    int n,a[10],i,sum=0;
    printf("Enter how many elements you want in this array= ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
       sum=sum+a[i];
    }
   printf("Sum= %d",sum);
    return 0;
}
