#include "client.h"
#include <iostream>


Client::Client(int id_client, int solde, std::string nom_client, 
    std::string prenom_client, std::string email, std::string tel, 
    std::string adresse) : id_client_(id_client), solde_(solde), nom_client_(nom_client), prenom_client_(prenom_client), email_(email), tel_(tel), adresse_(adresse)
    {};

bool Client::mise_a_jour_identite(){
    std::cout<< "Nouveau nom : ";
    std::cin>> nom_client_;
    
    std::cout<< "Nouveau prénom : ";
    std::cin>> prenom_client_;

    return true;
}

bool Client::mise_a_jour_email(){
    std::cout<< "Nouvel email : ";
    std::cin>> email_;

    return true;
}

void Client::affichage_identite() const{
    std::cout<< "----INFORMATIONS CLIENT----" <<std::endl;
    std::cout<< "Identifiant client : " <<id_client_ <<std::endl;
    std::cout<< "Prénom : " <<prenom_client_ <<std::endl;
    std::cout<< "Nom : " <<nom_client_ <<std::endl;
    std::cout<< "Email: " <<email_ <<std::endl;
    std::cout<< "Numéro de téléphone : " <<tel_ <<std::endl;
    std::cout<< "Adresse : " <<adresse_ <<std::endl;
}

int Client::affichage_solde() const{
    return solde_;
}