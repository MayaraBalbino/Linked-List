#include <iostream>
using namespace std;


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
    int escolha, x, y;
    int (*execFunc)(int, int);


    cout << "\n### Escolha um numero para a operacao que deseja ###\n";
    cout << "1-Soma\n" << "2-Subtracao\n" << "3-Multiplicacao\n" << "4-Divisao\n";
    cin >> escolha;

    cout << "Insira um numero: ";
    cin >> x;
    cout << "Insira outro numero: ";
    cin >> y;

    if(escolha==1){
        execFunc = &soma;
        cout << "Soma: " << execFunc(x, y) << endl;
    }else if(escolha==2){
        execFunc = &subtrai;
        cout << "Subtracao: " << execFunc(x, y) << endl;
    }else if(escolha==3){
        execFunc = &multiplica;
        cout << "Multiplicaao: " << execFunc(x, y) << endl;
    }else if(escolha==4){
        execFunc = &divide;
        cout << "Divisao: " << execFunc(x, y) << endl;
    }

    return 0;
}