// Program to find the number of ways a number can be arranged
// Permutaions can be used in this case
#include <stdio.h>
int str_len(char *string);
int factorial(int num);
int main(){
    char word[60];
    int len,r;
    printf("Enter your word:\n");
    scanf("%s",word);
    len = str_len(word);
    r = factorial(len);
    printf("Number of ways %s can be arranged is %d\n",word,r);

}
int str_len(char *string){
    int i=0;
    while(string[i]!='\0'){
        i++;
    }
    return i;
}
int factorial(int num){
    if(num == 1)
        return 1;
    else
        return num*factorial(num-1);
}