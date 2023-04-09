// Lesson 1 basic types_input_output_first_app.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{


	//komentarze pisze się za pomocą "//" lub /* */ jeśli w wielu linijkach
	//lub zaznacza się wiele linijek i ctrl+k ctrl +c, odkomentowanie wielu linijek .: ctrl + k, ctrl + u
	//formatowanie całego kodu ctrl + k ctrl +d
	// ctrl s-> zapisywanie pliku


		//podstawowe typy które będziemy używać w kursie, na samym dole umieszczę bardziej zaawansowane
		//przykłady.:
		//bool			false(0) lub true(1)
		//char			od - 128 do 127, używane także do zapisywania znaków ASCI ('a','b','c','1','2','3'), CAŁE BEZ PRZECINKA //link do tabelki
		//int	 		od - 2'147'483'648 do 2'147'483'647, liczby CAŁE (bez przecinka)
		//unsigned int	od 0 do 4'294'967'295, liczby CAŁE, DODATNIE
		//float			3.4E + / -38 (7 cyfr) //liczby zmiennoprzecinkowe, 7 cyfr po przecinku, ujemne i dodatnie (1.23, 123.333)
		//double		1.7E + / -308 (15 cyfr) // liczby zmiennoprzecinkowe, 15 cyfr po przecinku, ujemne i dodatnie
		//dodatkowo w kursie będziemy używać std::string
		

		//std::string jest to CIĄG (łańcuch) znaków zapisanych w asci (charów), czyli np .: std::string a="abcd"; Każdy z tych znaków osobno jest pojedyńczym charem, 
		//ale razem tworzą łańcuch znaków STRING

		//std -> jest to biblioteka w której znajdują się pewne bardzo typowe metody oraz typy używane przez programistów, 
		//w tym kursie będziemy pisać std przed wymaganymi metodami/komendami, ale żeby nie musieć tego robić wystarczy przed metodą main() użyć.:
		//using namespace std;

		//zacznijmy.

	char a = 'a';
	char aAleNumer = 97;
 
	std::string name = "Patryk";

	std::string surname = "PrzykladoweNazwisko";//polskie znaki są nie do końca poprawnie obsługiwane w konsoli, dlatego "l" a nie "ł"

	//komenta std::cout wypisuje na konsole to co do niej "prześlemy"
	//przesyłamy do komendy cout dane za pomocą "<<", std::endl; lub "\n" oznacza koniec linijki, tak żeby w konsoli był "enter"
	std::cout << "Mam na imie.:" <<name << ", a na nazwisko " << surname << std::endl;

	std::cout << "A ty jak sie nazywasz?" << std::endl;
	//komenda std::cin>> przesyła TO CO WPISZE UŻYTKOWNIK W KONSOLI W TYM MIEJSCU do zmiennej którą podamy, w tym przypadku zmienna "name"
	std::cin >> name;
	std::cout << "Milo ciebie poznac.: " << name << "\n";

	//deklarujemy zmienne dotyczace wieku, UNSIGNED int dlatego ze wiek teoretycznie zawsze jest dodatni
	unsigned int wiekMoj = 60;
	unsigned int wiekTwoj = 0;
	int roznicaWieku;
	//std::cout AUTOMATYCZNIE KASTUJE INT NA STRING, w tym konkretnym przypadku nie musimy sie tym przejmowac
	std::cout << "ja mam " << wiekMoj << " lat" << std::endl << "ile ty masz lat? " << "\n";
	//jesli uzytkownik wpisze cos innego niz poprawna liczbe, to mamy duzy problem, ale na potrzeby programu załóżmy że użytkownik wpisze poprawnie liczbę 
	std::cin >> wiekTwoj;
	//lewa strona ZAWSZE bedzie sie rownala temu co jest po prawej stronie, 
	//CZYLI np wiekMoj=wiekMoj+1; -> po tej operacji wiekMoj wynosiłby 61
	roznicaWieku = wiekMoj - wiekTwoj;
	std::cout << "Ty masz " << wiekTwoj << " lat." << std::endl << " Roznica wieku miedzy nami to.: " << roznicaWieku << " lat" << std::endl;
	
	wiekMoj = 10;
	//wiek moj=10
	wiekMoj = wiekMoj + wiekMoj + wiekMoj;
	std::cout << wiekMoj<<std::endl;
	//wiekMoj=30
	wiekMoj = wiekMoj + wiekMoj + wiekMoj;
	//wiekMoj=90
	std::cout << wiekMoj << std::endl;

	//
	//*mnożenie
	//   / dzielenie
	// + dodawanie
	//odejmowanie



	return 0;




}
//Numeryczne
//Nazwa typu	Ilość BAJTÓW PAMIĘCI
//Bajtów		Zakres	wartości
//bool			1		false lub true
//char			1			od - 128 do 127
//unsigned char	1	od 0 do 255
//wchar_t		2	od 0 do 65'535
//short			2	od - 32'768 do 32'767
//unsigned short2	od 0 do 65'535
//int			4	od - 2'147'483'648 do 2'147'483'647
//unsigned int	4	od 0 do 4'294'967'295
//long			4	od - 2'147'483'648 do 2'147'483'647
//unsigned long	4	od 0 do 4'294'967'295
//long long		8	od - 9'223'372'036'854'775'808 do 9'223'372'036'854'775'807
//unsigned long long	8	od 0 do 18'446'744'073'709'551'615
//float			4	3.4E + / -38 (7 cyfr)
//double		8	1.7E + / -308 (15 cyfr)
//long double	8	1.7E + / -308 (15 cyfr)
// 
// 
