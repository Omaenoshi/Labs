// lab2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int Plus(int firstNum, int secondNum)
{
    int sum = 0;

    __asm
    {
        mov eax, firstNum;
        add eax, secondNum;
        mov sum, eax;
    }

    return sum;
}

int Mult(int firstNum, int secondNum)
{
    int product = 0;

    __asm
    {
        mov eax, firstNum;
        mul secondNum;
        mov product, eax;
    }

    return product;
}

int Div(int firstNum, int secondNum)
{
    int quotient = 0;

    __asm
    {
        mov eax, firstNum;
        div secondNum;
        mov quotient, eax;
    }

    return quotient;
}

int Sub(int firstNum, int secondNum)
{
    int difference = 0;

    __asm
    {
        mov eax, firstNum;
        sub eax, secondNum;
        mov difference, eax;
    }

    return difference;
}

int main()
{
    int a, b, c, d, e;

    a = 3;
    b = 4;
    c = 7;
    d = 10;
    e = 2;

    int sum = Plus(a, b);
    int product = Mult(sum, c);
    int difference = Sub(product, d);
    int quotient = Div(difference, e);

    std::cout << quotient;
}




// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
