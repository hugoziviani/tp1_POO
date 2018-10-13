#include <iostream>
#include <fstream>
#include "Livro.h"
using namespace std;


int main() {
    string DIR  = "/Users/hz/CLionProjects/tp1-POO/Livros/livro";
    ifstream arqin; // ler de arquivos
    ofstream arqout; //escrever em arquivos

    int i = 2;
    string nomeArq = DIR + to_string(i);
    try {
        arqin.open(nomeArq);
        if(!arqin){
            throw "PAU no arquivo";
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

    titulos.clear();

    cout<<book;



    return 0;
}