#include<stdio.h>
float x,y,z,num;
int j,i,k,t,l;

int check(float x){
    k = 1;
    z = x;
    i = x;
    while(z!=i){
        z = x * k;
        i = z;
        k += 1;
    }
    printf("%.0f / %d\n",z,k-1);
    return 0;
}


int main(){
    
    scanf("%d",&t);
    for (l = 0; l < t; l++){
        scanf("%f",&num);
        check(num);
    }
    return 0;
}
