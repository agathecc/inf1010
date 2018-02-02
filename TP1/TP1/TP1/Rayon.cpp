/****************************************************************************
 * Titre: Travail pratique #1 - Rayon.cpp
 * Date: 23 janvier 2018
 * Auteurs: Agathe CASGRAIN-CYR (1750825) et Philippe BALLANDRAS (1895038)
 ****************************************************************************/

#include "Rayon.h"


/****************************************************************************
 * Fonction: Rayon::Rayon
 * Description: Constructeur par defaut
 * Parametres: aucun
 * Retour: aucun
 ****************************************************************************/
Rayon::Rayon()
{
   	categorie_ = "inconnu";
    tousProduits_ = nullptr;
    capaciteProduits_ = 0;
    nombreProduits_ = 0;
}

/****************************************************************************
 * Fonction: Rayon::Rayon
 * Description: Constructeur par parametres
 * Parametres: - string cat: valeur de categorie_ (IN)
 * Retour: aucun
 ****************************************************************************/
Rayon::Rayon(string cat)
{
   	categorie_ = cat;
    tousProduits_ = nullptr;
    capaciteProduits_ = 0;
    nombreProduits_ = 0;
}


/****************************************************************************
 * Fonction: Rayon::obtenirCategorie
 * Description: Retourne categorie_
 * Parametres: aucun
 * Retour: (string) la valeur de categorie_
 ****************************************************************************/
string Rayon::obtenirCategorie()
{
    return categorie_;
}


/****************************************************************************
 * Fonction: Rayon::obtenirTousProduits
 * Description: Retourne tousProduits_
 * Parametres: aucun
 * Retour: (Produit**) la valeur de tousProduits_
 ****************************************************************************/
Produit** Rayon::obtenirTousProduits()
{
    return tousProduits_;
}

/****************************************************************************
 * Fonction: Rayon::obtenirCapaciteProduits
 * Description: Retourne capaciteProduits_
 * Parametres: aucun
 * Retour: (int) la valeur de capaciteProduits_
 ****************************************************************************/
int Rayon::obtenirCapaciteProduits()
{
    return capaciteProduits_;
}

/****************************************************************************
 * Fonction: Rayon::obtenirNombreProduits
 * Description: Retourne nombreProduits_
 * Parametres: aucun
 * Retour: (int) la valeur de nombreProduits_
 ****************************************************************************/
int Rayon::obtenirNombreProduits()
{
    return nombreProduits_;
}


/****************************************************************************
 * Fonction: Produit::modifierCategorie
 * Description: Modifie categorie_
 * Parametres: - string cat: la nouvelle valeur de categorie_ (IN)
 * Retour: aucun
 ****************************************************************************/
void Rayon::modifierCategorie(string cat)
{
    categorie_ = cat;
}


/****************************************************************************
 * Fonction: Produit::ajouterProduit
 * Description: ajoute le pointeur d'un objet produit au tableau dynamique
 * Parametres: - Produit* produit: pointeur du produit a ajouter (IN)
 * Retour: aucun
 ****************************************************************************/
void Rayon::ajouterProduit(Produit* produit)
{
    if (nombreProduits_ == 0)
    {
        // initialise tableau avec capacité de 5.
        capaciteProduits_ = 5;
        tousProduits_ = new Produit* [capaciteProduits_];
        for (int i = 0; i < capaciteProduits_; i++)
            tousProduits_[i] = nullptr;
    }
    if (nombreProduits_ == capaciteProduits_)
    {
        // augmente la capacité de 5 du tableau dynamique
        capaciteProduits_ = capaciteProduits_ + 5;
        Produit** ancienTousProduits = tousProduits_;
        tousProduits_ = new Produit* [capaciteProduits_];
        for (int i = 0; i < nombreProduits_; i++)
        {
            tousProduits_[i] = ancienTousProduits[i];
            delete ancienTousProduits[i];
        }
        delete[] ancienTousProduits;
        ancienTousProduits = nullptr;
    }
    // ajoute le produit en paramètre
    tousProduits_[nombreProduits_++] = produit;
}

/****************************************************************************
 * Fonction: Rayon::afficher
 * Description: affiche letat des attributs
 * Parametres: aucun
 * Retour: aucun
 ****************************************************************************/
void Rayon::afficher()
{
    cout << "capaciteProduits : " << capaciteProduits_ << endl;
    cout << "nombreProduits : " << nombreProduits_ << endl;
    cout << "categorie : "  << categorie_ << endl;
    for (int i = 0; i < nombreProduits_; i++)
    {
        cout << "produit " << i << " :" << endl;
        //(*tousProduits_[i]).afficher();
        tousProduits_[i]->afficher();
    }
    
}



