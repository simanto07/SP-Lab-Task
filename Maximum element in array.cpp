//task 9(find maximum element in array)
#include <stdio.h>

int main() {
    int n,a[10],i;
    printf("Enter how many numbers you want in this array= ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
       
    }
    int max=a[0];
    
    for(i=1;i<n;i++)
    {
        if(max<a[i])
        max=a[i];
        
    }
    printf("Maximum= %d\n",max);
    return 0;
}

