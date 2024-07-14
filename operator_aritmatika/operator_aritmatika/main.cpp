#include <iostream>
using namespace std;

int main(){

//    int nilai;
//    string grade;
//    
//    cout << "=== Program Grade Nilai ===" << endl;
//    cout << "Inputkan nilai akhir: ";
//    cin >> nilai;
//
//    // menggunakan percabangan if/else/if
//    if (nilai >= 90) {
//        grade = "A";
//    } else if (nilai >= 80) {
//        grade = "B+";
//    } else if (nilai >= 70) {
//        grade = "B";
//    } else if (nilai >= 60) {
//        grade = "C+";
//    } else if (nilai >= 50) {
//        grade = "C";
//    } else if (nilai >= 40) {
//        grade = "D";
//    } else if (nilai >= 30) {
//        grade = "E";
//    } else {
//        grade = "F";
//    }
//
//    cout << "Grade anda: " << grade << endl;
//    char grade;
//    cout << "Masukkan Grade Kamu : ";
//    cin >> grade;
//    
//    switch (toupper(grade)) {
//        case 'A':
//                  cout << "Luar biasa!" << endl;
//                  break;
//              case 'B':
//              case 'C':
//                  cout << "Bagus!" << endl;
//                  break;
//              case 'D':
//                  cout << "Anda lulus" << endl;
//                  break;
//              case 'E':
//              case 'F':
//                  cout << "Anda remidi" << endl;
//                  break;
//              default:
//                  cout << "Grade Salah!" << endl;
//          }
    int numbers[5] = {1, 2, 3, 4, 5};

        // Mengakses elemen array
        for (int i = 0; i < 5; i++) {
            cout << "Element at index " << i << ": " << numbers[i] << endl;
        }

    return 0;
}
