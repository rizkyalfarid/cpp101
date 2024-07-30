#include <iostream>
using namespace std;

int main() {
  // perungan for 

  // for(int i = 0; i < 10; i++) {
  //   printf("Hello World Ke-%i\n", i);
  // }

  // perulangan while
  char ulangi = 'y';
  int counter = 0;

   while(ulangi == 'y'){
        printf("Apakah kamu mau mengulang?\n");
        printf("Jawab (y/t): ");
        cin >> ulangi;

        // increment counter
        counter++;
    }

    printf("\n\n----------\n");
    printf("Perulangan Selesai!\n");
    printf("Kamu mengulang sebanyak %i kali.\n", counter);

    return 0;
}