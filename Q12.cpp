#include <iostream>
#include <algorithm>

using namespace std;

bool crescente(int a, int b) { return a < b; }
bool decrescente(int a, int b) { return a > b; }

void ordenar(int *array, int size, bool (*comp)(int, int))
{
    sort(array, array + size, comp);
}

int main()
{
    int size;

    cout << "Digite o tamanho do array: ";
    cin >> size;

    int *arr = new int[size];

    cout << "Digite os elementos do array:\n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int escolha;

    cout << "Escolha o tipo de ordenação:\n";
    cout << "1. Crescente\n";
    cout << "2. Decrescente\n";
    cin >> escolha;

    if (escolha == 1)
    {
        ordenar(arr, size, crescente);
    }
    else if (escolha == 2)
    {
        ordenar(arr, size, decrescente);
        cout << "Array ordenado em ordem decrescente: " << endl;
    }else{
        cout << "Escolha inválida!" << endl;
        delete[] arr;
        return 1;
    }

    cout << "Array ordenado: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;
    return 0;
}