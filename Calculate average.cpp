//task 13(calculate average)
#include <stdio.h>

int main() {
    int a,b,c,d,e,sum;
    float avg;
    
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    sum=a+b+c+d+e;
    avg=sum/5.00;
    
    printf("Average= %.2f",avg);
    
    return 0;
}
