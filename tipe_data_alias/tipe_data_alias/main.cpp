//
//  main.cpp
//  tipe_data_alias
//
//  Created by Rizky Al Farid on 13/07/24.
//

#include <iostream>
using namespace std;

int main() {
//    typedef int angka;
//    typedef char* teks;
//    
//    teks namaProduk = "1Kg Beras";
//    angka hargaProduk = 99000;
//        
//    //menampilkan isi variabel
//    
//    cout << "Nama produk: " << namaProduk << endl;
//    cout << "harga: " << hargaProduk << endl;
    
// type data auto
    
    auto nama = string("Rizky Al Farid");
    auto umur = 19;
    auto tinggiBadan = 159.0f;
    auto isMenikah = false;
    
    cout << "Nama " << nama << endl;
    cout << "Tipe " << typeid(nama).name() << endl;
    
    cout << "Umur " << umur << endl;
    cout << "Tipe " << typeid(umur).name() << endl;
    
    cout << "Tinggi Badan " << tinggiBadan << endl;
    cout << "Tipe " << typeid(tinggiBadan).name() << endl;
    
    cout << "Menikah ? " << isMenikah << endl;
    cout << "Tipe " << typeid(isMenikah).name() << endl;
    return 0;
}
