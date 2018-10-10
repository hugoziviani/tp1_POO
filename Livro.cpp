//
// Created by hz on 09/10/2018.
//

#include "Livro.h"

Livro::Livro(const vector<string> &escritores, const string &titulo, const vector<string> &capitulos, int anoPublicacao,
             const string &idiomaOriginal, const vector<string> &palavrasChave)
             : escritores(escritores),
             titulo(titulo),
             capitulos(capitulos),
             anoPublicacao(anoPublicacao),
             idiomaOriginal(idiomaOriginal),
             palavrasChave(palavrasChave) {}

const vector<string> &Livro::getEscritores() const {
    return escritores;
}
void Livro::setEscritores(const vector<string> &escritores) {
    Livro::escritores = escritores;
}

const string &Livro::getTitulo() const {
    return titulo;
}
void Livro::setTitulo(const string &titulo) {
    Livro::titulo = titulo;
}

const vector<string> &Livro::getCapitulos() const {
    return capitulos;
}
void Livro::setCapitulos(const vector<string> &capitulos) {
    Livro::capitulos = capitulos;
}

int Livro::getAnoPublicacao() const {
    return anoPublicacao;
}
void Livro::setAnoPublicacao(int anoPublicacao) {
    Livro::anoPublicacao = anoPublicacao;
}

const string &Livro::getIdiomaOriginal() const {
    return idiomaOriginal;
}
void Livro::setIdiomaOriginal(const string &idiomaOriginal) {
    Livro::idiomaOriginal = idiomaOriginal;
}

const vector<string> &Livro::getPalavrasChave() const {
    return palavrasChave;
}
void Livro::setPalavrasChave(const vector<string> &palavrasChave) {
    Livro::palavrasChave = palavrasChave;
}
