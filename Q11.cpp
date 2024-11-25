#include <iostream>

using namespace std;

int areaCirculo(int n){
    float pi=3.14;
    return (n*n) * pi;
}

int areaQuadrado(int n){
    return n*n;
}

int main(){
    int escolha, n;
    int (*func)(int);

    cout << "Voce deseja calcular a area do circulo ou do quadrado? (1-circulo, 2-quadrado)";
    cin >> escolha;

    if(escolha==1){
        cout << "Digite o raio do circulo: ";
        cin >> n;

        func = &areaCirculo;
        cout << "Area do círculo: " << func(n) << endl;
    }else{
        cout << "Digite o lado do quadrado: ";
        cin >> n;
        func=areaQuadrado;
        cout << "Area do quadrado: " << func(n) << endl;
    }

    return 0;
}