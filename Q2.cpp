#include <iostream>
using namespace std;

void inverteString(char str[]) {
    int inicio = 0;
    int tamanho = 0;

    
    while (str[tamanho] != '\0') {
        tamanho++;
    }
    tamanho--; 

    while (inicio < tamanho) {
        char temp = str[inicio];
        str[inicio] = str[tamanho];
        str[tamanho] = temp;
        inicio++;
        tamanho--;
    }
}

int main() {
    char str[100];
    
    cout << "Insira uma palavra: ";
    cin >> str;

    inverteString(str);
    cout << "String invertida: " << str << endl;
    return 0;
}