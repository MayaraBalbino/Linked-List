#include <iostream>
using namespace std;

int num_digitos(int number)
{
    int contador = 0;

    if (number == 0)
    {
        contador = 1;
    }
    else
    {
        while (number > 0)
        {
            number = number / 10;
            contador++;
        }
    }

    return contador;
}

int main()
{
    int num = 0;
    cout << "Insira um numero: ";
    cin >> num;
    
    cout << "O numero de digitos e " << num_digitos(num) << endl;
    return 0;
}