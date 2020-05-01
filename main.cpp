#include <iostream>
#include "Produit.h"

using namespace std;
int menu();
int main()
{
    switch(menu()){
    case 1: cout<<" vous avez choisit Creation"<<endl; break;
    case 2: cout<<" vous avez choisit Affichage"<<endl; break;
    case 3: cout<<" vous avez choisit Recherche"<<endl; break;
    case 4: cout<<" vous avez choisit Suppression"<<endl; break;
    case 5: cout<<" vous avez choisit rupture stock"<<endl; break;
    case 6: cout<<" vous avez choisit Trie"<<endl; break;
    case 7: cout<<" vous avez choisit de Quitter"<<endl; break;
    default: cout<<" mauvais choix 1-7"<<endl;
    }
    return 0;
}
