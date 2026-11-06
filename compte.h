#ifndef COMPTE_H
#define COMPTE_H
#include <string>

class Compte_Bancaire{
    public:
        Compte_Bancaire(int id_compte, client c, int solde);
        bool retrait(int montant);
        bool credit(int montant);
        bool transfert(Compte_dest, int montant);
        int solde() const;

    private:
        int id_compte_;
        client client_;
        int solde_;
};