#include <iostream>
using namespace std;

void reverse(int arr[], int length){
    int begin=0;
    int end = length-1;
    
    while(begin<end){
        int reverse = arr[begin];
        arr[begin] = arr[end];
        arr[end] = reverse;
        begin++;
        end--;
    }
}

int main(){
    int length = 0;

    cout << "Insira o tamanho do seu array: ";
    cin >> length;

    int* arr= new int[length];

    cout << "Insira os numeros: \n";
    for(int i=0;i<length;i++){
        cin >> arr[i];
    }

    reverse(arr, length);
    cout << "Array invertido: \n";
    cout << "[";
    for(int i = 0; i<length; i++){
        cout << arr[i];
        if (i < length - 1) {
            cout << ", ";
        }
    }
    cout << "]\n";

    delete[] arr;
    return 0;
}