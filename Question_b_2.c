// Progarm to convert decimal to binary
// UNLIMITED RANGE!
#include <stdio.h>
#include <stdlib.h>
int main(){
    float num,f_part,i_count;
    int binary_f[21];
    int *binary;
    int i,digits=0,bit,len,lim;
    printf("Enter the number in decimal: ");
    scanf("%f",&num);
    // Calculate integer part
    i_count = num;
    while(i_count>1){
        i_count = i_count/2;
        digits++;
    }
    binary = (int*) malloc (digits * sizeof(int));
    i_count = num;
    for(i=0;i<digits;i++){
        bit = (int)i_count%2;
        i_count = i_count/2;
        binary[i] = bit;
    }
    len = i-1;
    for(i=len;i>=0;i--){
        printf("%d",binary[i]);
    }
    printf(".");
    // Calculate fractional part
    f_part = num-(int)num;
    lim = 20;
    for(i=0;i<lim;i++){
        f_part = f_part*2;
        bit = (int)f_part;
        if(f_part == 1){
            binary_f[i] = 1;
            binary_f[i+1] = -1;
            break;
        }
        else{
            binary_f[i] = bit;
        }
        f_part = f_part-bit;
    }
    binary_f[i+1] = -1;
    i=0;
    while(binary_f[i]!=-1){
        printf("%d",binary_f[i]);
        i++;
    }
    printf("\n");

}
