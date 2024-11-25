#include <iostream>
#include <utility>
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

void numeroParaArray(int number, int *arr, int length)
{
    int index = length - 1;
    while (number > 0)
    {
        arr[index] = number % 10;
        number /= 10;
        index--;
    }
}

//Não compreendi a necessidade da função reverse
/*void reverse(pair<int, int> arr[], int length)
{
    int begin = 0;
    int end = length - 1;

    while (begin < end)
    {
        pair<int, int> reverse = arr[begin];
        arr[begin] = arr[end];
        arr[end] = reverse;
        begin++;
        end--;
    }
}*/

int main()
{
    int num = 0;

    cout << "Insira um numero: ";
    cin >> num;

    int length = num_digitos(num);

    int *arr = new int[length];

    pair<int *, int> resultado(arr, length);

    numeroParaArray(num, arr, length);

    cout << "( [";
    for (int i = 0; i < resultado.second; ++i)
    {
        cout << resultado.first[i];
        if (i < resultado.second - 1)
        {
            cout << ", ";
        }
    }
    cout << "], " << resultado.second << " )\n";

    
    delete[] resultado.first;

    return 0;
}