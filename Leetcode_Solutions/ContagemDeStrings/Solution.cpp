#include <iostream>
#include <string>
#include <vector>
#include <utility>


using namespace std;


class Solution {
public:


    vector<pair<char, int>> separacaoblocos(string word){
        vector<pair<char, int>> blocos;


            for (int i = 0; i < word.length();){
                char caractere_base = word[i];
                int bloco = 0;
                while(i < word.length() && word[i] == caractere_base){
                    bloco ++;
                    i++;
                }
                blocos.push_back({caractere_base, bloco});  
            }
            return blocos;
    }


    int possibleStringCount(string word) {
     vector<pair<char, int>> blocos = separacaoblocos(word);
        int possibilidade = 1;


        for( const auto& par : blocos){
            if( par.second > 1) {
              possibilidade += (par.second - 1 );
            }
        }
        return possibilidade;
    }
};

