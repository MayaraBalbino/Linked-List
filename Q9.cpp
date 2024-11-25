#include <iostream>

using namespace std;

int soma(int n1, int n2){
    return n1+n2;
}

int multiplica(int n1, int n2){
    return n1*n2;
}

int main(){
    int (*funcPtr)(int, int);

    int x = 0, y = 0;
    cout << "Insira um numero: ";
    cin >> x;
    cout << "Insira outro numero: ";
    cin >> y;

    funcPtr = &soma;
    cout <<  x << " + " << y << " = " << funcPtr(x, y) << endl;

    funcPtr = &multiplica;
    cout << x << " x " << y << " = " << funcPtr(x, y) << endl;

    return 0;
}