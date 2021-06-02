// lab3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

void UnsignedPlus(unsigned char a, unsigned char b)
{
    bool isOverflow = false; 
    unsigned char result;
    _asm
    {
        mov al, a; 
        mov bl, b;
        adc al, bl; 
        mov result, al;
        jnc STEP2  
            jc STEP1;  
    STEP1:
        mov isOverflow, 1; 
    STEP2:
    }
    printf("a + b = %d ", (int)result);
    std::cout << "(unsigned) " << (isOverflow ? "overflow" : "no overflow") << "\n";
}

void SignedPlus(signed char a, signed char b)
{
    bool isOverflow = false;
    char result;

    __asm
    {
        mov al, a;
        mov bl, b;
        adc al, bl;
        mov result, al;
        jno STEP2 
            jo STEP1; 
    STEP1:
        mov isOverflow, 1;
    STEP2:
    }
    printf("a + b = %d ", (int)result);
    std::cout << "(signed) " << (isOverflow ? "overflow" : "no overflow") << "\n";
}

int main()
{
    int a, b;
    std::cout << "Input a: ";
    std::cin >> a;
    std::cout << "Input b: ";
    std::cin >> b;
    std::cout << "\n";
    UnsignedPlus((unsigned char)a, (unsigned char)b);
    SignedPlus((signed char)a, (signed char)b);
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
