//
// Created by hz on 09/10/2018.
//

#ifndef TP1_POO_LIVRO_H
#define TP1_POO_LIVRO_H


#include <iostream>
#include <vector>
using namespace std;

class Livro {
    vector <string> escritores;
    string titulo;
    vector <string> capitulos;
    int anoPublicacao;
    string idiomaOriginal;
    vector <string> palavrasChave;

public:
   Livro(const vector<string> &escritores, const string &titulo, const vector<string> &capitulos, int anoPublicacao,
          const string &idiomaOriginal, const vector<string> &palavrasChave);

   Livro():escritores(), titulo(), capitulos(), anoPublicacao(), idiomaOriginal(), palavrasChave(){}

    const vector<string> &getEscritores() const;
    void setEscritores(const vector<string> &escritores);

    const string &getTitulo() const;
    void setTitulo(const string &titulo);

    const vector<string> &getCapitulos() const;
    void setCapitulos(const vector<string> &capitulos);

    int getAnoPublicacao() const;
    void setAnoPublicacao(int anoPublicacao);

    const string &getIdiomaOriginal() const;
    void setIdiomaOriginal(const string &idiomaOriginal);

    const vector<string> &getPalavrasChave() const;
    void setPalavrasChave(const vector<string> &palavrasChave);

    friend ostream &operator<<(ostream &os, const Livro &livro);

};


#endif //TP1_POO_LIVRO_H
