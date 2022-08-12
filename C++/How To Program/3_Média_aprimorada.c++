// Código possui dois métodos para realizar a média, o primeiro, na qual se estabelece previamente a o número de elementos
// e o segundo que realiza a operação quando se insere o valor -1 na média. Segundo caso explicado entre asteriscos.
// Tópicos:
// Agrupamento de mesmo tipo de componentes/propostas do processo e separação destes por espaço
// Necessidade se setar variáveis
#include <iostream>

using std::cout; // utilizar 'using' para cortar parte do código
using std::cin;
using std::ends;

int main ()
{   
    int res,
        quant, // variável desnecessária para segunda opção
        soma,
        cont,
        valor;

    cont = 1; // setando valores para operações, *setar 0 para segunda opção*
    soma = 0; // valores não declarados previamente são indefinidos, sendo o valor já alocado na memória
    //valor = 0; // *necessário para segunda opção*

    cout << "Insira número de valores \n"; // *Insira valores, insira -1 para realizar operação*
    cin >> quant; // desnecessário para segunda opção

    while (cont <= quant) // *lógica para segundo caso: valor != -1*
        {   
            cout << "Insira valor: ";
            cin >> valor;
            //if (valor != -1) *if necessário apenas na segunda opção*
            //{
                soma = soma + valor;
                cont = cont + 1;
            //}
        }

    res = soma / quant; // *trocar quant por cont*

    cout << "A média é: " << res << ends;

    return 0;
}