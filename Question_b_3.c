// Program to check whether an array is unique or not
#include <stdio.h>
int main(){
    int len,i,j,flag=1;
    printf("Enter the length of the array: ");
    scanf("%d",&len);
    int arr[len];
    // Initializing array
    for(i=0;i<len;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    // Checking uniqueness 
    for(i=0;i<len;i++){
        for(j=0;j<len;j++){
            if(i==j){
                continue;
            }
            if(arr[i]==arr[j]){
                flag = 0;
                break;
            }
            else
                continue;
        }
        if(flag==0){
            break;
        }
    }
    if(flag==1)
        printf("The array is unique\n");
    else
        printf("The array is not unique\n");
}