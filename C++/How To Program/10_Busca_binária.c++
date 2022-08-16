#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int crescente(int[], int, int); // Ordena valores na lista
void busca(int[], int); // Realiza busca binária
void operacao(int[], int, int, int); // ^
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
    /*int quant0 = quant2;*/

    cout << "\nValor de quant0: " << quant0;

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
/*for(int k = 0; k < quant0; k++)
            {
                cout << " " << array0[k] << "";
            }*/

    return array0[quant0];
}
void busca(int array1[], int quant1)
{
    int x;

    cout << "Qual valor deseja encontrar?" << endl;
    cin >> x;

    operacao(array1, quant1, x, 0);

}

void operacao(int array2[], int quant2, int a, int z = 0)
{
    if(quant2 % 2 == 0)
    {
        z = quant2 / 2;

    }else
        {
            z = (quant2 - 1) / 2;
        }
    
    if (z != 0 && z < quant2)
    {
        if(array2[z] == a)
        {
            cout << "O valor '" << a << "' " << "Está na lista\nDeseja buscar novo valor?";
            if (rep0() == true)
            {
                busca(array2, quant2);
            }
                

        }else if (array2[z] < a)
            {
                z *= 3;

                operacao(array2, quant2, a, z);

            }else
                {
                    operacao(array2, quant2, a, z);
                }
            
    cout << "O valor' " << a << "' Não está na função\nDeseja procurar outro valor? 1 - Sim 0 - Não" << endl;
        if(rep0() == true)
        {
            busca(array2, quant2);
        }
    }
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