#include <string>
#include <iostream>

using namespace std;

const string refe = "abcdefghijklmnopqrstuvwxyz";

int main(){

    string u, fim = "";
    int res[10];
    cout << "Digite a palavra" << endl;
    getline(cin, u);
    // gerando mensagem codificada
    for (int i = 0; i < u.length(); i++)
    {
        int x = refe.find(u[i]) + 1;
        res[i] = x;
        cout << res[i] << " " << x << endl;
    }
    // decodificando mensagem
    for (int j = 0; j < u.length(); j++)
    {
        char c = refe[res[j]-1];
        fim += c;

        cout << c;
    }   
    
    return 0;
}