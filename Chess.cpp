#include <Windows.h>
#include <iostream>
using namespace std;

bool color(int x, int y)//функция определения цвета поля
{
    if (((x % 2) != 0) && ((y % 2) != 0))
    {
        return 1;
    }
    else
    {
        if (((x % 2) == 0) && ((y % 2) == 0))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

}
bool lad(int x, int y, int a, int b)//функция поиска возможного хода ладьи на поле 2  
{
    if ((x == a) || (y == b))
    {
        return 1;
    }
    else return 0;
}
bool sl(int x, int y, int a, int b)//функция поиска возможного хода слона на поле 2
{
    int i = 0;

    while ((x + i <= 8) && (y + i <= 8))
    {

        if ((x + i) == a && (y + i) == b)
        {
            return 1;
        }
        i++;
    }
    i = 0;
    while ((abs(x - i) > 0) && (y + i <= 8))
    {
        if ((x - i) == a && (y + i) == b)
        {
            return 1;
        }
        i++;
    }
    i = 0;
    while ((x + i <= 8) && (abs(y - i) > 0))
    {
        if ((x + i) == a && (y - i) == b)
        {
            return 1;
        }
        i++;
    }
    i = 0;
    while ((abs(x - i) > 0) && (abs(y - i) > 0))
    {
        if ((x - i) == a && (y - i) == b)
        {
            return 1;
        }
        i++;
    }

    return 0;
}
bool ferz(int x, int y, int a, int b)//функция поиска возможного хода ферзя на поле 2
{
    if ((x == a) || (y == b))
    {
        return 1;
    }
    else
    {
        int i = 0;

        while ((x + i <= 8) && (y + i <= 8))
        {

            if ((x + i) == a && (y + i) == b)
            {
                return 1;
            }
            i++;
        }
        i = 0;
        while ((abs(x - i) > 0) && (y + i <= 8))
        {
            if ((x - i) == a && (y + i) == b)
            {
                return 1;
            }
            i++;
        }
        i = 0;
        while ((x + i <= 8) && (abs(y - i) > 0))
        {
            if ((x + i) == a && (y - i) == b)
            {
                return 1;
            }
            i++;
        }
        i = 0;
        while ((abs(x - i) > 0) && (abs(y - i) > 0))
        {
            if ((x - i) == a && (y - i) == b)
            {
                return 1;
            }
            i++;
        }

        return 0;
    }
}
bool horse(int x, int y, int a, int b)//функция поиска возможного хода коня на поле 2
{
    if ((a == (x - 1)) || (a == (x + 1)))
    {
        if ((b == (y - 2)) || (b == (y + 2)))
            return 1;
        else
        {
            return 0;
        }

    }
    else
    {
        if ((b == (y - 1)) || (b == (y + 1)))
        {
            if ((a == (x - 2)) || (a == (x + 2)))
                return 1;
            else
                return 0;
        }
        else
            return 0;
    }
}
int main()
{
  SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");
    setlocale(LC_CTYPE, "rus");
  
}
