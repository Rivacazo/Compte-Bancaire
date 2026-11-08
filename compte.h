#ifndef COMPTE_H
#define COMPTE_H
#include <string>
#include "client.h"

class Compte_Bancaire{
    private:
        int id_compte_;
        Client client_;
        int solde_;
        
    public:
        Compte_Bancaire(int id_compte, Client c, int solde);
        bool retrait(int montant);
        bool credit(int montant);
        bool transfert(Compte_Bancaire& compte_dest, int montant);
        int solde() const;
};

#endif