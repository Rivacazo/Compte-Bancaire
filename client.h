#ifndef CLIENT_H
#define CLIENT_H
#include <string>



class Client{

    public:
        bool mise_a_jour_identite();
        bool mise_a_jour_email();
        void affichage_identite() const;
        int affichage_solde() const; // pourquoi const ; le const signifie que cette méthode ne modifiera aucun attribut de Client
        Client(int id_client, int solde, std::string nom_client, std::string prenom_client, std::string email, std::string tel, std::string adresse);

    private: 
        int id_client_ ;
        int solde_ ;
        std::string nom_client_ ;
        std::string prenom_client_ ;
        std::string email_;
        std::string tel_ ;
        std::string adresse_ ;
};

#endif

// difference entre fonctions et methodes