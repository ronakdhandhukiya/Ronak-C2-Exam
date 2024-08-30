#include <stdio.h>

void main(){

int row,colum;

printf("Enter number of row : ");
scanf("%d",&row);

printf("Enter number of colum : ");
scanf("%d",&colum);
printf("\n");

int array[row][colum];

for(int i=0; i<row; i++){

    for(int j=0;j<colum; j++){
        printf("a[%d][%d]= ",i,j);
        scanf("%d",&array[i][j]);
    }
}
int sum=0;

for (int i=0; i<row; i++){
    for (int j=0; j<colum; j++){
        sum=sum+array[i][j];
    }
}

printf("\n The sum of matrix : %d\n",sum);

}
