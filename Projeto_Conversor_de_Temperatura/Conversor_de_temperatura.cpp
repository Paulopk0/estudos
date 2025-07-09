#include <iostream>

using namespace std;
 class ConversorTemperatura{
     public:
     
   double celsiustoFahrenheit(double celsius){
       double fahrenheit = celsius * 1.8 + 32;
       return fahrenheit;
    }
    
    double fahrenheittoCelsius(double fahrenheit){
       double celsius = (fahrenheit - 32) / 1.8;
       return celsius;
    }
    
    void executar(){
        
        double temperatura;
        char conversor;
        cout << "digite a temperatura" << endl;
        cin >> temperatura;
        cout << "digite qual conversão ('C', 'F')" << endl;
        cin >> conversor;
        
        if (conversor == 'C'){
           temperatura = fahrenheittoCelsius(temperatura);
        }else if (conversor == 'F'){
           temperatura = celsiustoFahrenheit(temperatura);
        }else{
            cout << "errou ai";
        };
        cout << temperatura;
    }
     
 };
   int main()
{
    ConversorTemperatura c;
    c.executar();
    cout << endl;
    c.executar();
    return 0;
}

