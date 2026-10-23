#ifndef CLIENT_H
#define CLIENT_H
#include <string>



class Client{

    public:
        bool mise_a_jour_identite(std::string nom_client,
                                    std::string prenom_client);
        bool mise_a_jour_email(std::string email);
        std::string affichage_identite();
        int affichage_solde() const; // pourquoi const

    private: 
        int id_client_ ;
        int solde_ ;
        std::string nom_client_ ;
        std::string prenom_client_ ;
        std::string email_;
        std::string tel_ ;
        std::string adresse_ ;
}

// difference netre fonctions et methodes