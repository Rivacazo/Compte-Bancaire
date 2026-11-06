#include "client.h"
#include <iostream>

Client::mise_a_jour_identite(){
    std::cout<< "Nouveau nom : " <<std::endl;
    std::cin>> nom_client_;
    
    std::cout<< "Nouveau prénom : " <<std::endl;
    std::cin>> prenom_client_;

    return true;
}

Client::mise_a_jour_email(){
    std::cout<< "Nouvel email : ";
    std::cin>> email_;

    return true;
}



int main(){

    Client bt(1,250,"Bob", "Trooper", "bob.trooper@gmail.com", "0784222870", "7 avenue des moineaux");

    return 0;
} 