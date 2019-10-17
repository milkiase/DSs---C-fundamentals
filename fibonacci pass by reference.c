//fibonacci pass by reference

#include<stdio.h>

void display(int *array[],int *size);
int main(){
    int sizeOffibonacci,i;
    printf("Enter the size of the fibonacci\n");
    scanf("%d",&sizeOffibonacci);
    int fibo[sizeOffibonacci];//an array to hold the series

    for(i=0;i<=sizeOffibonacci;i++){
            if(i<=1){
                fibo[i]=i;
            }
            else{
        fibo[i]=fibo[i-1]+fibo[i-2];
            }
    }
    display(&fibo,&sizeOffibonacci);

    }

    void display(int *array[],int *size){

    for(int j=0;j<=*size ;j++){

        printf("%d ",*(array+j));
    }

    }
