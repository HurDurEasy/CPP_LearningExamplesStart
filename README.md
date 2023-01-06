# CPP_LearningExamplesStart
Learning examples for c++ for beginners advanced. 

Links.:
PL examples.:
# Podstawowe typy danych.:
https://cpp0x.pl/kursy/Kurs-C++/Poziom-1/Pojecie-zmiennej-i-podstawowe-typy-danych/11

# Operacje matematyczne.: (+,-,*,/,%)
https://cpp0x.pl/kursy/Kurs-C++/Poziom-1/Operacje-matematyczne/13

# Operatory porównania (wykorzystywane np w ifach/pętlach)
Operator	  Krótki opis

1.) >	      jest większe od 

2.) >=	    jest większe lub równe niż 

3.) <	      jest mniejsze od 

4.) <=	    jest mniejsze lub równe niż 

5.) ==	    jest równe

6.) !=      jest różne od

Przykłady wykorzystania.:
int a=10;
if(a>5){ [...wykonywany kod jeśli a jest większe od 5...] }

# operatory logiczne.: (pomocnicze do operatorów powyżej)
operator        opis
7.) &&	          (I) Iloczyn logiczny - wszystkie wartości muszą być prawdziwe, aby została zwrócona prawda.

8.) ||	          (lub) Suma logiczna - co najmniej jedna z wartości musi być prawdziwa, aby została zwrócona prawda.

9.) !	            (nie) Zanegowanie wartości - czyli zwrócenie wartości przeciwnej.

proste przykłady .:

if(a>b&&a>c){} -> jeśli a jest większe od b _ORAZ_ a jest większe od c to wykonaj

if(a>b && !(a>c){} -> jeśli a jest większe od b _ORAZ_  (wykrzyknik czyli _NEGACJA_ więc.:) a _NIE_ jest większe od c, to wykonaj

if( (a>b) || (a>c) ){} -> jeśli a jest większe od b _LUB_ a jest większe od c



# Dokładny opis (If, if else)
https://cpp0x.pl/kursy/Kurs-C++/Poziom-1/Instrukcja-warunkowa-if-else/16


# Pętle .: 
Pętla wykonuje się dopóki warunek JEST SPEŁNIONY, jeśli warunek przestaje być spełniony (lub wykonywana jest operacja break;) wychodzimy z pętli.
prosty przykład pętli wypisującej od 0 do 9 (wykona się 10 razy, 0,1,2,3,4,5,6,7,8,9).:
int a=0;
while(a<10)
{
  std::cout<<a<<endl;
  a=a+1; //lub a++;
}

pętle do {operacja} while(warunek)   https://cpp0x.pl/kursy/Kurs-C++/Poziom-2/Petla-do-while/18

pętle for(zmienna;warunek;zmiana zmiennej){operacja}  .: http://drzewniak.slupsk.pl/~ks/c/c_013.html

pętle while(warunek){operacja} .: http://drzewniak.slupsk.pl/~ks/c/c_015.html


