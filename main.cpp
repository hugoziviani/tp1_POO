#include <iostream>
#include <fstream>
#include "Livro.h"
using namespace std;


int main() {
    string DIR  = "/Users/hz/CLionProjects/tp1-POO/cmake-build-debug/CMakeFiles/Livros/livro";
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


    book.setCapitulos()
    book.setAnoPublicacao(2018);
    book.setTitulo("Olaaaaaa");

    cout<<book.getTitulo();







    return 0;
}