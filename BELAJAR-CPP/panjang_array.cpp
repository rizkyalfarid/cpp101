#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
  // membuat array
  string contact[] = {"Ami", "Ayu", "Budi", "Agus", "Mila"};

  // //  mengambil banyaknya isi array
  // cout << sizeof(contact) << endl;
  // cout << sizeof(*contact) << endl;

  int length = sizeof(contact) / sizeof(*contact);

  // printf("Banyaknya isi array nilai: %d\n", length);
  for(int i = 0; i < length; i++) {
    cout << contact[i] << endl;
  }

  return 0;
}