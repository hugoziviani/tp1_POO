#include <iostream>
#include <fstream>
#include "Livro.h"
using namespace std;


int main() {
    string DIR  = "Livros/";
    ifstream arqin; // ler de arquivos
    ofstream arqout; //escrever em arquivos

    int i = 2;
    string nomeArq = DIR + to_string(i);
    try {
        arqin.open(nomeArq);
        if(!arqin){
            throw "PAU no arquivo"+to_string(i);
        }



        
    }catch (const char* e){
        cerr<< e;
    }

    Livro book = Livro();

    vector <string> titulos;
    titulos.reserve(10); // pede pra reservar
    for (int j = 0; j < 10; ++j) {
        titulos.push_back("Capitulo " + to_string(j));
    }


    book.setCapitulos(titulos);
    book.setAnoPublicacao(2018);
    book.setTitulo("Olaaaaaa");

    cout<<book;







    return 0;
}