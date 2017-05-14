#include "Technicien.h"
#include "Representant.h"
#include "Vendeur.h"
#include "Interimaire.h"
#include "Entreprise.h"
#include "Employe.h"
#include "Commercial.h"

#include "Commercial.cpp"
#include "Employe.cpp"
#include "Entreprise.cpp"
#include "Interimaire.cpp"
#include "Representant.cpp"
#include "Technicien.cpp"
#include "Vendeur.cpp"

#include <string>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    Entreprise entreprise;
    int i ;
    int totalSalaire;

    entreprise.setNameEntreprise("Vony");
    entreprise.addVendeur("Mora", "Paul", 25, 10);
    entreprise.addVendeur("Nagwald", "Pierre", 42, 5);
    entreprise.addVendeur("Nora", "Jacques", 25, 1);

    entreprise.addRepresentant("Toro", "Rachel", 20, 3, 10);
    entreprise.addRepresentant("Moro", "Rémi", 35, 2, 8);

    entreprise.addTechnicien("Tark","Tanguy", 50);
    entreprise.addTechnicien("Mork", "Teo", 40);

    entreprise.addInterimaire("Ducoup", "Idriss", 22, 75);
    entreprise.addInterimaire("Duno", "Isacc", 22, 50);
    entreprise.addInterimaire("Poulain", "Irène", 22, 50);
    entreprise.addInterimaire("Pinor", "Igor", 22, 0);

    vector<Vendeur> vendeurs = entreprise.getVendeurs();
    vector<Representant> representants = entreprise.getRepresentants();
    vector<Interimaire> interimaires = entreprise.getInterimaires();
    vector<Technicien> techniciens = entreprise.getTechniciens();
    
    cout << "les Vendeurs: " << endl << endl;

    for (i=0; i < vendeurs.size(); i ++){
        cout << vendeurs[i].getfirstname() << " a un salaire de " << vendeurs[i].calcul() << endl;
        totalSalaire += vendeurs[i].calcul();
    }

    cout << endl << "les Representants: " << endl << endl;


    for (i=0; i < representants.size(); i++){
        cout << representants[i].getfirstname() << " a un salaire de " << representants[i].calcul() << endl;
        totalSalaire += representants[i].calcul();
    }

    cout << endl << "les Interimaires: " << endl << endl;

    for (i=0; i < interimaires.size(); i++){
        cout << interimaires[i].getfirstname() << " a un salaire de " << interimaires[i].calcul() << endl;
        totalSalaire += interimaires[i].calcul();
    }

    cout << endl << "les Technicien: " << endl << endl;

    for (i=0; i < techniciens.size(); i++){
        cout << techniciens[i].getfirstname() << " a un salaire de " << techniciens[i].getsalaire()<< endl;
        totalSalaire += techniciens[i].getsalaire();
    }

    cout  << endl << "il y a " << entreprise.getNombreEmploye() << " employé et " ; 
    cout << "leur salaire total est de " << totalSalaire << " pour une moyene de " <<totalSalaire/entreprise.getNombreEmploye()<< endl;
}