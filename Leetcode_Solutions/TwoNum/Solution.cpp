#include <vector>
#include <utility>    // Para std::pair
#include <algorithm>  // Para std::sort
#include <iostream>


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {


    std::vector<std::pair<int, int>> indicado = ordenar(nums);
    std::vector<int> resultado = Somar(indicado, target);
    return resultado;
    }


    vector<pair<int, int>> ordenar(vector<int> nums){
        vector<pair<int, int>> indicado;
        for (int i = 0; i < nums.size(); ++i) {
        indicado.push_back({nums[i], i});
        }
         std::sort(indicado.begin(), indicado.end());  
         return indicado;
    }


    vector<int> Somar (vector<pair<int, int>> indicado, int target){
        int inicio = 0;
        int fim = indicado.size() - 1;


        while (inicio < fim){
        int soma = indicado[inicio].first + indicado[fim].first;


            if (soma == target)  {
            return {indicado[inicio].second, indicado[fim].second};
            }
            else if (soma < target) {
             inicio ++;  
            }
            else{
             fim --;
            }  
        }
        return {};
    }



