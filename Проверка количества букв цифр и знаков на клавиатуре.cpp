
#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");

    // создать символьный массив из 100 случайных элементов определить количество цифр букв и знаков пунктуации


    srand(time(NULL));                                              // Генератор случайных чисел

    const char size = 100;

    char arr[size];

    int count_number = 0;
    int count_letter = 0;
    int count_znak = 0;

    for (int i = 0; i < size; i++)
    {
        arr[i] = i;
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";


    }
    for (int i = 0; i < size; i++)
    {
        if (isalpha(arr[i]))
        {
            count_letter++;
        }
        else
        {
            if (isdigit(arr[i]))
            {
                count_number++;
            }
            else
                if (ispunct(arr[i]))
                {
                    count_znak++;
                }
        }
    }

    cout << "\n" << "Kolichestvo bukv = " << count_letter;
    cout << "\n" << "Kolichestvo chisel = " << count_number;
    cout << "\n" << "Kolichestvo znakov punktuacii = " << count_znak;
    cout << "\n";
    cout << "Всего на моей клавиатуре 67 символов, до сотни не дошли простите";

    return 0;
}
