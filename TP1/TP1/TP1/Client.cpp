/****************************************************************************
 * Titre: Travail pratique #1 - Client.cpp
 * Date: 30 janvier 2018
 * Auteurs: Agathe CASGRAIN-CYR (1750825) et Philippe BALLANDRAS (1895038)
 ****************************************************************************/

#include "client.h"


/****************************************************************************
 * Fonction: Panier::Panier
 * Description: Constructeur par parametres
 * Parametres: - int capacite : valeur de capaciteContenu_ (IN)
 * Retour: aucun
 ****************************************************************************/
Client::Client(string  nom,  string prenom, int identifiant, string codePostal,  long date)
{
    monPanier_ = nullptr;
    nom_ = nom;
    prenom_ = prenom;
    identifiant_ = identifiant;
    codePostal_ = codePostal;
    dateNaissance_ = date;
}


/****************************************************************************
 * Fonction: Client::obtenirNom
 * Description: Retourne nom_
 * Parametres: aucun
 * Retour: (string) la valeur de nom_
 ****************************************************************************/
string Client::obtenirNom()
{
    return nom_;
}

/****************************************************************************
 * Fonction: Client::obtenirPrenom
 * Description: Retourne prenom_
 * Parametres: aucun
 * Retour: (string) la valeur de prenom_
 ****************************************************************************/
string Client::obtenirPrenom()
{
    return prenom_;
}

/****************************************************************************
 * Fonction: Client::obtenirIdentifiant
 * Description: Retourne identifiant_
 * Parametres: aucun
 * Retour: (int) la valeur de identifiant_
 ****************************************************************************/
int Client::obtenirIdentifiant()
{
    return identifiant_;
}

/****************************************************************************
 * Fonction: Client::obtenirCodePostal
 * Description: Retourne codePostal_
 * Parametres: aucun
 * Retour: (string) la valeur de codePostal_
 ****************************************************************************/
string Client::obtenirCodePostal()
{
    return codePostal_;
}

/****************************************************************************
 * Fonction: Client::obtenirDateNaissancet
 * Description: Retourne dateNaissance_
 * Parametres: aucun
 * Retour: (long) la valeur de dateNaissance_
 ****************************************************************************/
long Client::obtenirDateNaissance()
{
    return dateNaissance_;
}


/****************************************************************************
 * Fonction: Client::modifierNom
 * Description: Modifie nom_
 * Parametres: - string nom: la nouvelle valeur de nom_ (IN)
 * Retour: aucun
 ****************************************************************************/
void Client::modifierNom(string nom)
{
    nom_ = nom;
}

/****************************************************************************
 * Fonction: Client::modifierPrenom
 * Description: Modifie prenom_
 * Parametres: - string prenom: la nouvelle valeur de prenom_ (IN)
 * Retour: aucun
 ****************************************************************************/
void Client::modifierPrenom(string prenom)
{
    prenom_ = prenom;
}

/****************************************************************************
 * Fonction: Client::modifierIdentifiant
 * Description: Modifie identifiant_
 * Parametres: - int identifiant: la nouvelle valeur de identifiant_ (IN)
 * Retour: aucun
 ****************************************************************************/
void Client::modifierIdentifiant(int identifiant)
{
    identifiant_ = identifiant;
}

/****************************************************************************
 * Fonction: Client::modifierCodePostal
 * Description: Modifie codePostal_
 * Parametres: - string codePostal: la nouvelle valeur de codePostal_ (IN)
 * Retour: aucun
 ****************************************************************************/
void Client::modifierCodePostal(string codePostal)
{
    codePostal_ = codePostal;
}

/****************************************************************************
 * Fonction: Client::modifierDateNaissance
 * Description: Modifie dateNaissance_
 * Parametres: - long date: la nouvelle valeur de dateNaissance_ (IN)
 * Retour: aucun
 ****************************************************************************/
void Client::modifierDateNaissance(long date)
{
    dateNaissance_ = date;
}


// méthode acheter() ajoute un produit dans le panier du client. Si le panier n’existe pas,
// on créé un objet Panier de 4 produits, et on ajoute le produit dans le Panier du client.

/****************************************************************************
 * Fonction: Panier::acheter
 * Description: ajoute le pointeur d'un objet produit au tableau dynamique
 * Parametres: - Produit* prod: pointeur du produit a ajouter (IN)
 * Retour: aucun
 ****************************************************************************/
void Client::acheter(Produit* prod)
{
    // si le panier n'existe pas
    if (monPanier_ == nullptr)
    {
        // créé un objet Panier de 4 produits
        monPanier_ = new Panier(4);
    }
    // ajoute un produit dans le panier monPanier_ du client
    monPanier_->ajouter(prod);
    
}

//void ;

/****************************************************************************
 * Fonction: Client::livrerPanier
 * Description:  permet de livrer le contenu du panier, en supprimant le 
 *               Panier actuel du client.
 * Parametres: aucun
 * Retour: aucun
 ****************************************************************************/
void Client::livrerPanier()
{
    //supprime le Panier actuel monPanier_ du client
    monPanier_->livrer();
}


/****************************************************************************
 * Fonction: Client::afficherPanier
 * Description: affiche le contenu du Panier s’il n’est pas vide.
 * Parametres: aucun
 * Retour: aucun
 ****************************************************************************/
void Client::afficherPanier()
{
    if (monPanier_->obtenirNombreContenu() != 0)
        monPanier_->afficher();
    else
        cout << "Panier vide" << endl;
    
}


