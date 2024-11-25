#include <iostream>
using namespace std;

int elementosArray(int* arr, int tamanho){
    for(int i = 1; i<=tamanho; i++){
        cout << "Elemento "<< i << ": "<< arr[i]<< endl;
    }
    return 0;
}

int main(){
    int tamanho;

    cout << "Insira o tamanho do array: ";
    cin >> tamanho;

    int* arr = new int[tamanho];

    for(int i=1; i<=tamanho;i++){
        cout << "Insira um numero: ";
        cin >> arr[i];
    }

    cout << "\nElementos do array:\n";
    elementosArray(arr, tamanho);

    delete[] arr;
    return 0;
}