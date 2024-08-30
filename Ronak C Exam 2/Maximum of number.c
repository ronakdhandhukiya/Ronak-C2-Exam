#include <stdio.h>

int main(){

int colum;

printf("Enter the number of colum : ");
scanf("%d",&colum);

int array[colum];

printf("program :\n");

for (int i=0; i<colum; i++){

    printf("a[%d] = ",i);
    scanf("%d",&array[i]);
}
int largest = array[0];

for (int i=0; i<colum; i++){

    if (array[i]>largest){
        largest=array[i];
    }
}
return 0;
}
