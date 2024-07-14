#include <iostream>
using namespace std;

int main () {
    string nama;
    int umur;
    string jenisKelamin;
    
    cout << "Siapa Nama Kamu : ";
    cin >> nama;

    cout << "Berapa umur kamu :";
    cin >> umur;
    
    cout << "Apa Jenis Kelamin Mu [Pria/Perempuan]: ";
    cin >> jenisKelamin;
    
    cout << "Namamu " << nama << ", " << "Umurmu " << umur << ", " << "Jenis Kelamin mu " << jenisKelamin << endl;
}
