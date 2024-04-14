//maximum number between 2 numbers using pointers
#include<stdio.h>
int main(){
    int a,b;
    printf("enter two numbers: ");
    scanf("%d %d",&a,&b);
    int *p=&a,*q=&b;
    if(*p>*q){
        printf("%d is greater than %d\n",*p,*q);
    }
    else{
        printf("%d is greater than %d\n",*q,*p);
    }
    return 0;

}