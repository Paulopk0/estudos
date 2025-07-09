
#include <iostream>

using namespace std;

    class Livro {
        public:
        string titulo;
        string autor;
        int anopublicado;
        bool disponivel = true;
        
        Livro (string titulo, string autor, int anopublicado){
            this->titulo = titulo;
            this->autor = autor;
            this->anopublicado = anopublicado;
        }
        
        void exibirDetalhes(){
          cout << "titulo = " << this->titulo << endl;
          cout << "autor = " << this->autor << endl;
          cout << "ano de publicação = " << this->anopublicado << endl;
          cout << "disponivel? " << (this->disponivel ? "Sim" : "Não") << endl;
        }
        
        void emprestar(){
            if (this->disponivel){
                this->disponivel = false;
                cout << "Livro '" << this->titulo << "' emprestado com sucesso!" << endl;
            } else {
                cout << "Livro '" << this->titulo << "' nao esta disponivel para emprestimo." << endl;
            }
        }
        
        
        void devolver(){
            if (this->disponivel == true){
               cout << "o Livro : " << this->titulo << " ja ta com nos paezao"; 
            }else{
                cout << "o Livro : " << this->titulo << " devolvido" << endl;
            disponivel = true;
            };
            
        }
    };
    
   int main()
{
    
    Livro l1 ("felicidade" , "serotonina" , 1);
    Livro l2 ("alegria" , "ocitocina" , 2);
    Livro l3 ("euforia" , "adrenalina" , 3);
    
    l1.exibirDetalhes();
    l2.exibirDetalhes();
    l3.exibirDetalhes();
    
    l1.emprestar();
    l1.exibirDetalhes();
    
    l2.emprestar();
    l2.emprestar();
    
    l1.devolver();
    l1.exibirDetalhes();
    return 0;
}

