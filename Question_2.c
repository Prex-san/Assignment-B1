// Program to find the factorial of a number n
#include <stdio.h>
int factorial(int num);
int factorial_recursive(int num);
int main(){
    int n;
    printf("Enter n:\n");
    scanf("%d",&n);
    printf("Factorial of n after computing in iterative method: %d\n",factorial(n));
    printf("Factorial of n after computing in recursive method: %d\n",factorial_recursive(n));
}
int factorial(int num){
    int fact = 1,i;
    for(i=1;i<num+1;i++){
        fact = fact*i;
    }
    return fact;
}
int factorial_recursive(int num){
    if(num == 1)
        return 1;
    else
        return num*factorial_recursive(num-1);
}