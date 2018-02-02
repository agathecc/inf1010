/**************************************************
* Titre: Travail pratique #1 - Main.cpp
* Date: 20 janvier 2018
* Auteur: Mohammed Esseddik BENYAHIA
**************************************************/

#include "Produit.h"
#include "Rayon.h"
#include "client.h"
#include "panier.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	//C'est à vous de voir si vous devez allouer dynamiquement ou non les élèments

	//1-  Creez 15 objets du classe produit
    Produit* produit1 = new Produit("chaise", 1, 75.00);
    Produit* produit2 = new Produit("bureau", 2, 350.00);
    Produit* produit3 = new Produit("canape", 3, 1700.00);
    Produit* produit4 = new Produit("table", 4, 650.00);
    Produit* produit5 = new Produit("lampe", 5, 150.00);
    Produit* produit6 = new Produit("commode", 6, 300.00);
    Produit* produit7 = new Produit("poubelle", 7, 80.00);
    Produit* produit8 = new Produit("rideau", 8, 50.00);
    Produit* produit9 = new Produit("lampadaire", 9, 200.00);
    Produit* produit10 = new Produit("panier", 10, 25.00);
    Produit* produit11 = new Produit("sommier", 11, 400.00);
    Produit* produit12 = new Produit("lavabo", 12, 70.00);
    Produit* produit13 = new Produit("robinet", 13, 90.00);
    Produit* produit14 = new Produit("miroire", 14, 50.00);
    Produit* produit15 = new Produit("tapis", 15, 150.00);
    
	//2-  Modifiez le nom, la référence, le prix de  troisieme objet Produit créé
    produit3->modifierNom("étagère");
    produit3->modifierPrix(100.00);
    produit3->modifierReference(16);
    
    //   afficher les attributs de cet objet Produit
    produit3->afficher();
	
	//3-  Creez un objet du classe rayon à l'aide du constructeur par défaut
    Rayon rayon1 = Rayon();
   
	//4-  Modifiez la catégorie  du rayon
    rayon1.modifierCategorie("meuble");
    
    // 5- Ajouter 6 produits de  voret chaoix dans le rayon créé
    rayon1.ajouterProduit(produit1);
    rayon1.ajouterProduit(produit2);
    rayon1.ajouterProduit(produit3);
    rayon1.ajouterProduit(produit4);
    rayon1.ajouterProduit(produit6);
    rayon1.ajouterProduit(produit11);

    // 6- afficher le contenu du rayon
    rayon1.afficher();
  
	//7-  Creez un objet de classe client à l'aide du constructeur
    Client client1 = Client("Bernier", "Maxime", 1, "J3V3V5", 199007);

	//8-  afficher l'etat des attributs du client
    cout << "Nom : " << client1.obtenirNom() << endl;
    cout << "Prenom : " << client1.obtenirPrenom() << endl;
    cout << "Identifiant : " << client1.obtenirIdentifiant() << endl;
    cout << "Code Postal : " << client1.obtenirCodePostal() << endl;
    cout << "Date de Naissance : " << client1.obtenirDateNaissance() << endl;

	//9-   Le client achete 9 produits
    client1.acheter(produit7);
    client1.acheter(produit8);
    client1.acheter(produit9);
    client1.acheter(produit10);
    client1.acheter(produit13);
    client1.acheter(produit12);
    client1.acheter(produit5);
    client1.acheter(produit14);
    client1.acheter(produit15);

	//10- Afficher le contenu du panier du client
    client1.afficherPanier();

     //11- livrer le panier du client
    client1.livrerPanier();
    
	//12-  terminer le programme correctement
    
    
    return 0;
}
