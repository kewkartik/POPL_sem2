//reverse an integer using recursion
#include<stdio.h>

//declaring sum globally
int sum=0,rem;

//function to reverse an integer
int reverse(int num){
  if(num){
    rem=num%10;
    sum=sum*10+rem;
    reverse(num/10);
  }
  return sum;
}

int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    printf("reverse of %d is %d\n",n,reverse(n));
    return 0;
}