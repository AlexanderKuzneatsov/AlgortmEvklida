#include <iostream>

using namespace std;

void Algoritm(int a, int b);

void Print(int Error,int a,int b);


int main()
{
    setlocale(LC_ALL, "ru");

    int a = 0;
    int b = 0;

    cout << "Введите два числа для определения наиболее общего делителя" << endl;
   
    cout << "Первое число - ";
    cin >> a;

    cout << endl << "Второе число - ";
    cin >> b;

    cout << endl;

    Algoritm(a,b);
    
}

void Algoritm(int a, int b)
{
    
    int Error = 0;


    while ((a > 0) && (b > 0))
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }

    }

    Print(Error, a, b);
}

void Print(int Error, int a, int b)
{
    if ((a < 0) || (b < 0))
    {
        cout << "Введено неверное число" << endl;
    }
    else if (a > b)
    {
        cout << "Наиболее общий делитель - " << a << endl;
    }
    else
    {
        cout << "Наиболее общий делитель - " << b << endl;
    }
}
