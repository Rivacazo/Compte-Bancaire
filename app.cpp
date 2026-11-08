#include "client.h"

int main(){

    Client bt(1,250,"Bob", "Trooper", "bob.trooper@gmail.com", "0784222870", "7 avenue des moineaux");

    bt.affichage_identite();
    bt.affichage_solde();
    bt.mise_a_jour_identite();
    bt.affichage_identite();

    return 0;
} 