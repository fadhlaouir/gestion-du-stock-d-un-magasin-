#include <iostream>
#include "Produit.h"

using namespace std;

//fct pour notre menu
int menu()
{
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
}
//le & permet de transferer la reference de nb et non la copie
void creation( Produit p[], int& nb)
{
    cout<<"Donner le nombre de produits";
    cin>>nb;

    for(int i=0; i<nb; i++)
    {
testref: //testref est un label qui nous servira a renvoyer ici le compilateur quand on vous on voudra
        cout<<"donner la reference";

        //gestion de la cle primaire(refprod)
        if(i==0)
        {
            cin>>p[i].refproduit;
        }
        else
        {
            string tmprefprod;
            for(int j=0; j<i; j++)
            {
                if(p[j].refproduit==tmprefprod)
                {
                    cout<<"cette reference existe deja"<<endl;
                    system("pause"); //pour maintenir le msg ci dessus d'etre a l'ecran
                    goto testref;
                }
            }
            //si la reference n'existe pas alors:
            p[i].refproduit=tmprefprod;

        }

        cout<<" la designation ";
        cin>>p[i].designation;
        cout<<"la quantite ";
        cin>>p[i].qte;
        cout<<"le prix";
        cin>>p[i].prix;
        cout<<" le seuil ";
        cin>>p[i].seuil;
    }
    cout<<"Felicitation, vous venez d'enregistrer "<<nb<<"produits"<<endl;
    system("pause");

}
