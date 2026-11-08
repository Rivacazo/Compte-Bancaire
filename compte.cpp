#include "compte.h"
#include <iostream>


Compte_Bancaire::Compte_Bancaire(int id_compte, client c, int solde){
    id_compte_ = id_compte;
    client_ = c;
    solde_ = solde;
}

int Compte_Bancaire::solde(){
    return solde_;
}

bool Compte_Bancaire::retrait(int montant){
    if ((montant>0) && (montant<solde_)){
        solde_ -= montant;
        return true;
    }
    else{
        return false;
    }
}

bool Compte_Bancaire::credit(int montant){
    if (montant>0){
        solde_ += montant;
        return true;
    }
    else{
        return false;
    }
}

bool Compte_Bancaire::transfert(Compte_Bancaire& compte_dest, int montant){
    if (retrait(montant)){
        compte_dest.credit(montant);
        return true;
    }
    else{
        return false;
    }
}