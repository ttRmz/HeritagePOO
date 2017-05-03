# TP Héritage

Vous allez devoir créer un programme permettant de gérer les salaires des employés d’une entreprise.

### Les classes

Une entreprise possède deux grands types d’employés :
* des commerciaux
* des techniciens

Les commerciaux peuvent être soit :
* des vendeurs
* des représentants

Les techniciens peuvent être soit :
* des salariés classiques
* des intérimaires

Ils seront représentés dans votre programme à l’aide de classes. Vous utiliserez pour cela le principe d’héritage, réfléchissez donc bien à leur hiérarchie avant de vous lancer dans la programmation.
Représentez l’organisation des classes (en utilisant par exemple des carrés pour représenter les classes et des flèches pour l’héritage) dans un document rendre en PDF.

### Les employés

Tout employé possède : 
* un nom
* un prénom
* un âge
* une méthode calculant son salaire 
* une méthode affichant ses caractéristiques (nom, prénom, age, salaire)

### Calcul des salaires

Le salaire des commerciaux est calculé en fonction de leur salaire de base et de leurs primes.
Le salaire de base est de 2500 EUR par mois et une prime est de 100 EUR pour les vendeurs, et de 250 EUR pour les représentants. Les représentants sont également dédommagés de leurs frais de déplacement, à la hauteur de 50 EUR par déplacement.
Le salaire d’un technicien salarié est de 2000 EUR par mois, et celui des intérimaires est de 24,5 EUR par nombre d’heures travaillées.

### Les entreprises

Toute entreprise possède : 
* un nom
* des vendeurs (5 max)
* des représentants (2 max)
* des techniciens (3 max)
* des intérimaires (5 max)

Vous utiliserez donc des tableaux (vector) pour stocker ces différents employés… Mais attention, vous allez rencontrer une difficulté : faire un tableau d’objets… En effet, puisque vous devez créer un tableau d’objet (par exemple un tableau de 5 vendeurs), il faut que vous ayez prévu un constructeur qui ne prend pas de paramètres dans la classe Vendeur !

Le programme doit permettre de calculer et d’afficher pour un mois donné : 
* le salaire de chaque employé
* le salaire moyen
* la somme des salaires de tous les employés

##### Tester le programme sur cet exemple (donc créez un main pour pouvoir faire ça) :
* Société : VONY
* Vendeurs : Paul, Pierre, Jacques.
* Représentants : Rachel, Rémi.
* Techniciens salariés : Tanguy, Téo.
* Intérimaires : Idris, Isaac, Irène, Igor.

Les salaires à afficher sont ceux du mois durant lequel :

* Paul a eu 10 primes, Pierre en a eu 5, et Jacques une seule.
* Rachel a eu 3 primes pour 10 déplacements, et Rémi 2 primes pour 8
déplacements.
* Idris a travaillé 75 heures, Isaac et Irène ont travaillé 50 heures chacun, et Igor n’a pas travaillé ce mois-ci.

## Documents à rendre

Dans un fichier au format zip :

* Fichier “participants.txt” contenant les noms, prénom et email de chaque membre du groupe
* Document de conception au format PDF
* Les fichiers .h
* Les fichiers .cpp