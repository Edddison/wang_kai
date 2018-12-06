#include <iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
unsigned int rollDice();

int main()
{
    enum Status {CONTINUE,WIN,LOSE};

    srand(static_cast<unsigned int>(time(0)));

    unsigned int myPoint=0;
    Status gameStatus=CONTINUE;
    unsigned int sumOfDice=rollDice();

    switch(sumOfDice)
    {
    case 7:
    case 11:
        gameStatus=WIN;
        cout<<"win";
        break;
    case 2:
    case 3:
    case 12:
        gameStatus=LOSE;
        break;
    default:
        gameStatus=CONTINUE;
        myPoint=sumOfDice;
        cout<<"Point is "<<myPoint<<endl;
        break;
    }

        while(CONTINUE==gameStatus)
        {
            sumOfDice=rollDice();
            if (sumOfDice==myPoint)
                gameStatus=WIN;
            else
                if(sumOfDice==7)
                gameStatus=LOSE;
        }
        if(WIN==gameStatus)
                cout<<"Player wins"<<endl;
            else
                cout<<"Player loses"<<endl;
}
unsigned int rollDice()
        {


        unsigned int die1=1+rand()%6;
        unsigned int die2=1+rand()%6;

        unsigned int sum =die1+die2;
        cout<<"Play rolled "<<die1<<"+"<<die2<<"="<<sum<<endl;
        return sum;
        }



