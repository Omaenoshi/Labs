// lab1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

void CountBig(char* num, int bytes)
{
    std::cout << "Big-Endian: ";
    for (int i = bytes - 1; i >= 0; i--)
    {
        for (int n = 0; n < 8; n++)
        {
            std::cout << ((*(num + i) >> (7 - n)) & 1); //Байтовый сдвиг на i и побитовый сдвиг на 7-n
        }
    }
    std::cout << "\n";
}

void CountLittle(char* num, int bytes)
{
    std::cout << "Little-Endian: ";
    for (int i = 0; i < bytes; i++)
    {
        for (int n = 0; n < 8; n++)
        {
            std::cout << ((*(num + i) >> (7 - n)) & 1); //Байтовый сдвиг на i и побитовый сдвиг на 7-n
        }
    }
    std::cout << "\n";
}

void CountInt(int num)
{
    std::cout << "int:\n";
    CountBig((char*)&num, 4);
    CountLittle((char*)&num, 4);
}

void CountFloat(int num)
{
    float numInFLoat = (float)num;
    std::cout << "float:\n";
    CountBig((char*)&numInFLoat, 4);
    CountLittle((char*)&numInFLoat, 4);
}

void CountDouble(int num)
{
    double numInDouble = (double)num;
    std::cout << "double:\n";
    CountBig((char*)&numInDouble, 8);
    CountLittle((char*)&numInDouble, 8);
}

int main()
{
    int num;
    std::cout << "Input your number: ";
    std::cin >> num;
    CountInt(num);
    CountFloat(num);
    CountDouble(num);
    
    return 0;
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
