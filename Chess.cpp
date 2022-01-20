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
      float k;// 1 кордината 1 поля
    float l;// 2 кордината 1 поля
    float m;// 1 кордината 2 поля
    float n;// 2 кордината 2 поля
    float fig;// Номер фигуры
    cout << "Введите номер вертикали для первого поля (номера от 1 до 8 слева направо) и нажмите Enter: ";
    for (;;)// Проверка ввода координаты
    {
        cin >> k;
        if (!cin)
        {
            cout << "Введите число: ";

        }
        else
        {
            if (int(k) != k)
            {
                cout << "Введите целое число: ";

            }
            else
            {
                if (k <= 0)
                {
                    cout << "Введите положительное число: ";

                }
                else
                {
                    if (k > 8)
                    {
                        cout << "Введите число меньше или равное 8: ";

                    }
                    else
                        break;
                }
            }

        }
        cin.clear();
        cin.ignore(1000000000, '\n');
    }

    cout << "Введите номер горизонтали для первого поля (номера от 1 до 8 снизу вверх) и нажмите Enter: ";
    for (;;)// Проверка ввода координаты
    {
        cin >> l;
        if (!cin)
        {
            cout << "Введите число: ";

        }
        else
        {
            if (int(l) != l)
            {
                cout << "Введите целое число: ";

            }
            else
            {
                if (l <= 0)
                {
                    cout << "Введите положительное число: ";

                }
                else
                {
                    if (l > 8)
                    {
                        cout << "Введите число меньше или равное 8: ";

                    }
                    else
                        break;
                }
            }

        }
        cin.clear();
        cin.ignore(1000000000, '\n');
    }

    cout << "Введите номер фигуры (1-ферзь, 2-ладья, 3-слон, 4-конь): ";
    for (;;)// Проверка ввода номера фигуры
    {
        cin >> fig;
        if (!cin)
        {
            cout << "Введите число: ";

        }
        else
        {
            if (int(fig) != fig)
            {
                cout << "Введите целое число: ";

            }
            else
            {
                if (fig <= 0)
                {
                    cout << "Введите положительное число: ";

                }
                else
                {
                    if (fig > 4)
                    {
                        cout << "Введите число меньше или равное 4: ";

                    }
                    else
                        break;
                }
            }

        }
        cin.clear();
        cin.ignore(1000000000, '\n');
    }
    cout << "Введите вертикаль для второго поля (номера от 1 до 8 слева направо) и нажмите Enter: ";
    for (;;)// Проверка ввода координаты
    {
        cin >> m;
        if (!cin)
        {
            cout << "Введите число: ";

        }
        else
        {
            if (int(m) != m)
            {
                cout << "Введите целое число: ";

            }
            else
            {
                if (m <= 0)
                {
                    cout << "Введите положительное число: ";

                }
                else
                {
                    if (m > 8)
                    {
                        cout << "Введите число меньше или равное 8: ";

                    }
                    else
                        break;
                }
            }

        }
        cin.clear();
        cin.ignore(1000000000, '\n');
    }

    cout << "Введите горизональ для второго поля (номера от 1 до 8 снизу вверх) и нажмите Enter: ";
    for (;;)// Проверка ввода координаты
    {
        cin >> n;
        if (!cin)
        {
            cout << "Введите число: ";

        }
        else
        {
            if (int(n) != n)
            {
                cout << "Введите целое число: ";

            }
            else
            {
                if (n <= 0)
                {
                    cout << "Введите положительное число: ";

                }
                else
                {
                    if (n > 8)
                    {
                        cout << "Введите число меньше или равное 8: ";

                    }
                    else
                        break;
                }
            }

        }
        cin.clear();
        cin.ignore(1000000000, '\n');
    }
    
    if (color(k, l) == color(m, n))// поверяем, совпадают ли цвета, выводи результат
    {
        cout << "Цвета полей 1 и 2 совпадают" << endl;

    }
    else
    {
        cout << "Цвета полей 1 и 2 не совпадают" << endl;

    }
    switch (int(fig))// провеяем, угрожает ли фигура полю 2, выводим результат
    {
    case 1:
    {
        if (ferz(k, l, m, n) == 1)
        {
            cout << "Ферзь на поле 1 угрожает полю 2 и может попасть на него одним ходом ";

            break;
        }
        else
        {
            cout << "Ферзь на поле 1 не угрожает полю 2";

        }
        cout << endl << "Ферзь сможет попасть на поле 2 через поле с координатами: " << k << ", " << n;
        break;
    }
    case 2:
    {
        if (lad(k, l, m, n) == 1)
        {
            cout << "Ладья на поле 1 угрожает полю 2 и может попасть на него одним ходом ";

            break;
        }

        else
        {
            cout << "Ладья на поле 1 не угрожает полю 2";

        }
        cout << endl << "Ладья сможет попасть на поле 2 через поле с координатами: " << k << ", " << n;
        break;
    }
    case 3:
    {
        if ((sl(k, l, m, n) == 1) && (color(k, l) == color(m, n)))
        {
            cout << "Слон на поле 1 угрожает полю 2 и может попасть на него одним ходом ";

        }
        else
        {
            cout << "Слон на поле 1 не угрожает полю 2";

            if (color(k, l) != color(m, n))
            {
                cout << endl << "Слон не сможет попасть на поле 2, потому что цвета поля 1 и поля 2 отличаются";

            }
            else
            {
                int i = 0;

                while ((k + i <= 8) && (l + i <= 8))
                {

                    if (sl(k + i, l + i, m, n))
                    {
                        cout << endl << "Слон может попасть на поле 2 через поле с координатами:" << k + i << ", " << l + i;

                        return 0;
                    }
                    i++;
                }
                i = 0;
                while ((abs(k - i) > 0) && (l + i <= 8))
                {
                    if (sl(k - i, l + i, m, n))
                    {
                        cout << endl << "Слон может попасть на поле 2 через поле с координатами:" << k - i << ", " << l + i;

                        return 0;
                    }
                    i++;
                }
                i = 0;
                while ((k + i <= 8) && (abs(l - i) > 0))
                {
                    if (sl(k + i, l - i, m, n))
                    {
                        cout << endl << "Слон может попасть на поле 2 через поле с координатами:" << k + i << ", " << l - i;

                        return 0;
                    }
                    i++;
                }
                i = 0;
                while ((abs(k - i) > 0) && (abs(l - i) > 0))
                {
                    if (sl(k - i, l - i, m, n))
                    {
                        cout << endl << "Слон может попасть на поле 2 через поле с координатами:" << k - i << ", " << l - i;

                        return 0;
                    }
                    i++;
                }
            }
        }
        break;
    }
    case 4:
    {
        if (horse(k, l, m, n) == 1)
        {
            cout << "Конь на поле 1 угрожает полю 2 и может попасть на него одним ходом ";

        }

        else
        {
            cout << "Конь на поле 1 не угрожает полю 2";

        }
        break;
    }
    }
}

