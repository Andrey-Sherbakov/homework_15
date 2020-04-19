
#include <iostream>
#include <string>

const int N = 10;

//Функция вывода четных или нечетных чисел в зависимости от параметра
void algoritm(std::string name)
{
    int N = 50;
    bool x;
    std::string even = "even";
    if (name == even) { x = 0; }
    else { x = 1; }

    for (int i = x; i <= N; i += 2)
    {
       std::cout << i << " ";
    }
    std::cout << "\n";
}

int main()
{
    setlocale(0, "");
    //Вывод только четных чисел
    std::cout << "Четные числа: ";
    for (int i = 0; i <= N; i+=2)
    {
        std::cout << i << " ";
    }

    std::cout << "\n\nЕсли хотите вывести четные числа то введите even, если нечетные то odd: ";
    std::string a;
    std::cin >> a;
    algoritm(a);

    return 0;
}