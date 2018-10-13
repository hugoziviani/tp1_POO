//
// Created by hz on 13/10/2018.
//

#include "L_Impresso.h"

const vector<string> &L_Impresso::getLivrarias() const {
    return livrarias;
}

void L_Impresso::setLivrarias(const vector<string> &livrarias) {
    L_Impresso::livrarias = livrarias;
}

int L_Impresso::getColunas() const {
    return colunas;
}

void L_Impresso::setColunas(int colunas) {
    L_Impresso::colunas = colunas;
}
