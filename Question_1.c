// Program to find the maximum integer and charcter in an array and a string
// Efficiency - O(n)
#include <stdio.h>
int max_int();
char max_char();
int main(){
    system("clear");
    int choice;
    printf("Display max from 1. Strings or 2. Integers\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            printf("The maximum character is: %c\n",max_char());
            break;
        case 2:
            printf("The maximum integer is: %d\n",max_int());
            break;
        default:
            printf("Please enter a valid choice.\n");
    }

}
int max_int(){
    int len,i,max;
    printf("Enter the length of the array:\n");
    scanf("%d",&len);
    int int_arr[len];
    for(i=0;i<len;i++){
        printf("Enter element %d:\n",i+1);
        scanf(" %d",&int_arr[i]);
    }
    max = int_arr[0];
    for(i=1;i<len;i++){
        if(int_arr[i]>max){
            max = int_arr[i];
        }
    }
    return max;
}
char max_char(){
    int len,i;
    printf("Enter the length of the array:\n");
    scanf("%d",&len);
    char int_arr[len],max;
    for(i=0;i<len;i++){
        printf("Enter element %d:\n",i+1);
        scanf(" %c",&int_arr[i]); //space to remove \n's input buffer
    }
    max = int_arr[0];
    for(i=1;i<len;i++){
        if(int_arr[i]>max){ //works because C treats characters as integers in their ASCII values
            max = int_arr[i]; 
        }
    }
    return max;
}