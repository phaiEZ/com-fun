#include<stdio.h>
float x,y,z,num;
int j,i,k;


int main(){
    scanf("%f",&x);
    k = 1;
    z = x;
    i = x;
    while(1){
        if (z == i){
            break;
        }
        z = x * k;
        i = z;
        k += 1;
    }
    printf("%.0f / %d\n",z,k-1);
    return 0;
}