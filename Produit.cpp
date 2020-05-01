#include <iostream>
#include "Produit.h"

using namespace std;

//fct pour notre menu
int menu(){
cout<<"***MENU***"<<endl;
cout<<"1- Creation"<<endl;
cout<<"2- Affichage"<<endl;
cout<<"3- Recherche"<<endl;
cout<<"4- Suppression"<<endl;
cout<<"5- Produits en rupture stock"<<endl;
cout<<"6- Trie"<<endl;
cout<<"7- Quitter"<<endl;
cout<<"Faites votre choix"<<endl;

int choix;
cin>>choix;

return choix;
};
