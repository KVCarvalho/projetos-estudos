// Programa simples para desenvolver a iniciação e declaração de uma array

#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;
using std::setw;

int main()
{
    // Bloco de declaração e inicialização de array
    // int array[10];
    int array[] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90};
    cout << "Posição" << setw(12) << "Valor" << endl;

    for (int j = 0; j < 11; j++)
    {
        cout << setw(4) << j << setw(13) << array[j] << endl;
    }    

    return 0;
}