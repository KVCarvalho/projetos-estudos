// Programa voltado para uma geração de senha com base em uma palavra digitada pelo usuário.
// A palavra será dividida em duas partes: a primeira será composta por letras, na qual será tornada maiúscula a palavra que menos
// repetir, se ouver alguma diferença na repetição das letras(se todas aparecem numa mesma quantidade, não há alteração);
// a segunda parte é composta por números, que serão definidos com base em uma conta simples matemática que usa a ordem no
// alfabeto como parâmetros

// Foram trabalhados:
// Ponteiros
// Tratamento de arrays e strings
// Métodos de uso de suas funções

#include <iostream>
#include <string>
#include <cstdlib>


using namespace std;

const string alfabeto = " abcdefghijklmnopqrstuvwxyz";

struct result {
    char first;
    int second;
};

string segunda_parte(const string palavra0, int p0, int s0){
    char array[s0]; // array que salvará a segunda parte da palavra a ser trabalhada
    int letra[s0], un = 0; // indicador de posição númerica no alfabeto
    string palavraf = "";

    for (int i = 0; i < s0; i++) // registro de cada endereço em seu respectivo espaço, processa a codificação para números
    {
        array[i] = palavra0[p0+i];
        letra[i] = alfabeto.find(array[i]);

        //cout << "\nLetra: " << array[i] << " valor: " << letra[i];
 
        if (letra[i] <= 9) // tratamento de números maiores que 9
        {
            letra[i]++;

            if (letra[i] == 10) // tratamento específico para letra i(i = 9)
            {
                letra[i] = 2;
            }
            
        } else
        {
            while (letra[i] > 9) 
            {   
                un = 0;

                while (letra[i] % 10 != 0) // retira a parte das unidades e aloca na variável 'un'
                {
                    un++;
                    letra[i]--;
                }
                
                letra[i] = un + (letra[i] / 10) + 1; // dezenas = letra[i] / 10

            }
        }
        

        palavraf += to_string(letra[i]);        
    }  

    return palavraf;
}

int *crescente(int *plet0[], int p1, int e = 1) // ordena indíces em ordem crescente
{
    switch (e)
    {
    case 0:
        // tratamento de caso 0
        break;
    
    default:
        for (e = 1; e < p1; e++)
        {
            if (*plet0[e] < *plet0[e - 1])
            {
                int *f = plet0[e];
                plet0[e] = plet0[e-1];
                plet0[e - 1] = f;

                crescente(plet0, p1, e - 1);
            }           
        }    
        break;
    }

    return plet0[p1];
}

string primeira_parte(const string palavra0, int p0) // processa a primeira parte da palavra
{

    char array[p0]; // criação de variável para trabalho de criptografia da primeira parte
    int letra[p0], *plet[p0]; // letra: responsável por contar quantas vezes se repete a palavra; plet: armazena endereços de letra

    for (int a = 0; a < p0; a++) // registro de cada endereço em seu respectivo espaço
    {
        plet[a] = &letra[a];
    }
    
    for (int i = 0; i < p0; i++) 
    {
        array[i] = palavra0[i];
    }
    
    for (int b = 0; b < p0; b++) // conta quantas vezes cada letra aparece
    {
        for (int c = 0; c < p0; c++) // b: define letra na array a ser procurada na palavra; c: define posição a ser procurada
        {
           int d = palavra0.find(array[b], c);
           if (d != string::npos)
           {
            c = d;
            letra[b]++;
           }
        }   
    }

    plet[p0] = crescente(plet, p0); // ordena indíces em ordem crescente

    if (*plet[0] < *plet[p0 - 1]) // seta "marcador" de palavras(0) para saber quais serão maiúsculas
    {
        for (int c = 1; c < p0; c++)
        {
            if (*plet[c] == *plet[0])
            {
                *plet[c] = 0;
            }   
        }
        *plet[0] = 0;
    }

    for (int d = 0; d < p0; d++)
    {
        if (letra[d] == 0)
        {
            array[d] = toupper(array[d]);
        }
    }   
    
    return array;   
}

int main(){
    int fim = 0;
    string user = "", resultado = ""; // user: entrada do usuário; resultado: palavra criptografada

    cout << "Digite a palavra a referência" << endl;
    getline(cin, user);
    const string palavra = user; // tornando a palavra digitada constante para não perder no
    //                              decorrer do programa
    
    int p = 0, s = 0; // p: primeira parte da palavra; s: segunda parte
    switch (palavra.length() % 2) { // Divide a palavra em dois e coloca em variáveis
        case 0:{
            p = palavra.length() / 2;
            s = p;
        }
            break;
        case 1:{
            s = (palavra.length()+1) / 2;
            p = s--;
        }
            break;
    }
    result pass[s];

    resultado = primeira_parte(palavra, p);

    for (int i = 0; i < p; i++)
    {
        pass[i].first = resultado[i];
    }

    resultado = segunda_parte(palavra, p, s);

    for (int a = 0; a < s; a++)
    {
        pass[a].second = resultado[a];
    }

    cout << "Sua senha é: " << endl;
    
    for (int b = 0; b < p; b++)
    {
        cout << pass[b].first;
    }
    for (int c = 0; c < s; c++)
    {
        cout << pass[c].second;
    }


    system("pause");   
    
    return 0;
}

/*for (int i = 0; i < s0; i++)
    {
        cout << array[i];
    }

for (int i = 0; i < s0; i++)
    {
        cout << "Letra: " << array[i] << " aparece: " << letra[i] << endl;
    }
    for (int i = 0; i < s0; i++)
    {   
        cout << "\nPosição: " << i << "\nEndereço: " << &letra[i] << " valor: " << letra[i] << "\nPlet: " << plet[i] << " valor: " << *plet[i] << endl;
    }*/