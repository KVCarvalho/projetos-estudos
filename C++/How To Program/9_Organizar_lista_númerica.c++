// Programa voltado para a prática relacionada à manipulação de Arrays.
// Usado também função recursiva.
// Realiza a ordenação de uma quantidade de valores pré-determinada pelo usuário.
// Tópicos extras:
// Organização de funções, sobre possível melhor organização destas no decorrer do programa

#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::setw;

int quant;

void padrao(int[], int);
void rep();
int crescente(int, int[], int);
int decrescente(int, int[], int);

int crescente(int j, int arrayc[],int elem) // Operação crescente
{
    if(arrayc[j] < arrayc[j-1] && j != 0)
           {
            int x = arrayc[j-1];
            arrayc[j-1] = arrayc[j];
            arrayc[j] = x;

            crescente(j-1, arrayc, elem);
           }

    return arrayc[elem];      
}

int decrescente(int j, int arrayf[],int elem) // Operação decrescente
{
    if(arrayf[j] > arrayf[j-1] && j != 0)
           {
            int x = arrayf[j-1];
            arrayf[j-1] = arrayf[j];
            arrayf[j] = x;

            decrescente(j-1, arrayf, elem);
           }

    return arrayf[elem];      
}

int main()
{
    int array[1000];

    cout << "Quantos valores serão usados?" << endl;
    cin >> quant;
    
    cout << "Insira os valores consecutivamente" << endl; // Colocando valores na array
    for(int i = 0; i < quant; i++)
    {
        cin >> array[i];
    }

    cout << "Qual padrão será utilizado? Crescente:1 - Decrescente: 0" << endl;
    padrao(array, quant); // Função que define a ordem e executa função principal
    
    cout << "Deseja repetir o programa? 0-Não 1-Sim" << endl;
    rep(); // Repetição

    return 0;
}

void padrao(int arrayz[], int quant1) 
{   
    int pad1;

    cin >> pad1;

    switch (pad1)
    {
    case 1:

        for(int i = 0; i < quant1; i++)
        {   
            if(i >= 1)
            {
                arrayz[quant1] = crescente(i, arrayz, quant1);
            }
        }

        cout << "A ordem crescente da lista é" << endl;

        for(int k = 0; k < quant1; k++)
        {
            cout << arrayz[k] << endl;
        }

        break;

    case 0:
        
    for(int h = 0; h < quant1; h++)
    {   
        if(h >= 1)
        {
            arrayz[quant1] = decrescente(h, arrayz, quant1);
        }
    }

        cout << "A ordem decrescente da lista é" << endl;

        for(int k = 0; k < quant1; k++)
        {
            cout << arrayz[k] << endl;
        }       
        
        break;

    default:
        cout << "Escolha uma opção válida!" << endl;

        padrao(arrayz, quant1);

        break;
    }
}

void rep() 
{
    int r;

    cin >> r;

    switch (r)
    {
    case 1:
        main();
        break;

    case 0:
        break;
    
    default:
        cout << "Insira um valor válido!" << endl;
        rep();
        break;
    }
}