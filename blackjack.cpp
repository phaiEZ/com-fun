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

int clear_card()
{
    for (int j = 0; j < 51; j++)
    {
        cardsame[j] = 0;
    }
    while (!Card.empty())
        Card.pop_back();
    return 0;
}

int toomore(int x)
{
    if (x > 21)
    {
        return (1);
    }
    else
    {
        return (0);
    }
}
int main()
{
    //clear_card();
    for (int i = 0; i <= 51; i++)
    {
        card c;
        c.num = pick_card();
        c.point = card_score(c.num);
        Card.push_back(c);
    }
    printf("welcome to black jack game \n");
    printf("do u want to play (y/n) \n");
    scanf("%c", &yes_no);
    if (yes_no == 'y')
    {
        i = 0;
        hero_score = 0;
        hero_score += Card[i].point;
        i++;
        hero_score += Card[i].point;
        i++;
        printf("ur score is: ");
        printf("%d \n", hero_score);
        while (1)
        {
            printf("do u want to pick more ? (y/n) \n");
            scanf("%s",&yes_no);
            if (yes_no == 'y')
            {
                hero_score += Card[i].point;
                i++;
                if (toomore(hero_score) == 1)
                {
                    printf("your lose \n");
                    break;
                }
                printf("ur score is: \n");
                printf("%d \n", hero_score);
            }
            else
            {
                break;
            }
        }
        printf("your total score is %d \n", hero_score);
    }
    printf("thx u for playing\n");
    return 0;
}
