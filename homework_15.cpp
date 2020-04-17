
#include <iostream>
#include <string>

int main()
{
    setlocale(0, "");
    int a = 10;
    std::cout << "Все числа: ";
    for (int i = 0; i <= a; i++)
    {
        std::cout << i << " ";
    }
    //Функция вывода только четных чисел
    std::cout << "\nЧетные числа: ";
    for (int i = 0; i<=a; i++)
    {
        if (i % 2 == 0)
        {
            std::cout << i << " ";
        }
    }
    //Функция вывода четных или нечетных чисел в зависимости от параметра
    std::cout << "\nЕсли хотите вывести четные числа напишите even, если нечетные - odd: ";
    std::string name;
    std::cin >> name;
    std::string chet = "even", nechet = "odd";
    if (name == chet)
    {
        std::cout << "Четные числа: ";
        for (int i = 0; i <= a; i++)
        {
            if (i % 2 == 0)
            {
                std::cout << i << " ";
            }
        }
    }
    else if (name == nechet)
    {
        std::cout << "Нечетные числа: ";
        for (int i = 0; i <= a; i++)
        {
            if (i % 2 != 0)
            {
                std::cout << i << " ";
            }
        }
    }
    return 0;
}