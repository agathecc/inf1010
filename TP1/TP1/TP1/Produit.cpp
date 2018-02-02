/****************************************************************************
 * Titre: Travail pratique #1 - Produit.cpp
 * Date: 23 janvier 2018
 * Auteurs: Agathe CASGRAIN-CYR (1750825) et Philippe BALLANDRAS (1895038) 
 ****************************************************************************/

#include "Produit.h"


/****************************************************************************
 * Fonction: Produit::Produit
 * Description: Constructeur par defaut
 * Parametres: aucun
 * Retour: aucun
 ****************************************************************************/
Produit::Produit()
{
   	nom_ = "outil";
    reference_ = 0;
    prix_ = 0.0;
}

/****************************************************************************
 * Fonction: Produit::Produit
 * Description: Constructeur par parametres
 * Parametres: - string nom: valeur de nom_ (IN)
 *             - int reference : valeur de reference_ (IN)
 *             - double prix: valeur de prix_ (IN)
 * Retour: aucun
 ****************************************************************************/
Produit::Produit(string nom, int reference, double prix)
{
    nom_ = nom;
    reference_ = reference;
    prix_ = prix;
}

/****************************************************************************
 * Fonction: Produit::obtenirNom
 * Description: Retourne nom_
 * Parametres: aucun
 * Retour: (string) la valeur de nom_
 ****************************************************************************/
string Produit::obtenirNom()
{
    return nom_;
}

/****************************************************************************
 * Fonction: Produit::obtenirReference
 * Description: Retourne reference_
 * Parametres: aucun
 * Retour: (int) la valeur de reference_
 ****************************************************************************/
int Produit::obtenirReference()
{
    return reference_;
}

/****************************************************************************
 * Fonction: Produit::obtenirPrix
 * Description: Retourne prix_
 * Parametres: aucun
 * Retour: (double) la valeur de prix_
 ****************************************************************************/
double Produit::obtenirPrix()
{
    return prix_;
}


/****************************************************************************
 * Fonction: Produit::modifierNom
 * Description: Modifie nom_
 * Parametres: - string nom: la nouvelle valeur de nom_ (IN)
 * Retour: aucun
 ****************************************************************************/
void Produit::modifierNom(string nom)
{
    nom_ = nom;
}

/****************************************************************************
 * Fonction: Produit::modifierReference
 * Description: Modifie reference_
 * Parametres: - int reference: la nouvelle valeur de reference_ (IN)
 * Retour: aucun
 ****************************************************************************/
void Produit::modifierReference(int reference)
{
    reference_ = reference;
}

/****************************************************************************
 * Fonction: Produit::modifierPrix
 * Description: Modifie prix_
 * Parametres: - double prix: la nouvelle valeur de prix_ (IN)
 * Retour: aucun
 ****************************************************************************/
void Produit::modifierPrix(double prix)
{
    prix_ = prix;
}


/****************************************************************************
 * Fonction: Produit::afficher
 * Description: affiche letat des attributs
 * Parametres: aucun
 * Retour: aucun
 ****************************************************************************/
void Produit::afficher()
{
    cout << "nom : "  << nom_ << endl;
    cout << "reference : " << reference_ << endl;
    cout << "prix : " << prix_ << endl;
}











