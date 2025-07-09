

#include <iostream>

using namespace std;
 class estacionamento{
     public:
     int vagasTotais;
     int vagasOcupadas = 0;
    
    estacionamento(int vagasTotais, int vagasOcupadas){
        this->vagasTotais = vagasTotais;
        this->vagasOcupadas = vagasOcupadas;
    }
    
    void entrarCarro(){
        if (vagasOcupadas < vagasTotais){
            vagasOcupadas ++;
            cout << "carro estacionado" << endl;
        }else {
            cout << "estacionamento cheio" << endl;
        }
    }
    void sairCarro(){
        if (vagasOcupadas != 0){
            vagasOcupadas --;
            cout << "vaga livre" << endl;
        }else {
            cout << "nao ha carros" << endl;
        }
    }
    void verificarDisponibilidade(){
        cout << "Vagas disponiveis : " << vagasOcupadas << (vagasTotais - vagasOcupadas) << endl;
    }
    
     
 };
   int main()
{
    estacionamento e ( 5, 0 );
    e.entrarCarro();
    e.entrarCarro();
    e.entrarCarro();
    e.sairCarro();
    e.verificarDisponibilidade();
    e.entrarCarro();
    e.entrarCarro();
    e.entrarCarro();
    e.entrarCarro();
    e.entrarCarro();
    e.verificarDisponibilidade();
    return 0;
}
