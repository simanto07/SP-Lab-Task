
//11(array reversal)
#include <stdio.h>

int main() {
    int n,a[10],i;
    printf("Enter how many elements you want in this array= ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
       
    }
   for(i=n-1;i>=0;i--)
   {
      printf("%d ",a[i]);
      
   }
    return 0;
}
