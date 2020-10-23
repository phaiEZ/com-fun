#include<stdio.h> 


int colaaa(int cola){
    int cap = 0 ;
    int bottle = 0;
    int total = 0;
    while (true){
            if (cola >= 1 ) {
                cola = cola - 1;
                cap = cap + 1 ;
                bottle = bottle + 1;
            }
            else if (bottle >=2){
                bottle = bottle - 2;
                total = total + 1;
                cola = cola + 1;
            }
            else if (cap >= 4){
                cap = cap - 4 ;
                total = total + 1 ;
                cola = cola + 1;
            }
            else {
                 return(total);
            }
        }
}


int main() { 

    int money;
    int cola;

    scanf("%d",&money);
    cola = money/20;
    int total = colaaa(cola) + cola;
   
    printf("%d",total);
    return 0;
}
