#include <stdio.h>

int main (){

    int n;
    int sum = 0;
    int i;

printf("Enter the all value in array : ");
scanf("%d",&n);

int array[n];

printf("Enter %d array : \n",n);
for( i=0; i<n; i++){
        scanf("%d",&array[i]);
}
for(  i=0; i<n; i++){
    sum += array[i];
}

printf("The sum of element in array is : %d",sum);

return 0;




}
