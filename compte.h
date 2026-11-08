#ifndef COMPTE_H
#define COMPTE_H
#include <string>

class Compte_Bancaire{
    private:
        int id_compte_;
        client client_;
        int solde_;
        
    public:
        Compte_Bancaire(int id_compte, client c, int solde){
            id_compte_ = id_compte;
            client_ = c;
            solde_ = solde;
            bool retrait(int montant);
            bool credit(int montant);
            bool transfert(Compte_Bancaire& compte_dest, int montant);
            int solde() const;
        };

}