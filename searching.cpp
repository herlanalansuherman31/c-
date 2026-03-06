#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    int  flag = 0, cari;
    int counter = 0;
    int data[100];
    
    for (int i = 0; i < 100; i++) {
        data[i] = rand()%100;
        cout << data[i] << ",";
    }
    cout << "\nMasukkan angka yang ingin dicari: ";
    cin >> cari;
    for (int i = 0; i < 100; i++) {
        if (data[i] == cari) {
            flag = 1;
            counter++;
        }
    }
    if (flag == 1) {
        cout << "Angka " << cari << " ditemukan sebanyak " << counter << " kali." << endl;
    } else {
        cout << "Angka " << cari << " tidak ditemukan." << endl;
    }
}
