#include<stdio.h>
int main(){
    int n;
    printf("enter a number\n");
    scanf("%d",&n);

    //outer loop
    for(int i=0;i<n;i++){

        //inner loop
        for(int j=0;j< n-i;j++){
            printf("* ");
        }
        printf("\n");
    }
}