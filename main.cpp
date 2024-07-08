#include <iostream>
#include <time.h>

using namespace std;

int Jopa(int min, int max)
{
    return (rand() % (max - min) + min);
}

int main()
{
    srand(time(NULL));

    int min;
    int max;

    cout << "Введите нижнее число: ";
    cin >> min;
    cout << "Введите верхнее число: ";
    cin >> max;

    int randNum = Jopa(min, max);
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

