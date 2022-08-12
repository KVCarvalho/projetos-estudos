// Programa utilizado para praticar e entender os parâmetros de referência, função inline
// e chamada de função, proporcionando um loop do programa.
// Tópicos:
// Como comentar e funções referência

#include <iostream>

using std::cout;
using std::cin;
using std::ends;

inline int conta (int val) {return val *= val;} // Funções para teste de referência
inline void contar (int &val) {val *= val;} /* Void pois a função referência não retorna
                                              valor, altera diretamente na variável inicial */

int main()
{
int x, ref, rep;

cout << "Digite o valor a ser elevado: ";
cin >> x;
cout << "Deseja aplicar parâmetro referência? 1 para sim, 0 para não: ";
cin >> ref;

if(ref == 1)
{
    cout << "O número é:" << x << "\n" << ends;
    contar(x);
    cout << "O número é depois da conta:" << x << "\n" << ends;

}
    else
    {
        cout << "O número é:" << x << "\n" <<ends;
        cout << "O resultado foi:" << conta(x) << ends;
        cout << "\nO número é, depois da conta:" << x << ends;
    }

cout << "\nDeseja repetir? 1 para sim, 0 pra finalizar\n";
cin >> rep;

if(rep == 1) 
    main();

return 0;
}