#include <iostream>
using namespace std;

int operacao(int a, int b, int(*ptr)(int, int)){
    return ptr(a, b);
}

int soma(int a, int b){
    return a+b;
}

int subtrai(int a, int b){
    return a-b;
}

int multiplica(int a, int b){
    return a*b;
}

int divide(int a, int b){
    if(b!=0){
        return a/b;
    }
    
    return 0;
}

int main(){
    int x = 0, y = 0;

    cout << "Insira um numero: ";
    cin >> x;
    cout << "Insira outro numero: ";
    cin >> y;

    cout << "Soma: " << operacao(x, y, soma) << endl;
    cout << "Subtração: " << operacao(x, y, subtrai) << endl;
    cout << "Multiplicação: " << operacao(x, y, multiplica) << endl;
    cout << "Divisão: " << operacao(x, y, divide) << endl;

    return 0;
}
