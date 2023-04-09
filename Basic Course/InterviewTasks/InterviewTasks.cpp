// InterviewTasks.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
class A {
public:
   A() { std::cout << "Konstruktor A\n"; }
   ~A() { std::cout << "Destruktor A\n"; }
   void  test() {
      std::cout << "Test A\n";
   }
};

class B : public A {
public:
   B() { std::cout << "Konstruktor B\n"; }
   B(std::string test){std::cout<<"konstruktor TEST\n"; }
   virtual ~B() { std::cout << "Destruktor B\n"; }
   void test() {
      std::cout << "Test B\n";
   }
};

class C : public B {
public:
   C() {  std::cout << "Konstruktor C\n"; }
   ~C() { std::cout << "Destruktor C\n"; }
   void test() {
      std::cout << "Test C\n";
   }
};


class IPojazd {
public:   
virtual void run() {

   };
};

class Controller {
   
 
   Controller(IPojazd* iPojazd);
   void doSomething() {
      iPojazd->run();
   }
private:
IPojazd* iPojazd;
};















int GetBitValue(int value, int bitPosition) {
   int n = value; // liczba 10 w postaci dziesiętnej
   int mask = 1 << bitPosition; // maska bitowa z jedynką na pozycji bitPosition
   int bit = (n & mask); // czytanie wartości bitu na pozycji 1
   return bit;
}
int CountBit(int value) {
   int n = value;
   int count = 0;
   
   while (n>0) {
      count++;
      n &= n - 1;
   }
   return count;
}
template<typename... Args>
class PrzykladowaKlasa {

public:
   using FuncType = void(*)(Args...);  // typ wskaźnika na funkcję

   void add_function(FuncType func) {
      functions_.push_back(func);
   }

   void call_functions(Args... args) const {
      for (auto& func : functions_) {
         func(std::forward<Args>(args)...);
      }
   }

private:
   std::vector<FuncType> functions_;
};
void print_hello(int a) {
   std::cout << "Hello ";
}

void print_world(int b) {
   std::cout << "world!" << std::endl;
}
int main() {
 
   A* ptr2 = new C();
 
   ptr2->test();
   //std::cout<< GetBitValue(12,3)<<std::endl;
   //std::cout<< CountBit(3)<<std::endl;
   //PrzykladowaKlasa<int> obj;
   //obj.add_function(print_hello);
   //obj.add_function(print_world);
   //obj.call_functions(1);  // wywołanie obu funkcji
   delete ptr2;
   return 0;
}

//można się podpytać o jego znajomość standardów, 
// czy zna lambdę, czy wie co to są klasy generyczne, czy umie korzystać z szablonów funkcji, funktorów etc.
//ale wiecej akturalnie nie mam pomysłu.


//0.:
//dać taki kod i A) zapytac się co się wyświetli (bez odpalenia kodu)
//B) jak zrobić tak żeby wszystkie destruktory zostały wywołane przy delete
//C) jak zrobić żeby ptr2->test() wyświetlało TEST C zamiast TEST A
//D) jak zrobić żeby C wywoływało B(string) konstruktor zamiast B defaultowego konstruktora



//Czytanie wartości bitu z liczby całkowitej.:
//1.) I want method int GetBitValue(int value, int bitPosition) 
// Example of working this method.:
// value 12 (1100), bitPosition=3, return = 8 (1000)
// 
//2.) I Want method int GetBitValue(int value, std::vector<int> bitPositions) that works like method before, but with many bit positions
// example.:
// value=12 (1100), bitPositions {2,3} return= 12 (1100)
// value = 12(1100), bitPositions {1,3} return = 8 (1000)
// value = 12, bitPositions {2,1,0} return = 4 (0100)
//3.) I want method int GetWithMask(int value, Int mask) that returns value masked by mask 
// example.: value 14(1110) mask 10 (1010), return .: 10 (1010)
//           value 14(1110) mask 9 (1001), return .: 9 (1000)
//4.)Napisz program, który pobiera od użytkownika liczbę całkowitą n oraz pozycję bitu, którego wartość chcemy ustawić na 1.
// Następnie, program powinien wyświetlić wartość liczby n z ustawionym bitem o wybranej pozycji.
//5.) Napisz metodę która zlicza ilość bitów ustawionych na wartość 1 w liczbie przesłanej do metody int CountBit(int value);
// przykład dla value 23 (10111) return 4, dla value 22 (10110) return 3, dla value 24 (11000) return 2