#include <iostream>
#include <string>
#include <unordered_map>
#include <utility>

using namespace std;

unordered_map<char, int> ContadorDeRepeticao(string word){
    unordered_map<char, int> Repetidos;
    
    for (char c : word){ // percorrendo a String
        Repetidos[c]++; // iterando as que se repetem
    }
        return Repetidos;
    }
    
char PrimeiroSolteiro( const unordered_map<char, int>& Repetidos, const string& word){
    for (char c : word){ // percorrendo novamente a String
        if (Repetidos.at(c) == 1){ // procurando no map a primeira que for unica usar o .at por conta do const
        return c; // retornando o Char que for
        }
    }
    char nada = '!'; // caso nao aja, retorna !
    return nada;
}  

int main() {
    string word = "amapama";
    unordered_map<char, int> frequencias = ContadorDeRepeticao(word); 
    char resultado = PrimeiroSolteiro(frequencias, word);
    cout << "O primeiro caractere unico -> " << resultado << endl;
    return 0;
}