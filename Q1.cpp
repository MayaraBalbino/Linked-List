#include <iostream>
using namespace std;

int somaElementos(int* arr, int tamanho){
    int soma=0;
    for(int i = 0; i<=tamanho; i++){
        soma += arr[i];
    }
    return soma;
}

int main(){
    int tamanho;

    cout << "Insira o tamanho do array: ";
    cin >> tamanho;

    int* arr = new int[tamanho];

    for(int i=0; i<=tamanho;i++){
        cout << "Insira um numero: ";
        cin >> arr[i];
    }

    cout<< "\nA soma dos elementos é " << somaElementos(arr, tamanho) << endl;

    delete[] arr;
    return 0;
}