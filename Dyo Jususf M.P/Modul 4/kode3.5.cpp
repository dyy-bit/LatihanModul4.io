//kode3.5.cpp
#include <iostream>
int main()
{
using namespace std;

const int Dimensi = 20;
char nama[Dimensi];
char teman[Dimensi];
cout << " Masukkan nama anda:\n ";
cin.get(nama, Dimensi).get();
cout << " Masukkan nama teman anda:\n ";
cin.get (teman, Dimensi).get();
cout << " Anda beruntung memiliki teman bernama " << teman;
cout << " ,Selamat! " << nama << ".\n";
return 0;

}
