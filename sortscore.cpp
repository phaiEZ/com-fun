#include <stdio.h>
#include <vector>
#include <time.h>
#include <stdlib.h>
using namespace std;
struct student
{
    int id;
    int point;
    int rating;
};
vector <student> Stu;
int n,a,b;

void sortscore(){
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j){
            if (Stu[i].point < Stu[j].point) {
                a =  Stu[i].point;
                b = Stu[i].id;

                Stu[i].point = Stu[j].point;
                Stu[i].id = Stu[j].id;

                Stu[j].point = a;
                Stu[j].id = b;
            }
        }
    }
}

int main(){
    scanf("%d",&n);
    for (int i = 0; i < n; i++){
       student c;
       scanf("%d",&c.id);
       scanf("%d",&c.point);
       Stu.push_back(c);
    }
    sortscore();
    for (int i = 0; i <  Stu.size(); i++){
        printf("%d : id : %d ",i+1,Stu[i].id);
		printf("point : %d\n",Stu[i].point);
	}
    return 0;
}   
