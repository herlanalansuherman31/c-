#include <iostream>
#include <stdlib.h>
using namespace std;
#define MAX 100
string data[MAX];
int front = 0;
int rear = -1;
bool isEmpty() {
    return rear < front;
}
bool isFull() {
    return rear >= MAX - 1;
}
void enqueue(){
    if (!isFull()){
        cout << "masukkan data: ";
        rear++;
        cin >> data[rear];
    }else{
        cout << "queue penuh!" << endl;
    }
}
void dequeue(){
    if (!isEmpty()){
        cout << "data " << data[front] << " dihapus dari queue" << endl;
        front++;
    }else{
        cout << "queue kosong!" << endl;
    }
}
void display(){
    if (!isEmpty()){
        cout << "data dalam queue: " << endl;
        for (int i = front; i <= rear; i++){
            cout << data[i] << endl;
        }
    }else{
        cout << "queue kosong!" << endl;
    }
}
int main(){
    int pilihan;
    cout << "Program Queue Sederhana" << endl;
    cout << 1<< ". Enqueue Data" << endl;
    cout << 2<< ". Dequeue Data" << endl;
    cout << 3<< ". Tampilkan Data" << endl;
    cout << 4<< ". Keluar" << endl;
    queue:
    cout << "Masukkan pilihan Anda: ";
    cin >> pilihan;
    if (pilihan == 1){
        enqueue();
        goto queue;
    }else if (pilihan == 2){
        dequeue();
        goto queue;
    }else if (pilihan == 3){
        display();
        goto queue;
    }else if (pilihan == 4){
        cout << "Keluar dari program." << endl;
    }else{
        cout << "Pilihan tidak valid!" << endl;
        goto queue;
    }
}
