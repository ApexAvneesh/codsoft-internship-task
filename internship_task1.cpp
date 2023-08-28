#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
     srand((unsigned int) time(NULL));
    int number = (rand () % 100) + 1;
    int guess = 0;
    while (guess != number)
    {
        cout << "Guess number between (1-100): ";
        cin >> guess; 
        if(guess > number)
        {
            cout << "You Guess lower Number!!"<<endl;
        }
        else if(guess < number)
        {
          cout << "You Guess higher Number!!"<<endl;
        }
        else
        {
            cout << "Yeppie.....You champion"<<endl;
        }
    } 
    
    return 0;
}