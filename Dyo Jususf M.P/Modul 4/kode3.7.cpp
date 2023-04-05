//kode3.7.cpp
#include <iostream>
#include <string>
int main ()
{
using namespace std;

char charr1[20];
char charr2[20] = " Tiger ";
string strl;

string str1;
string str2 = " Lion ";
cout << " Masukkan nama binatang: ";
cin >> charr1;
cout << " Masukkan nama binatang yang lain: ";
cin >> str1;
cout << " Ini adalah beberapa binatang:\n ";
cout << charr1 << " " << charr2 << " "
<< strl << " " << str2
<< endl;
cout << " Huruf kedua " << charr2 << " adalah "
<< charr2[2] << endl;
cout << " Huruf kedua di dalam " << str2 << " adalah "
<< str2[2] << endl;
return 0;

}
