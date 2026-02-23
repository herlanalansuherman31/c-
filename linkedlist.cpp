#include <iostream>
#include <string>
using namespace std;
struct novel {
    string buku;
    novel* next;
};
novel* head,* tail, * curr, *newNode, *del; ;

void createlinkedlist(string buku) {
    head = new novel();
    head->buku = buku;
    head->next = nullptr;
    tail = head;
}
void addfirst(string buku){
    newNode = new novel();
    newNode->buku = buku;
    newNode->next = head;
    head = newNode;
}
void addlast(string buku){
    newNode = new novel();
    newNode->buku = buku;
    newNode->next = nullptr;
    tail->next = newNode;
    tail = newNode;
}
void deleatefirst(){
    del = head;
    head = head->next;
    delete del;
}
void deleatelast(){
    del = tail;
    curr = head;
    while (curr->next != tail){
        curr = curr->next;
    }
    tail = curr;
    tail->next = nullptr;
    delete del;
}
void display(){
    curr = head;
    while (curr != nullptr){
        cout << curr->buku << endl;
        curr = curr->next;
    }
}
int main(){
    createlinkedlist("Laskar Pelangi");
    addfirst("5 cm");
    addlast("Bumi");
    deleatefirst();
    display();
}
