/****************************************************************************
 * Titre: Travail pratique #1 - Panier.cpp
 * Date: 30 janvier 2018
 * Auteurs: Agathe CASGRAIN-CYR (1750825) et Philippe BALLANDRAS (1895038)
 ****************************************************************************/

#include "panier.h"



/****************************************************************************
 * Fonction: Panier::Panier
 * Description: Constructeur par parametres
 * Parametres: - int capacite : valeur de capaciteContenu_ (IN)
 * Retour: aucun
 ****************************************************************************/
Panier::Panier(int capacite)
{
    contenuPanier_ = new Produit*[capacite];
    for (int i = 0; i < capacite; i++)
        contenuPanier_[i] = nullptr;
    nombreContenu_ = 0;
    capaciteContenu_ = capacite;
    totalAPayer_ = 0.0;
}


/****************************************************************************
 * Fonction: Panier::obtenirContenuPanier
 * Description: Retourne contenuPanier_
 * Parametres: aucun
 * Retour: (Produit**) la valeur de contenuPanier_
 ****************************************************************************/
Produit** Panier::obtenirContenuPanier()
{
    return contenuPanier_;
}

/****************************************************************************
 * Fonction: Panier::obtenirNombreContenu
 * Description: Retourne nombreContenu_
 * Parametres: aucun
 * Retour: (int) la valeur de nombreContenu_
 ****************************************************************************/
int Panier::obtenirNombreContenu()
{
    return nombreContenu_;
}

/****************************************************************************
 * Fonction: Panier::obtenirTotalApayer
 * Description: Retourne totalAPayer_
 * Parametres: aucun
 * Retour: (double) la valeur de totalAPayer_
 ****************************************************************************/
double Panier::obtenirTotalApayer()
{
    return totalAPayer_;
}

// Une méthode ajouter () qui prend en paramètre un pointeur à un objet de Produit et
//l’ajoute au tableau de produits. Lors de l’ajout, si la capacité du tableau est atteinte, on doublera la capacité, pour pouvoir ajouter le pointeur de l’objet Produit. Il faut aussi faire la mise à jour du total à payer.

/****************************************************************************
 * Fonction: Panier::ajouter
 * Description: ajoute le pointeur d'un objet produit au tableau dynamique
 * Parametres: - Produit* prod: pointeur du produit a ajouter (IN)
 * Retour: aucun
 ****************************************************************************/
void Panier::ajouter(Produit* prod)
{
    if (nombreContenu_ == capaciteContenu_)
    {
        // doubler la capacité du tableau dynamique contenuPanier_
        capaciteContenu_ = capaciteContenu_ * 2;
        Produit** ancienContenuPanier = contenuPanier_;
        contenuPanier_ = new Produit* [capaciteContenu_];
        for (int i = 0; i < nombreContenu_; i++)
        {
            contenuPanier_[i] = ancienContenuPanier[i];
        }
        delete[] ancienContenuPanier;
        ancienContenuPanier = nullptr;
    }
    // ajoute le produit en paramètre
    contenuPanier_[nombreContenu_++] = prod;
    
    //mettre a jour total à payer
    totalAPayer_ = totalAPayer_ + prod->obtenirPrix();
}


/****************************************************************************
 * Fonction: Panier::livrer
 * Description: supprime le contenu du tableau et ré-initialise l’état des 
 *              autres attributs
 * Parametres: aucun
 * Retour: aucun
 ****************************************************************************/
void Panier::livrer()
{
    // supprime le contenu du tableau dynamique contenuPanier_
    for (int i = 0; i < nombreContenu_; ++i)
    {
        if (contenuPanier_[i] != nullptr)
            delete contenuPanier_[i];
    }
    delete[] contenuPanier_;
    contenuPanier_ = nullptr;
    
    //ré-initialise l'état des attributs
    totalAPayer_ = 0.0;
    nombreContenu_ = 0;
    capaciteContenu_ = 0;
}



/****************************************************************************
 * Fonction: Panier::afficher
 * Description: affiche letat des attributs
 * Parametres: aucun
 * Retour: aucun
 ****************************************************************************/
void Panier::afficher()
{
    cout << "nombreContenu : " << nombreContenu_ << endl;
    cout << "capaciteContenu : " << capaciteContenu_ << endl;
    cout << "totalAPayer : "  << totalAPayer_ << endl;
    for (int i = 0; i < nombreContenu_; i++)
    {
        cout << "produit " << i << " :" << endl;
        contenuPanier_[i]->afficher();
    }
    
}






