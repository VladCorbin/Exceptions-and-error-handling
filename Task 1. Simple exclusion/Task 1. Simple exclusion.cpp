#include <iostream>
#include <string>
#include <exception>
#include <Windows.h>

int function(std::string str, int forbidden_length) 
{
    if (str.length() == forbidden_length) 
    {
        throw ("Вы ввели слово запретной длины! До свидания!");
    }
    else
    {
        std::cout << "Длина слова \"" << str << "\" равна " << str.length() << std::endl;
        return str.length();
    }
    
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int forbidden_length;
    std::string str;

    std::cout << "Введите запретную длину: ";
    std::cin >> forbidden_length;
    std::cout << std::endl;
    
    while (true)
    {
        try
        {
            std::cout << "Введите слово: ";
            std::cin >> str;

            
            function(str, forbidden_length);
        }
        catch (const std::exception& e)
    {
        std::cout << e.what()<<std::endl;
    }

    return EXIT_SUCCESS;
}
