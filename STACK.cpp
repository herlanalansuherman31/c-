#include <iostream>
#include <string>
using namespace std;
#define MAX 100
string data[MAX];
int top = 0;
bool isEmpty() {
    return top == 0;
}
bool isFull() {
    return top >= MAX;
}
void push(){
    if (!isFull()){
        cout << "masukkan data: ";
        cin >> data[top];
        top++;
    }else{
        cout << "stack penuh!" << endl;
    }
}
void pop(){
    if (!isEmpty()){
        top--;
        cout << "data " << data[top] << " dihapus dari stack" << endl;
    }else{
        cout << "stack kosong!" << endl;
    }
}
void display(){
    if (!isEmpty()){
        cout << "data dalam stack: " << endl;
        for (int i = 0; i < top; i++){
            cout << data[i] << endl;
        }
    }else{
        cout << "stack kosong!" << endl;
    }
}
int main(){
    int pilihan;
    cout << "Program Stack Sederhana" << endl;
    cout << 1<< ". Push Data" << endl;
    cout << 2<< ". Pop Data" << endl;
    cout << 3<< ". Tampilkan Data" << endl;
    cout << 4<< ". Keluar" << endl;
    stack:
    cout << "Masukkan pilihan Anda: ";
    cin >> pilihan;
    if (pilihan == 1){
        push();
        goto stack;
    }else if (pilihan == 2){
        pop();
        goto stack;
    }else if (pilihan == 3){
        display();
        goto stack;
    }else if (pilihan == 4){
        cout << "Keluar dari program." << endl;
    }else{
        cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
        goto stack;
    }
}
