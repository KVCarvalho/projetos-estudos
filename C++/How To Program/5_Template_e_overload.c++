// Resultados do programa:
//  1.Entendimento melhor de funções, inclusive template e overload, como proposto.
//  2.Sinal para buscar entender melhor tipos de dados, em específico suas conversões.
// Tópicos extras:
// Organização de funções para clareza do programa, com devida separação

#include <iostream>

using std::cout;
using std::cin;
using std::ends;

int ovr(int x, int y, int z);
double ovr(double ddx, double ddy, double ddz);
char ovr( char ccx, char ccy, char ccz);


template <class T>
T maximum (T value1, T value2, T value3)
{
    T max = value1;
    
    if(max < value2)
    {
        max = value2;
    }

    if(max < value3)
    {
        max = value3;
    }

    return max;
}

int tmp (int esc) 
{
    if (esc == 0)
    {   
        int x, y, z;

        cout << "Insira três valores númericos inteiros\n" << ends;
        cin >> x >> y >> z;

        cout << "O valor máximo é:" << maximum(x, y, z) << ends;
    }

    if (esc == 1)
    {
        double dx, dy, dz;

        cout << "Insira três valores double\n" << ends;
        cin >> dx >> dy >> dz;

        cout << "O valor máximo é:" << maximum(dx, dy, dz) << ends;
    }
    
    if (esc == 2)
    {
        char cx, cy, cz;

        cout << "Insira três caracteres\n" << ends;
        cin >> cx >> cy >> cz;

        cout << "O valor máximo é:" << maximum(cx, cy, cz) << ends;
    }

    return 0;
}

int main ()
{
    int met, rep, tdado;

    cout << "Qual método quer usar? 1 para Template e 0 para Overload\n";
    cin >> met;

    if(met == 1)
    {
        cout << "Qual tipo de dado deseja processar\n";
        cin >> tdado;

        tmp(tdado);
    }
    
    if(met == 0)
    {
        int x = 0, y = 1, z = 2;
        double dx = 0.9, dy = 2.1, dz = 1.5;

        cout << "Qual tipo de dado deseja testar\n";
        cin >> tdado;

        switch (tdado){
            case 0: 

            cout << "O valor máximo é:" << ovr(x, y, z);
            break;

            case 1:
            
            cout << "O valor máximo é:" << ovr(dx, dy, dz);
            break;

            default:
            main();
            break;

        }

    }

    cout << "\nDeseja repetir? 1 Para sim e 0 para não\n";
        cin >> rep;

        if(rep == 1)
        {
            main();
        }

    return 0;
}
int ovr (int x, int y, int z)
{
    int max = x;
    
    if(max < y)
    {
        max = y;
    }

    if(max < z)
    {
        max = z;
    }

    return max;
}

double ovr (double ddx, double ddy, double ddz)
{
    double max = ddx;
    
    if(max < ddy)
    {
        max = ddy;
    }

    if(max < ddz)
    {
        max = ddz;
    }

    return max;
}

char ovr (char ccx, char ccy, char ccz)
{
    char max = ccx;
    
    if(max < ccy)
    {
        max = ccy;
    }

    if(max < ccz)
    {
        max = ccz;
    }

    return max;
}