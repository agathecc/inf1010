
//  panier.cpp
//  Created by Martine Bellaiche on 18-01-22.
//  Copyright © 2018 Martine Bellaiche. All rights reserved.
//

#include <string>
#include "Produit.h"

#ifndef PANIER_H
#define PANIER_H
class Panier
{
public:
    Panier (int capacite);
    // methodes d'accès
    Produit **  obtenirContenuPanier();
    int obtenirNombreContenu();
    double obtenirTotalApayer();
    
    // méthodes de modification
    
    // autres méthodes
    void ajouter ( Produit * prod);
    void livrer();
    void afficher();

private:
    
    Produit ** contenuPanier_;
    int  nombreContenu_;
    int capaciteContenu_;
    double totalAPayer_;
};

#endif

