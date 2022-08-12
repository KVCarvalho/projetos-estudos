// Programa para tratar de função recursiva.
// Na função recursiva a função não finaliza para começar outra ela apenas a invoca novamente 
// 'em branco' com os novos parâmetros e em outro espaço da memória.

#include <iostream>

using std::cout;
using std::cin;
using std::ends;
 
unsigned long fibonaci (unsigned long);

int main()
{
    unsigned long result, number;
    int rep;

    cout << "Entre um valor inteiro: ";
    cin >> number;

    result = fibonaci(number);

    cout << "Fibonacci(" << number << ") = " << result << ends;

    cout << "\nDeseja repetir? 1 para sim, 0 pra finalizar\n";
    cin >> rep;

    if(rep == 1) 
    main();

    return 0;
}

unsigned long fibonaci( unsigned long n)
{
    if (n == 0 || n == 1)
        return n;
        else
        return fibonaci(n - 1) + fibonaci(n - 2);// Não sai da função, mas chama ela novamente         
}