#include <iostream>
using namespace std;

int main() {
  char ngulang = 'y';
  string nama;
  string kampus;
  int counter = 0;

  do {
    cout << "Masukkan Nama Kamu : ";
    cin >> nama;
    cout << "Masukkan Nama Kampus Mu : ";
    cin >> kampus;

    cout << "Apakah mau mengisi lagi[y/t]";
    cin >> ngulang;

    counter++;
  } while(ngulang == 'y');
  
  printf("Kamu sudah mengulang sebanyak %i kali", counter);
  return 0;
}