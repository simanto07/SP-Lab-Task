//task 7(reverse a number)
#include <stdio.h>
#include <ctype.h>
int main(){
    
int number,sum=0,temp,remainder;
printf("Enter any Number: ");
scanf("%d",&number);

temp=number;

while(temp!=0){
    remainder=temp%10;
    sum=sum*10+remainder;
    temp=temp/10;
    }
    printf("Reverse number=%d \n",sum);
   
   return 0;
}
