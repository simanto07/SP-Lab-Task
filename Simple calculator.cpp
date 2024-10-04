//task 5(simple calculator)
#include <stdio.h>
int main() {
    char op;
    double n1,n2;
    printf("Enter an operator(+,-,*,/): ");
    scanf("%c",&op);
    printf("\nEnter two numbers:");
    scanf("%lf %lf",&n1,&n2);
    
    switch(op)
    {
       case'+':
      { 
          printf("%lf + %lf= %lf",n1,n2,n1+n2);
       break;}
       
case'-':
      {
          printf("%lf - %lf= %lf",n1,n2,n1-n2);
       break;}
      
case'*':
      { printf("%lf * %lf= %lf",n1,n2,n1*n2);
       break;}
        
case'/':
      { printf("%lf / %lf= %lf",n1,n2,n1/n2);
       break;}
       
       default:
       printf("Not a valid ooerator!!");
        
    }
    

    return 0;
}
