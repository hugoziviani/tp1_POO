//
// Created by hz on 13/10/2018.
//

#ifndef TP1_POO_L_IMPRESSO_H
#define TP1_POO_L_IMPRESSO_H

#include <iostream>
#include <vector>
#include "Livro.h"

using namespace std;

class L_Impresso : Livro {

    vector <string> livrarias;
    int colunas;

    //get e set

public:
    const vector<string> &getLivrarias() const;

    void setLivrarias(const vector<string> &livrarias);

    int getColunas() const;

    void setColunas(int colunas);


};


#endif //TP1_POO_L_IMPRESSO_H
