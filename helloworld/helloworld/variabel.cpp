//
//  variabel.cpp
//  helloworld
//
//  Created by Rizky Al Farid on 11/07/24.
//

#include "variabel.hpp"
#include <iostream>
using namespace std;

int main() {
    string nama;
    int umur;
    string jenisKelamin;
    
    cout << "Masukkan Nama Mu : ";
    cin >> nama;
    
    cout << "Masukkan Umur Mu : ";
    cin >> umur;
    
    cout << "Masukkan Jenis Kelamin Mu :";
    cin >> jenisKelamin;
    
    cout << "Halo, " << nama << "Umur mu sekarang adalah " << umur << " Tahun" << "Jenis Kelamin mu adalah " << jenisKelamin;
    
}
