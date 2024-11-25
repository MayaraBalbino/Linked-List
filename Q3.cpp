#include <iostream>
#include <iomanip>
using namespace std;

float media(float* arr, int n){
    float soma=0;
    float media=0;

    for(int i=1;i<=n;i++){
        soma+=arr[i];
    }
    media = soma/n;
    return media;
}

int main(){
    int qtdNotas;

    cout << "Quantas notas voce deseja inserir? ";
    cin >> qtdNotas;

    float* arr = new float[qtdNotas];

    cout << "Digite suas notas abaixo:\n";
    for(int i=1;i<=qtdNotas;i++){
        cout << "Notas " << i << ": ";
        cin >> arr[i];
        
    }
    
    cout << "### MEDIA DAS NOTAS: " << fixed << setprecision(2) << media(arr, qtdNotas) << " ###\n";

    delete[] arr;
    return 0;
}