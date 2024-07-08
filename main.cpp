#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));

    int randNum = rand() % 100;
    bool check = true;

    while(check)
    {
        int anw;
        cout << "Ваше число: ";
        cin >> anw;
        if(anw == randNum)
        {
            cout << "Вы победили!" << endl;
            check = false;
        }
        else if(anw == 9954)
        {
            cout << randNum << endl;
        }
        else if(anw > randNum)
        {
            cout << "Ваше число больше загаданого" << endl;
        }
        else if(anw < randNum)
        {
            cout << "Ваше число меньше загаданого" << endl;
        }
        
    }
}