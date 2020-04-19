
#include <iostream>
#include <string>

const int N = 10;

//Функция вывода четных или нечетных чисел в зависимости от параметра
void algoritm(std::string name)
{
    int N = 50;
    std::string even = "even", odd = "odd";
    if (name == even)
    {
        std::cout << "Четные числа: ";
        for (int i = 0; i <= N; i++)
        {
            if (i % 2 == 0)
            {
                std::cout << i << " ";
            }
        }
    }
    else if (name == odd)
    {
        std::cout << "Нечетные числа: ";
        for (int i = 0; i <= N; i++)
        {
            if (i % 2 != 0)
            {
                std::cout << i << " ";
            }
        }
    }
    std::cout << "\n";
}

int main()
{
    setlocale(0, "");
    //Вывод только четных чисел
    std::cout << "Четные числа: ";
    for (int i = 0; i <= N; i++)
    {
        if (i % 2 == 0)
        {
            std::cout << i << " ";
        }
    }

    std::cout << "\n\nЕсли хотите вывести четные числа то введите even, если нечетные то - odd: ";
    std::string a;
    std::cin >> a;
    algoritm(a);

    return 0;
}