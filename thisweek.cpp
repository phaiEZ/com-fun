#include<stdio.h>

int n;
struct student {
    int studentid;
   char  name[50];
   int  score;
   char  garde;
} Stu[5];

char gade(int point){
    if(point >= 80 && point<= 100){
        return('A');
    }
    else if(point >= 70&& point<= 79){
        return('B');
    }
    else if(point >= 60&& point<= 69){
        return('C');
    }
    else if(point >= 50&& point<= 59){
        return('D');
    }
    else if (point >= 0&& point<= 49){
        return('F');
    }
    else{
        return('E');//error
    }
}
int main(){
    
    scanf("%d",&n);
    const int TOTAL_student = n;
    for (int i = 0; i < n; i++){
        scanf("%d",&Stu[i].studentid);
        scanf("%s",Stu[i].name);
        scanf("%d",&Stu[i].score);
        Stu[i].garde = gade(Stu[i].score);
    }
    for (int i = 0; i < n; i++){
        printf("%d :",Stu[i].studentid);
        printf(" %s :",Stu[i].name);
        printf(" %d :",Stu[i].score);
        printf(" %c",Stu[i].garde);
        printf("\n")
    }
    
    return 0;
}
