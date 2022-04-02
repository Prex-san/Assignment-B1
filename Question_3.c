// Program to find the number of binary digits
#include <stdio.h>
int digits(int num);
int digits_r(int num);
int main(){
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    printf("Number of bits in decimal n after computing in iterative method: %d\n",digits(n));
    printf("Number of bits in decimal n  after computing in recursive method: %d\n",digits_r(n));
}
int digits(int num){
    int digits=1;
    while(num>1){
        num = num/2;
        digits++;
    }
    
    return digits;
}
int digits_r(int num){
    if(num <= 1){
        return 1;
    }
    else
        return 1+digits_r(num/2);
}