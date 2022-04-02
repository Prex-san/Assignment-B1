// Program to perform matrix multiplication by dynamically allocating the matrix
// Efficiency - O(n^3)
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,m,a,b,i,j,k,mult_col,mult_row,ele;
    printf("Enter the size of the matrix 1 (n,m) seperated by a space:\n");
    scanf("%d %d",&n,&m);
    printf("Enter the number of columns in matrix 2:\n"); //since number of coulumns in matrix1 == number of rows in matrix2
    scanf("%d",&b);
    a = m;
    int *matrix1[n],*matrix2[a],*matrix_r[n];
    // Dynamic Allocation
    //matrix 1(n*m)
    for(i=0;i<n;i++){
        matrix1[i] = (int*)malloc(m * sizeof(int));
    }
    //matrix 2(a*b)
    for(i=0;i<a;i++){
        matrix2[i] = (int*)malloc(b * sizeof(int));
    }
    //resultant matrix(n*b)
    for(i=0;i<n;i++){
        matrix_r[i] = (int*)malloc(b * sizeof(int));
    }
    // An array of pointers pointing to other arrays
    // Initializing array
    printf("Initializing matrix 1:\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("Enter element %d in row %d: ",j,i);
            scanf("%d",(matrix1[i])+j); // matrix[i] is a pointer which points to an array
        }
    }
    printf("Initializing matrix 2:\n");
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            printf("Enter element %d in row %d: ",j,i);
            scanf("%d",(matrix2[i])+j); // matrix[i] is a pointer which points to an array
        }
    }
    //Matrix Multiplication
    for(j=0;j<b;j++){
        for(i=0;i<n;i++){
            ele = 0;
            for(k=0;k<m;k++){
                mult_col = *(matrix2[k]+j);
                mult_row = *(matrix1[i]+k);
                ele = ele+(mult_row*mult_col);
            }
            *(matrix_r[j]+i) = ele;
        }
    }
    //Display matrices
    printf("Matrix 1:\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d    ",*(matrix1[i]+j));
        }
        printf("\n");
    }
    printf("Matrix 2:\n");
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            printf("%d    ",*(matrix2[i]+j));
        }
        printf("\n");
    }
    printf("Result:\n");
    for(i=0;i<n;i++){
        for(j=0;j<b;j++){
            printf("%d    ",*(matrix_r[i]+j));
        }
        printf("\n");
    }
    
}

