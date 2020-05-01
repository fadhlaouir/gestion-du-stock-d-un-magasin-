#include <iostream>
#include "Produit.h"

using namespace std;

//fct pour notre menu
int menu(){
count<<"***MENU***"<<endl;
count<<"1- Création"<<endl;
count<<"2- Affichage"<<endl;
count<<"3- Recherche"<<endl;
count<<"4- Suppression"<<endl;
count<<"5- Produits en rupture stock"<<endl;
count<<"6- Trie"<<endl;
count<<"7- Quitter"<<endl;
count<<"Faites votre choix"<<endl;

int choix;
cin>>choix;

return choix;
}
