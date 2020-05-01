#include <iostream>
#include "Produit.h"

using namespace std;

int main()
{
    switch(menu()){
    case 1: count<<" vous avez choisit Création"<<endl; break;
    case 2: count<<" vous avez choisit Affichage"<<endl; break;
    case 3: count<<" vous avez choisit Recherche"<<endl; break;
    case 4: count<<" vous avez choisit Suppression"<<endl; break;
    case 5: count<<" vous avez choisit Produits en rupture stock"<<endl; break;
    case 6: count<<" vous avez choisit Trie"<<endl; break;
    case 7: count<<" vous avez choisit Quitter"<<endl; break;
    default: count<<" mauvais choix 1-7"<<endl;
    }
    return 0;
}
