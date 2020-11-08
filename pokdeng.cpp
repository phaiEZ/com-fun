#include <stdio.h>
#include <vector>
#include <time.h>
#include <stdlib.h>
using namespace std;

struct card
{
    int num;
    int point;
};

int enamy_card;
int hero_card;
int enamy_score = 0;
int hero_score = 0;
int a, i, x, j, k, c = 0;
char yes_no;
bool same;
int cardsame[52];
int score;
int pick_card()
{
    srand(time(NULL));
    a = rand();
    a = (a % 52) + 1;
    same = true;
    while (same == true)
    {
        same = false;
        for (j = 0; j <= 51; j++)
        {
            if (a == cardsame[j])
            {
                same = true;
                a = rand();
                a = (a % 52) + 1;
            }
        }
    }
    cardsame[c] = a;
    c = c + 1;
    return (a);
}

int card_score(int a)
{
    if (a <= 13)
    {
        if (a >= 10)
        {
            return (10);
        }
        else
        {
            return (a);
        }
    }
    else if (a <= 26)
    {
        a = a - 13;
        if (a >= 10)
        {
            return (10);
        }
        else
        {
            return (a);
        }
    }
    else if (a <= 39)
    {
        a = a - 26;
        if (a >= 10)
        {
            return (10);
        }
        else
        {
            return (a);
        }
    }
    else if (a <= 52)
    {
        a = a - 39;
        if (a >= 10)
        {
            return (10);
        }
        else
        {
            return (a);
        }
    }
}
vector<card> Card;

int clear_card(){
    for (int j = 0; j < 51; j++){
    cardsame[j] = 0;
    }
    while (!Card.empty())  Card.pop_back();
    return 0;
}

int main(){
    //clear_card();
        for (int i = 0; i <= 51; i++)
        {
            card c;
            c.num = pick_card();
            c.point = card_score(c.num);
            Card.push_back(c);
        }
        printf("welcome to pokdeng game \n");
        printf("do u want to play (y/n) \n");
        i = 0;
        score = 0;
        scanf("%s", &yes_no);
        if (yes_no == 'y'){

            score += Card[i].point;
            i += 1;
            score += Card[i].point;
            i += 1;
            printf("ur score = %d \n", score % 10);
            printf("do u want to pick more (y/n) \n");
            scanf(" %c", &yes_no);
            printf("erererer\n");
            if (yes_no == 'y'){
                score += Card[i].point;
                i += 1;
            }
            printf("ur final score = %d \n", score % 10);
        }
    }
