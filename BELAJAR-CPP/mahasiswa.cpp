#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Mahasiswa {
    int id;
    string nama;
    string jurusan;
    int umur;
};

vector<Mahasiswa> database;
int currentID = 1;

void tambahMahasiswa() {
    Mahasiswa m;
    m.id = currentID++;
    cout << "Masukkan nama mahasiswa: ";
    cin.ignore();
    getline(cin, m.nama);
    cout << "Masukkan jurusan mahasiswa: ";
    getline(cin, m.jurusan);
    cout << "Masukkan umur mahasiswa: ";
    cin >> m.umur;

    database.push_back(m);
    cout << "Mahasiswa berhasil ditambahkan.\n";
}

void tampilkanMahasiswa() {
    if (database.empty()) {
        cout << "Tidak ada data mahasiswa.\n";
        return;
    }
    
    for (const auto& m : database) {
        cout << "ID: " << m.id << "\n";
        cout << "Nama: " << m.nama << "\n";
        cout << "Jurusan: " << m.jurusan << "\n";
        cout << "Umur: " << m.umur << "\n";
        cout << "-----------------------\n";
    }
}

void updateMahasiswa() {
    int id;
    cout << "Masukkan ID mahasiswa yang akan diupdate: ";
    cin >> id;
    cin.ignore();
    
    bool found = false;
    for (auto& m : database) {
        if (m.id == id) {
            found = true;
            cout << "Masukkan nama baru: ";
            getline(cin, m.nama);
            cout << "Masukkan jurusan baru: ";
            getline(cin, m.jurusan);
            cout << "Masukkan umur baru: ";
            cin >> m.umur;
            cout << "Data mahasiswa berhasil diupdate.\n";
            break;
        }
    }

    if (!found) {
        cout << "Mahasiswa dengan ID tersebut tidak ditemukan.\n";
    }
}

void hapusMahasiswa() {
    int id;
    cout << "Masukkan ID mahasiswa yang akan dihapus: ";
    cin >> id;

    bool found = false;
    for (auto it = database.begin(); it != database.end(); ++it) {
        if (it->id == id) {
            found = true;
            database.erase(it);
            cout << "Data mahasiswa berhasil dihapus.\n";
            break;
        }
    }

    if (!found) {
        cout << "Mahasiswa dengan ID tersebut tidak ditemukan.\n";
    }
}

void tampilkanMenu() {
    cout << "1. Tambah Mahasiswa\n";
    cout << "2. Tampilkan Mahasiswa\n";
    cout << "3. Update Mahasiswa\n";
    cout << "4. Hapus Mahasiswa\n";
    cout << "5. Keluar\n";
    cout << "Pilih opsi: ";
}

int main() {
    int pilihan;
    do {
        tampilkanMenu();
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                tambahMahasiswa();
                break;
            case 2:
                tampilkanMahasiswa();
                break;
            case 3:
                updateMahasiswa();
                break;
            case 4:
                hapusMahasiswa();
                break;
            case 5:
                cout << "Terima kasih telah menggunakan program ini.\n";
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi.\n";
                break;
        }
        cout << "\n";
    } while (pilihan != 5);

    return 0;
}
