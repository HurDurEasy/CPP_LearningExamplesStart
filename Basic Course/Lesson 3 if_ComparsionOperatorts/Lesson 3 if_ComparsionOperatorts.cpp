// Lesson 3 if_ComparsionOperatorts.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	//1.) > jest większe od
	//2.) >= jest większe lub równe niż
	//3.) < jest mniejsze od
	//4.) <= jest mniejsze lub równe niż
	//5.) == jest równe
	//6.) != jest różne od
	//Przykłady wykorzystania.: int a = 10; if (a > 5) { [...wykonywany kod jeśli a jest większe od 5...] }
	//operatory logiczne.: (pomocnicze do operatorów powyżej)
	//operator	opis 
	//7.) &&		(I)Iloczyn logiczny - wszystkie wartości muszą być prawdziwe, aby została zwrócona prawda.
	//8.) ||		(lub)Suma logiczna - co najmniej jedna z wartości musi być prawdziwa, aby została zwrócona prawda.
	//9.) !		(nie)Zanegowanie wartości - czyli zwrócenie wartości przeciwnej.

	

	//powyższe operatory można zastosować w ifie.
	bool warunek = true;
   bool warunek2=false;
	//if 1
	if (warunek) {
		//operacja
		std::cout << "wykonana operacja gdy warunek jest true-prawda" << std::endl;
	}
   //jesli warunek i warunek 2 prawda
   if (warunek && warunek2)
   {
      std::cout << "wykonana operacja gdy warunek jest true-prawda" << std::endl;

   }
   //jesli to lub chociaz to drugie
   if (warunek || warunek2)
   {
      std::cout << "wykonana operacja gdy warunek jest true-prawda" << std::endl;

   }



	int a = 1;
	int b = 2;
	if (a > b) {
		std::cout << "wykonana operacja gdy warunek (a<b) jest prawdziwy" << std::endl;
	}
	else {
		std::cout << "wykonana operacja gdy warunek (a<b) jest fałszywy" << std::endl;
	}

	int x = 100;
	int	z = 50;
	int y = 1;

	//ZAD.: bez odpalenia kodu, przeanalizuj która operacja się wykona
	if (x < y) {
		std::cout << "wykonana operacja gdy warunek (x<y) jest prawdziwy" << std::endl;

	}
	else if (x < z) {
		std::cout << "wykonana operacja gdy warunek (x<z) jest prawdziwy, a (x<y) falszywy" << std::endl;
	}
	else if (z < y) {
		std::cout << "wykonana operacja gdy warunek (z<y) jest prawdziwy, a (x<z) oraz (x<y) falszywy" << std::endl;
	}
	else {
		std::cout << "wykonana operacja gdy żaden z powyższych warunków nie jest prawdziwy" << std::endl;

	}
    

   if (x == z)
   {
      std::cout << "wykonana operacja gdy warunek (x==y) jest prawdziwy" << std::endl;
   }

	if (x != z) {
		std::cout << "wykonana operacja gdy warunek (x==y) jest nie prawdziwy" << std::endl;
	}
	bool warunek1 = true;
	bool warunek2 = false;
	bool warunek3 = true;

	if (warunek1) 
	{
		if (warunek2) 
		{
			if (warunek3) 
			{

				std::cout << "Czy przeszło czy nie?" << std::endl;
				// nie przejdzie
			}
		}

		if (warunek3) {
			std::cout << "Czy przeszło czy nie2?" << std::endl;
			//przejdzie
		}
	}
	std::string aString = "aaa";
	std::string bString = "bbb";
	if (aString != bString) {
		std::cout << "a nie jest b" << std::endl;
	}
	else if (aString == bString) {
		std::cout << "a jest b" << std::endl;
	}

	char aChar = 'a';
	int aInt = 'a';

	if (aChar == 'b') {

	}
	if (aChar == aInt) {

	}
  
	//zad stwórz prosty kalkulator (jedno działanie), pytasz się użytkownika o jakie działanie chce zrobić, potem ma wprowadzić 1 liczbe, potem drugą.
	//"podaj działanie.:+,-,*,/,%"
	//
    //Operacja	Zapis tradycyjny	Zapis skrócony
    //dodawanie	x = x + y;	x += y;
    //odejmowanie	x = x - y;	x -= y;
    //mnożenie	x = x * y;	x *= y;
    //dzielenie	x = x / y;	x /= y;
    //reszta z dzielenia	x = x % y;	x %= y;
	//użytkownik odpowiada
	//jeśli odpowie poprawnie - wykonaj to konkretne działanie
	//jeśli nie poprawnie, powiedz że źle odpowiedział, zakończ

   //1.) pytasz użytkownika jakie działanie chce zrobić, wypisujesz możliwości +,-,*,/,%
   //2.) użytkownik wprowadza zmienną
   //3.) (ogólne) użytkownik wprowadza liczby
   //4.) wykonujesz to działanie
   //5.) wypisujesz to działanie
   if(false){
      std::cout << "podaj jakie działanie chcesz wykonać" << std::endl;
      std::string działanie;
      std::cin >> działanie;
      if (działanie == "+"||działanie=="-"||działanie=="*"||działanie=="/"||działanie=="%")
      {
         std::cout << "wprowadź liczby" << std::endl;
         int a1 = 1;
         int a2 = 2;
         std::cin >> a1;
         std::cout << "wprowadziles a1.: " << a1<<std::endl;
         std::cin >> a2;
         std::cout << "wprowadziles a2.:" << a2<<std::endl;
         int wynik = 0;
         if (działanie == "+")
         {
            wynik = a1 + a2;
         }
         if (działanie == "-")
         {
            wynik = a1 - a2;
         }
         if (działanie == "*")
         {
            wynik = a1 * a2;
         }
         if (działanie == "/")
         {
            wynik = a1 / a2;
         }
         if (działanie == "%")
         {
            wynik = a1 % a2;
         }
         std::cout << "Twój wynik to:" << wynik << std::endl;
      }
      else
      {
         std::cout << "wykonana operacja gdy żaden z powyższych warunków nie jest prawdziwy" << std::endl;
      }
      
   
   }

   //zad 2.: Tinder.: użytkownik ma wprowadzić płeć, 
   // jeśli płeć pasuje programowi (wybrać m albo k) przejść dalej, 
   // użytkownik ma podać swój wiek, jeśli wiek mniejszy niż 18, wypisać że jest niepelnoletnim gowniarzem
   //jesli ma wiecej niz 18, sprawdzic czy jest mlodszy niz 35 lat, jesli jest mlodszy, przejsc dalej,
   // jesli jest starszy, wypisac ze jest starym dziadem.
   //nastepnie uzytkownik ma podac miasto z ktorego jest, 
   //jesli to miasto jest z listy miast (Lodz, Olsztyn,Poznan, Warszawa, Szczecin) jesli typ jest z innego miasta, 
   //to ma spadac bo ci reszta miast sie nie podoba
   //na koniec, sprawdzic czy typ nazywa sie Adrian Gochnio, jesli nie, to niech spada.
   //koniec programu.






   //zad 3
   //1.) użytkownik ma wpisać która jest godzina, najpierw godzina, potem minuty
   //1.1) jeśli jest nieprawidłowa, wypisać komunikat. urwać program.
   //1.2) jeśli jest prawidłowa, powiedzieć "dzien dobry", dobry wieczór, czas na obiad, dobranoc w zależności od pory dnia (sama ustal przedział godzin.)
   //2.)  dla poranka i obiadu, zaproponować odpowiednie posiłki (śniadaniowe/obiadowe), w innym przypadku zakończyć program, wypisać w liście 1,2,3,4.
   //2.1) każdy z posiłków powinien mieć swoją cene, następnie niech uzytkownik wybierze przystawkę oraz napój w ten sam sposób. 
   //2.2) dać też opcję nie wybierania przystawki oraz napoju
   //3.) na koniec wypisać cenę za całość (główny posiłek, przystawkę oraz napój)
   



















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
