//#include "Tickets.h"
//// --------- TASK 1 ---------
//2
//3// function which will return given amount of bits with desired shift
//4uint32 GetBitsFromUint32(unit32 inputValue, uint8 bitOffset, uint8 bitLength);
//5//example:
//6uint32 res = GetBitsFromUint32(0xABCDEF12, 4, 12);
//7// result is: res = 0x00000EF1;
//8
//9
//10
//11// --------- TASK2 ---------
//12
//13//overload function with const char *:
//14uint32 GetBitsFromUint32(const char* inputValue, uint8 bitOffset, uint8 bitLength);
//15uint32 res = GetBitsFromStr("0xABCDEF12", 4, 12); // pay attention to quotation!
//16// result shall be the same
//17// res = 0x00000EF1;
//18
//19
//20
//21// --------- TASK 3 ---------
//22
//23// Extract bool vector from overloaded function
//24std::vector<bool> GetBitsVector(std::string inputValue);
//25std::vector<bool> GetBitsVector(uint32 inputValue);
//26// usage:
//27std::vector<bool> res = GetBitsVector(149);
//28// or
//29std::vector<bool> res = GetBitsVector(0x95);
//30// or
//31std::vector<bool> res = GetBitsVector("0x95");
//32// expected result (index 0 = LSB)
//33// res = {true, false, true, false, true, false, false, true, ...}
//34
//35
//36
//37// --------- TASK 4 ---------
//38
//39// Create Tree class which will be able to generate string trees (like folders structure)
//40// example of usage:
//41
//42int main(...)
//43{
//   44   Tree * root = new Tree("tree name");
//   45   Tree * galaz1 = root->AddSub("galaz 1"); // this function creates a child Tree object and returns pointer to it
//   46   Tree * galaz2 = root->AddSub("galaz 2");
//   47   Tree * galaz3 = root->AddSub("galaz 3");
//   48   Tree * galaz1_1 = galaz1->AddSub("galaz 1.1");
//   49   Tree * galaz2_1 = galaz2->AddSub("galaz 2.1");
//   50   Tree * galaz2_2 = galaz2->AddSub("galaz 2.2");
//   51   Tree * galaz2_1_2 = galaz2_1->AddSub("galaz 2.1.2");
//   52   // after execution
//      53   root->print(0); // in parameter pass initial indent for the object
//   54   // Expected result:
//      55   // tree name
//      56   //    galaz 1
//      57   //       galaz 1.1
//      58   //    galaz 2
//      59   //       galaz 2.1
//      60   //        galaz 2.1.1
//      61   //       galaz 2.2
//      62   //    galaz 3
//      63   // print works recursive, where indent is passed
//      64
//      65   uint32 rootChildrenCnt = root->GetSubCount(); // result shall be 3
//   66   uint32 galaz1childrenCount = galaz1->GetSubCount(); // result shall be 1
//   67   uint32 countOfAllChildren = root->GetAllSubCount(); // result shall be 7 (recursive children counting)
//   68
//      69   root->Del(1); // will remove galaz_2 with all it's children (recursive), so in a result only galaz_1 and galaz_3 will stay
//   70
//      71   uint32 rootChildrenCnt _v2 = root->GetSubCount(); // result shall be 2
//   72   uint32 countOfAllChildren _v2 = root->GetAllSubCount(); // result shall be 3 (recursive children counting)
//   73
//      74   delete(root); // deleting root shall remove all children (recursive) and clean memory
//   75}
//76
//77// --------- TASK 5 ---------
//78
//79// Extension of "print" function which will add automatic numbering
//80// execution:
//81root->print(0, true); // deepth= 0, true = print numbers
//82
//83   // We shall get following result (root has no number)
//84   // tree name
//85   //    1. galaz 1
//86   //       1.1. galaz 1.1
//87   //    2. galaz 2
//88   //       2.1. galaz 2.1
//89   //        2.1.1. galaz 2.1.1
//90   //       2.2. galaz 2.2
//91   //    3. galaz 3
//92
//93// remove second child:
//94root->Del(1);
//95// result:
//96// tree name
//97//    1. galaz 1
//98//       1.1. galaz 1.1
//99//    2. galaz 3
//100
//101
//102// ---------------- TASK 6 ---------------
//103// Develop function, which will show all elements of vector in reverse order without (!) usage of any loops or libraries.
//104
//105// input vector: { a,b,c,d,e,f,g,h,i,j }
//106// output:
//107// j,i,h,g,f,e,d,c,b,a
//108
//109// ---------------- TASK 7 ----------------
//110
//111Prepare class / set of functions, which allows serialization and deserialization of binary data, like :
//   112BitStream->Add(4, &Var0) // adds 4 bits of Var0 to a data stream / buffer
//   113BitStream->Add(2, &Var1)// adds 2 bits of Var1 to a data stream / buffer
//   114BitStream->Add(5, &Var2)// adds 5 bits of Var2 to a data stream / buffer
//   115BitStream->Add(1, &Var3)// adds 1 bit of Var3 to a data stream / buffer
//   116BitStream->Add(8, &Var4)// adds 8 bits of Var4 to a data stream / buffer
//   117BitStream->Add(16, &Var5)// adds 16 bits of Var5 to a data stream / buffer
//   118BitStream->Add(4, &Var6)// adds 4 bits of Var6 to a data stream / buffer
//   119// Var0..6 can be any type
//   120
//   121Function samples :
//122uint32 BitStream::Add(uint32 bitLength, void* dataAddr); //returns actual position after adding data to stream
//123uint32 BitStream::Get(uint32 bitLength, void* dataAddr); // returns position after reading bits and storing unter dataAddr
//124uint32 BitStream::GetBitLength(); // returns amount of added bits 
//125uint32 BitStream::GetData(void* addr, uint32 maxBitLength); // allows to get full stream, returns  number of bits
//126BitStream::ResetData(); // clears internal buffer
