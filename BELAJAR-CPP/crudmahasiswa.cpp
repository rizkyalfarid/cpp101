#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
  int id;
  string nama;
  Mahasiswa* next;
};

Mahasiswa* head = nullptr;

void tambahMahasiswa(int id, string nama) {
  Mahasiswa* newMahasiswa = new Mahasiswa();
  newMahasiswa -> id = id;
  newMahasiswa -> nama = nama;
  newMahasiswa -> next = head;
  head = newMahasiswa;
};

void tampilMahasiswa() {
  Mahasiswa* temp = head;
  while(temp != nullptr) {
    cout << "ID: " << temp->id << ", Nama: " << temp ->nama << endl;
    temp = temp -> next;
  }
}

void updateMahasiswa(int id, string nama) {
  Mahasiswa* temp = head;
  while(temp != nullptr) {
    if ((temp -> id == id)) {
      temp-> nama = nama;
      cout << "Data mahasiswa dengan ID " << id << " Telah di update." << endl;
      return;
    } 
    temp = temp -> next; 
  }
  cout << "Mahasiswa dengan ID " << id << " tidak ditemukan." << endl;
}

void hapusMahasiswa(int id) {
  Mahasiswa* temp = head;
  Mahasiswa* prev = nullptr;

  if(temp != nullptr && temp ->id == id) {
    head = temp -> next;
    delete temp;
    cout << "Mahasiswa dengan ID " << id << " Telah Di Hapus" << endl;
    return;
  }
  while(temp != nullptr && temp->id != id) {
    prev = temp;
    temp = temp->next;
  }
  if ((temp == nullptr)){ 
    cout << "Mahasiswa dengan ID " << id << " Tidak ditemukan."  << endl;
    return;
  }
  prev->next = temp->next;
  delete temp;
  cout << "Mahasiswa dengan ID " << id << " telah dihapus." << endl;
}

int main() {
  int pilihan, id;
  string nama;

  do {
    cout << "1. Tambah Mahasiswa\n2. Tampilkan Mahasiswa\n3. Update Mahasiswa\n4. Hapus Mahasiswa\n5.Keluar\n";
    cout << "Masukkan Pilihan : ";
    cin >> id;
    switch (pilihan) {
      case 1 : 
          cout << "Masukkan Nama";
          cin.ignore();
          getline(cin, nama);
          tambahMahasiswa(id, nama);
          break;
      case 2 : 
        tampilMahasiswa();
        break;
      case 3 : 
        cout << "Masukkan ID yang akan diupdate: ";
        cin >> id;
        cout << "Masukka Nama baru : ";
        cin.ignore();
        getline(cin, nama);
        updateMahasiswa(id, nama);
        break;
      case 4 : 
        cout << "Masukkan ID yang akan dihapus";
        cin >> id;
        hapusMahasiswa(id);
        break;
      case 5 : 
        cout << "Keluar dari program" << endl;
        break;
      default :
        cout << "Pilihan Tidak Valid" << endl;
    }
  } while(pilihan != 5);
  return 0;
}