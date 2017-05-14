#ifndef DEF_ENTREPRISE
#define DEF_ENTREPRISE

#include <iostream>
#include <string>
#include <vector>
#include "Technicien.h"
#include "Representant.h"
#include "Vendeur.h"
#include "Interimaire.h"

#define DEF_ENTREPRISE_NOMBREEMPLOYE 0


class Entreprise {
    public:
        Entreprise ();
        void addRepresentant(std::string name, std::string firstname, int age, int nbprime, int nbDeplacement);
        void addTechnicien(std::string name, std::string firstname, int age);
        void addInterimaire(std::string name, std::string firstname, int age, int nbHeure);
        void addVendeur(std::string name, std::string firstname, int age, int nbprime);
        
        std::string getNameEntreprise();
        void setNameEntreprise(std::string NameEntrprise);

        int getNombreEmploye();

        std::vector<Vendeur> getVendeurs();
        std::vector<Technicien> getTechniciens();
        std::vector<Representant> getRepresentants();
        std::vector<Interimaire> getInterimaires();

    private:
        int m_nombreEmploye;
        std::string m_nameEntreprise;
        std::vector<Technicien> m_Techniciens;
        std::vector<Vendeur> m_Vendeurs;
        std::vector<Representant> m_Representants;
        std::vector<Interimaire> m_Interimaires;
};   

#endif
