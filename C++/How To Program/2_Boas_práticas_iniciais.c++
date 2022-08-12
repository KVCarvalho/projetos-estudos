// Tópicos:
// Nomeclatura auto-explicativa de variáveis e espaçoes para destaques de operadores e variáveis
#include <iostream>

int main()
{
    int var1, var2, res; // nomeclatura de variáveis auto-explicativa e espaço depois de cada vírgula
    // espaço entre as declarações e os processos
    std::cout << "Entre o primeiro valor\n";
    std::cin >> var1;
    std::cout << "Entre o segundo valor\n";
    std::cin >> var2;
    res = var1 + var2;// destaque aos operadores
    std::cout << "O resultado é" << res << std::ends;
    //espaço no retorno
    return 0;

}