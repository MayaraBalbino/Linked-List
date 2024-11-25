#include <iostream>
using namespace std;

int elementosArray(int* arr, int tamanho){
    for(int i = 1; i<=tamanho; i++){
        cout << "Elemento "<< i << ": "<< arr[i]<< endl;
    }
    return 0;
}

int main(){
    int n;

    cout << "Insira o tamanho do array: ";
    cin >> n;

    int* arr = new int[n];

    for(int i=1; i<=n;i++){
        cout << "Elemento na posição " << i << " : ";
        cin >> arr[i];
    }

    cout << "Elementos do array: \n";
    elementosArray(arr, n);

    delete[] arr;
    return 0;
}