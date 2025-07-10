

class Solution {
public:
    int romanToInt(string s) {
        
        std::map<char, int> simbolo_numero;
        simbolo_numero['I'] = 1;
        simbolo_numero['V'] = 5;
        simbolo_numero['X'] = 10;
        simbolo_numero['L'] = 50;
        simbolo_numero['C'] = 100;
        simbolo_numero['D'] = 500;
        simbolo_numero['M'] = 1000;

        int resultado = 0;

        for(int i = 0; i < s.length(); ++i){
            char SimboloAtual = s[i];
            int NumeroAtual = simbolo_numero[SimboloAtual];
            
            if (i + 1 < s.length() && NumeroAtual < simbolo_numero[s[i+1]]) {
            resultado -= NumeroAtual; 
            } else {
            resultado += NumeroAtual;     
            }
    }
    return resultado;
    }
};