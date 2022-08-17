// Programa que realiza busca binária em uma lista de números inteiros
// Até então o mais complexo de ser feito, parte por não entender a lógica exata por trás do tipo de busca
// Tópicos extras:
// Loops / restart de algoritmos
// Retornos de funções
// Trabalho de lógica para busca

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int crescente(int[], int, int); // Ordena valores na lista
void busca(int[], int); // Realiza busca binária
int operacao(int[], int, int); // ^
bool rep0(); // Funções de re-uso do programa
void rep(); // ^

int main()
{   
    int array[1000], quant;

    cout << "Quantos dados serão usados? ";
    cin >> quant;

    cout << "Digite os dados consecutivamente" << endl;
    for(int i = 0; i < quant; i++)
        {
            cin >> array[i];
        }

    array[quant] = crescente(array, quant, 0);

    busca(array, quant);
    
    cout << "Deseja entrar com nova lista?" << endl;
    rep();

    cout << "Fim do programa" << endl;

    return 0;
}

int crescente(int array0[], int quant0, int j = 0) // Ordena valores na lista
{   
    for(j = 0; j < quant0; j++)
    {
        if(j != 0 && array0[j] < array0[j-1])
        {
            int y = array0[j];
            array0[j] = array0[j-1];
            array0[j-1] = y;

            crescente(array0, quant0, j);
        }
    }

    return array0[quant0];
}
void busca(int array1[], int quant1)
{
    int x, res;

    cout << "Qual valor deseja encontrar?" << endl;
    cin >> x;

    res = operacao(array1, quant1, x);


    if (res != -1)
    {   
        cout << "O valor' " << x << "' está na lista na posição: " << res++ << endl;
    } else
    {
        cout << "O valor '" << x << "' não está na lista" << endl;
        }

    cout << "Deseja buscar novo valor?" << endl;
                if (rep0())
                {
                    busca(array1, quant1);
                }
}

int operacao(int array2[], int quant2, int a)
{
    int alto = quant2-1, baixo = 0, meio;
    meio = (alto + baixo) / 2;

    while (baixo <= alto)
    {
        if(array2[meio] == a)
            {   
                return meio;
                    

        }else if (array2[meio] < a)
            {   
                baixo = meio++;

            }else if(array2[meio] > a)
                {   
                    alto = meio--;
                }
    }
    return -1;      
}

bool rep0()
{
        int r;

        cin >> r;

        switch (r)
        {
        case 1:

            return true;

            break;
        
        case 0:

            return false;

            break;
        
        default:
            cout << "Insira um valor válido!" << endl;
            rep0();
            break;
        }

        return false;
}

void rep()
{   
    int re;
    
    cin >> re;
    
    switch (re)
    {
    case 1:
        main();

        break;
    
    case 0:
        break;

    default:

        cout << "Insira um valor válido" << endl;
        rep();

        break;
    }
}