#include <iostream>
using namespace std;

int pertambahan(int nilai1, int nilai2) {
  int hasil;
  hasil = nilai1 + nilai2;
  return hasil;
}

int pengurangan(int nilai1, int nilai2) {
  int hasil;
  hasil = nilai1 - nilai2;
  return hasil;
}

int perkalian(int nilai1, int nilai2) {
  int hasil;
  hasil = nilai1 * nilai2;
  return hasil;
}

int pembagian(int nilai1, int nilai2) {
  int hasil;
  hasil = nilai1 / nilai2;
  return hasil;
}

int main() {
  // int nilai1, nilai2;
  // //operator aritmatika + - / *
  // cout << "Masukkan Angka Pertama : ";
  // cin >> nilai1;
  // cout << "Masukkan Angka Kedua : ";
  // cin >> nilai2;
  // cout << "Hasil dari perkalian adalah " << perkalian(nilai1, nilai2) << endl;

  //operator logika 
  int angka;  

  cout << "\n";
  cout << "===== GANJIL GENAP =====" << endl;
  cout << "Masukkan Nilai Yang Akan di cek : ";
  cin >> angka;
  if(angka % 2 == 0) {
    cout << "Angka " << angka << "Adalah" << "Bilangan Genap" << endl;
  } else {
    cout << "Angka " << angka << " Adalah " << "Bilangan Ganjil" << endl;
  }
  cout << "\n";

  return 0;
}