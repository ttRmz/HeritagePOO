#include "Entreprise.h"
#include <vector>
using namespace std;

Entreprise::Entreprise(){
    m_nombreEmploye = DEF_ENTREPRISE_NOMBREEMPLOYE;
}

void Entreprise::addRepresentant(std::string name, std::string firstname, int age, int nbprime, int nbDeplacement){
    Representant representant;
    representant.setfirstname(firstname);
    representant.setlastName(name);
    representant.setage(age);
    representant.setDeplacement(nbDeplacement);
    representant.setNbPrime(nbprime);
    m_Representants.push_back(representant);
    m_nombreEmploye ++;
}

void Entreprise::addTechnicien(string name, string firstname, int age){
    Technicien technicien;
    technicien.setfirstname(firstname);
    technicien.setlastName(name);
    technicien.setage(age);
    m_Techniciens.push_back(technicien);
    m_nombreEmploye ++;
}

 void Entreprise::addInterimaire(std::string name, std::string firstname, int age, int nbHeure){
     Interimaire interimaire;
     interimaire.setfirstname(firstname);
     interimaire.setlastName(name);
     interimaire.setage(age);
     interimaire.setNbHeure(nbHeure);
     m_Interimaires.push_back(interimaire);
     m_nombreEmploye ++;
 }

 void Entreprise::addVendeur(std::string name, std::string firstname, int age, int nbprime){
     Vendeur vendeur;
     vendeur.setfirstname(firstname);
     vendeur.setlastName(name);
     vendeur.setage(age);
     vendeur.setNbPrime(nbprime);
     m_Vendeurs.push_back(vendeur);
     m_nombreEmploye ++;
 }

 vector<Vendeur> Entreprise::getVendeurs() {
     return m_Vendeurs;
 }

 vector<Technicien> Entreprise::getTechniciens(){
     return m_Techniciens;
 }

 vector<Representant> Entreprise::getRepresentants(){
     return m_Representants;
 }

 vector<Interimaire> Entreprise::getInterimaires(){
     return m_Interimaires;
 }



 void Entreprise::setNameEntreprise(std::string NameEntrprise){
     m_nameEntreprise = NameEntrprise;
 }

 std::string Entreprise::getNameEntreprise(){
     return m_nameEntreprise;
 }

 int Entreprise::getNombreEmploye(){
     return m_nombreEmploye;
 }