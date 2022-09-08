// Programa se trata de um aplicativo que gera randomicamente um valor(ou seja, um dado), com base
// em um limite proposto pelo usurário.
// Também possui a possibilidade do usuário tentar um valor randômico.
// Meramente didáditco e numa tentativa de criar algo do 0.
// Pontos extras:
// Nessidade de criar um pequeno timing para não ocorrer múltiplas entradas simultâneas.

#include <iostream>
#include <string>

using namespace std;

void dado( void ){ // Algoritmo referente ao dado

    string resposta = "D";

    cout << "Dado de quantos lados?" << endl;
    int x = 0;
    cin >> x;

    cout << "Deseja rodar o dado? Enter para rodar o dado e 'N' para não" << endl;
    while (resposta != "N" && resposta != "n")
    {

        cout << "\n";
        getline(cin, resposta);

        if (resposta == "" && resposta != "D")
        {   
            srand(time(0));
            cout << 1 + rand() % x;
        } else if (resposta != "n" && resposta != "N")
        {
            cout << "Entrada inválida" << endl;
        }
    }
}

void adivinha( void ){ // Algoritmo referente o jogo de adivinhação 

    int y, resposta = 3, x;

    cout << "Qual limite de valores?" << endl;
    cin >> x;

    srand(time(0));

    y = 1 + rand() % x;

    cout << "Dê seu chute. Chute '0' para encerrar." << endl;
    while (resposta != 0)
    {
        cin >> resposta;

        switch (resposta)
        {
        case 0:
            cout << "O valor era: " << y << "." << endl;
            break;
        
        default:
            if (y == resposta)
            {
                cout << "Acertou! O valor era: " << y << endl;
                resposta = 0;

            } else
            {
                cout << "Errou." << endl;
            }
                break;
            }  
    }
}

int main(){

    string jogo = "F";

    while (jogo != "S" && jogo != "s"){

        cout << "D para jogar os dados e A para adivinhar.\nS para sair" << endl;
        getline(cin, jogo);

        if (jogo == "D" || jogo == "d")
        {
            dado();

        } else if (jogo == "A" || jogo == "a"){
            adivinha();

        } else if (jogo != "S" && jogo != "s"){
            cout << "Opção inválida" << endl;
        }
    }

    cout << "Fim do programa";
    return 0;
}
