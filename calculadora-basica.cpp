
#include <iostream>

class Calculadora {
   public:
   
    double somar(double a, double b){
        return a + b;
    }
    
    double subtrair(double a, double b) {
        return a - b;
    }
    
    double multiplicar(double a, double b) {
        return a * b;
    }
    
    double dividir(double a, double b) {
       if(b != 0) {
           return a / b;
       }else{
          std::cout << "dividir por zero e foda paezao";
          return 0.0;
       }
    }
    void executar(){
        double a, b;
        char op;
    
    std::cout << "Calculadora Basica" << std::endl;
    
    std::cout << "digite o primeiro numero ";
    std::cin >> a;
    
    std::cout << "digite o segundo numero ";
    std::cin >> b ;
    
    std::cout << "digite a operação (+ , - , * , /) ";
    std::cin >> op;  
    
    double resultado;
    
    switch(op){
        
        case '+':
        resultado = somar(a,b);
        std::cout << "resultado: " << a << " + " << b << " = " << resultado << std::endl;
        break;
        
         case '-':
        resultado = subtrair(a,b);
        std::cout << "resultado: " << a << " - " << b << " = " << resultado << std::endl;
        break;
        
        
         case '/':
        resultado = subtrair(a,b);
        std::cout << "resultado: " << a << " / " << b << " = " << resultado << std::endl;
        break;
        
        
         case '*':
        resultado = subtrair(a,b);
        std::cout << "resultado: " << a << " * " << b << " = " << resultado << std::endl;
        break;
        
         default:
                std::cout << "Operacao invalida! Por favor, use +, -, * ou /." << std::endl;
                break;
        }
    }
};
    
  
   int main()
{
    Calculadora mycalc;
    mycalc.executar();
    return 0; }