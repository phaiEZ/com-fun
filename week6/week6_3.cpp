#include <stdio.h>

int i,j,x,k,p;

int butterfly(int x){
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


int main()
{
    scanf("%d", &x);
    scanf("%d",&p);
    for (k = 0; k < p; k++)
    {
        butterfly(x);
    }
    return 0;
}
