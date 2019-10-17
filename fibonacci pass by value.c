//fibonacci pass by value

#include <stdio.h>

void print_fibonacci_of(int n);
int main()
{
    printf("\n Find fibonacci series of : ");
    int x ;
    scanf("%d", &x);
    print_fibonacci_of(x);
    return 0;
}
void print_fibonacci_of(int n){

 int f0=0,f1=1,fn,i;
 printf("\n Fibonacci series of %d is -> ", n);

 for(i=0;i<=n;i++){
    switch(i){
        case 0 :
            fn=f0;
            break;
        case 1:
            fn=f1;
            break;
        default:
            fn=f0+f1;
            f0=f1;
            f1=fn;
    }
    printf("%d ",fn);
 }

}

