#include <iostream>
using namespace std;
int main(){
    int nilai = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(nilai)/sizeof(*nilai);
    int temp;
    for (int i = 0; i < n-1; I++){
        for (int j = 0; j < n-i-1; j++){
            if (nilai[j]>nilai[j+1]){
                temp = nilai[j];
                nilai[j] = nilai[j+1];
                nilai[j+1] = temp;
            }
        }
    }
    cout << "Sorted array: \n";
    for (int x = 0; x < n; x++){
        cout << nilai[x] << " ";
    }