//addition of two matrices
#include <stdio.h>
int main(){
    int a,b,c,d;

    //input of rows and columns of two matrices
    printf("enter rows and columns of first matrix: ");
    scanf("%d %d",&a,&b);
    printf("enter rows and columns of second matrix: ");
    scanf("%d %d",&c,&d);

    int arr1[a][b],arr2[c][d],arr3[a][b];  

    //input of elements of matrix 1
    printf("enter elements of first matrix: \n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("enter element a%d%d: ",i+1,j+1);
            scanf("%d",&arr1[i][j]);
        }
    }

    //input of elements of matrix 2
    printf("enter elements of second matrix: \n");
    for(int i=0;i<c;i++){
        for(int j=0;j<d;j++){
            printf("enter element b%d%d: ",i+1,j+1);
            scanf("%d",&arr2[i][j]);
        }
    }

    //display of matrix 1
    printf("first matrix: \n");
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }

    //display of matrix 2
    printf("second matrix: \n");
    for(int i=0;i<c;i++){
        for(int j=0;j<d;j++){
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }

    //addition of two matrices
    if(a==c && b==d){
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                arr3[i][j]=arr1[i][j]+arr2[i][j];
            }
        }

        //display of addition of two matrices
        printf("addition of two matrices: \n");
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                printf("%d ",arr3[i][j]);
            }
            printf("\n");
        }
    }
    else{
        //if addition is not possible
        printf("addition is not possible\n");
    }

}