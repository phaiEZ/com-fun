#include <stdio.h>
int main()
{
    int i, j, x;
    scanf("%d", &x);
    for(i = 0; i < x; i++){
        for(j = 0; j < (2*x); j++){
            if(i >= j){
                printf("*");
            }
            else{
                printf(" ");
            }
            if(i >= (2*x-1)-j) {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    for(i = 0; i < x; i++){
        for(j = 0; j < (2*x); j++){
            if(i + j <= x-1){
                printf("*");
            }
            else{
                printf(" ");
            }
            if((i+x) <= j){ 
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}