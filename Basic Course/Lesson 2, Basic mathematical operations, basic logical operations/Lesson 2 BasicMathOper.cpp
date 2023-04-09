// Lesson 2, Basic mathematical operations, basic logical operations.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{

    //Operacja	Zapis tradycyjny	Zapis skrócony
    //dodawanie	x = x + y;	x += y;
    //odejmowanie	x = x - y;	x -= y;
    //mnożenie	x = x * y;	x *= y;
    //dzielenie	x = x / y;	x /= y;
    //reszta z dzielenia	x = x % y;	x %= y;
    int a = 10;
    int b = 3;

    std::cout << "a.: " << a<<std::endl;
    std::cout << "b.: " <<b<< std::endl;
    std::cout << "a+b " << a + b << std::endl;
    std::cout << "a-b.: " << a-b <<std::endl;
    std::cout << " a*b.: " << a * b << std::endl;
    std::cout << "a/b " << a / b << std::endl;
    std::cout << "a/b ALE FLOAT.: " << (float)a / float(b) << std::endl;
    std::cout << "a%b reszta z dzielenia " << a % b << std::endl;

    int wynik1 = 0;
    std::cout << "podaj wlasne 'a'" << std::endl;
    std::cin >> a;
    std::cout << "podaj wlasne b" << std::endl;
    std::cin >> b;
    wynik1 = a + b;
    std::cout << "a+b=" << wynik1 << std::endl;
    wynik1 = a - b;
    std::cout << " a-b" << wynik1 << std::endl;
    wynik1 = a - 4 * b;
    std::cout << "a - 4*b" << wynik1 << std::endl;
    wynik1 = a * 2 * b;
    std::cout << "a*2*b" << wynik1 << std::endl;
    wynik1 = wynik1 - (wynik1 / 2);
    std::cout << "a*2*b-(a*2*b/2)" << wynik1;
    wynik1 = a / b;
    std::cout << "a/b" << wynik1 << std::endl;
    //rzutowanie int na float
    float wynik2 = (float)a / (float)b;
    std::cout << "a/b zmiennoprzecinkowe" << wynik2 << std::endl;
    wynik2 = a+b+3-a*b-a/(b*10)+b/(a*10);
    std::cout << " a+b+3-a*b-a/(b*10)+b/(a*10)="<<wynik2<<std::endl;
    std::cout << "roznica z dzielenia a%b" << a % b << std::endl;
    wynik1 = b % a;
    std::cout << "roznica z dzielenia b%a" << wynik1 << std::endl;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
