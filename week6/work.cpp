#include<stdio.h>

int count,a;
int time[10000];
int sorted[10000];
int timesum;

int main(){
    scanf("%d",&count);
    for (int i = 0; i < count; i++){
        scanf("%d",&time[i]);
    }
    for (int i = 0; i < count; ++i) 
        {
            for (int j = i + 1; j < count; ++j)
            {
 
                if (time[i] > time[j]) 
                {
 
                    a =  time[i];
                    time[i] = time[j];
                    time[j] = a;
 
                }
            }
        }
    timesum += time[0] * (count-2);
    for (int i = 1; i < count; i++){
        timesum += time[i];
    }
    printf("%d",timesum);
}
