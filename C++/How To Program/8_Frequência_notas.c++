// Programa realiza registro de notas pré-estabelecidas de 1 à 5
// Foi trabalhado Array e o começo de questões de prevenção de erros/valores inválidos

#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::setw;

int total, nota = 6;
int array[6];

int rep();

void registrador() // Função que realiza o registro
{
    while (nota != 0)
    {
        cout << "Insira nota" << endl;
        cin >> nota;
        
        switch (nota)
        {
        case 0:
            break;

        case 1:
            ++array[1];
            total++;
            break;

        case 2:
            ++array[2];
            total++;
            break;

        case 3:
            ++array[3];
            total++;
            break;

        case 4:
            ++array[4];
            total++;
            break;

        case 5:
            ++array[5];
            total++;
            break;

        
        default:
            cout << "Insira um valor válido!" << endl;
            registrador();
            break;
        }
    }

}

int main () // Realiza distribuição de operações
{
    cout << "Programa voltado para contar notas de 1 à 5" << endl;
    
    registrador();

    cout << setw(4) << "Nota" << setw(25) << "Frequência da nota" << endl;
    for (int i = 1; i <= 5; i++)
    {
        cout << setw(4) << i << setw(15) << array[i] << endl;
    }

    cout << "Número de notas: " << total << endl;

    cout << "Deseja repetir? 1 para sim e 0 para não" << endl;
    rep();

    return 0;
}

int rep() // Função de repetição do algoritmo;
{
    int r;

    cin >> r;

    switch (r)
    {
    case 0:
        break;

    case 1:
        nota = 6; // Resets de variáveis;
        total = 0;

        for(int j = 0; j <= 5; j++)
        {
        array[j] = 0;  
        }

        main();
        break;

    default:
        cout << "Insira um valor válido!" << endl;
        rep();
        break;
    }
    
    return 0;
}