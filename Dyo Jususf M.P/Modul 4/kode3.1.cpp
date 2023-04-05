//kode3.1.cpp
#include <iostream>
int main ()
{
using namespace std;

int taliwang[3];
taliwang[0] = 7;
taliwang[1] = 8;
taliwang[2] = 6;


int biaya_taliwang[3] = {175, 200, 125};
cout << "Total taliwang = ";
cout << (taliwang[0] + taliwang[1] + taliwang[2]) << endl;
cout << " Paket yang berisi " << taliwang[1] << " Ayam taliwang seharga ";
cout << biaya_taliwang[1] << " rupiah.\n ";
int total = ( taliwang[0] * biaya_taliwang[0] + taliwang[1] * biaya_taliwang[1]);
total = total + taliwang[2] * biaya_taliwang[2];
cout << "Total biaya = " << total << " rupiah.\n ";
cout << "\nUkuran array taliwang = " << sizeof taliwang;
cout << " byte.\n ";
cout << " Ukuran satu elemen array = " << sizeof taliwang[0];
cout << " byte.\n ";
return 0;

}
