#include<stdio.h>
char text;
char convert(int p){
switch(p){
    case 0 :return('A');
    case 1 :return('B');
    case 2 :return('C');
    case 3 :return('D');
    case 4 :return('E');
    case 5 :return('F');
    case 6 :return('G');
    case 7 :return('H');
    case 8 :return('I');
    case 9 :return('J');
    case 10 :return('K');
    case 11 :return('L');
    case 12 :return('M');
    case 13 :return('N');
    case 14 :return('O');
    case 15 :return('P');
    case 16 :return('Q');
    case 17 :return('R');
    case 18 :return('S');
    case 19 :return('T');
    case 21 :return('U');
    case 22 :return('V');
    case 23 :return('W');
    case 24 :return('X');
    case 25 :return('Y');
    case 26 :return('Z');
}
}

int main(){
    int x,x10=0,x100=0;
    int i = 0,j;
    int num[100];
    scanf("%d",&x);
    if (x == 0){
        printf("A");
        return 0;
    }
    
    while(x > 0){
        num[i] = x%26;
        x /= 26;
        i ++;
    }
    for (j = 0; j < i; j++)
    {
        printf("%c",convert(num[i-j-1]));
    }
}