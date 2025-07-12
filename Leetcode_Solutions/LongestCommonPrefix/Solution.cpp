class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
       int menorzinha = strs[0].length();
       string menorS = strs[0];

        for(int i = 1; i < strs.size(); ++i){
        if (menorzinha > strs[i].length()){
            menorzinha = strs[i].length();
            menorS = strs[i];
        }
    }

    string resultado;

    for(int i = 0; i < menorzinha; ++i){ // percorrer a Menor String
        char CharAtual = menorS[i]; // Caractere da 'menorS' na posição 'i'
        
        for(int j = 0; j < strs.size(); ++j){ // percorre o vetor 
           if (strs[j][i] != CharAtual){
            return resultado;
           }
    }
    resultado += CharAtual;
    }
     return resultado;

 }
};