#include <iostream>
using namespace std;

class Produit {
private:
    string nom;
    int quantite;
    double prix;

public:
   Produit(){nom="";quantite=0;prix=0;}
   Produit(string nom,int quantite,double prix){
   this->nom=nom;
   this->quantite=quantite;
   this->prix=prix;

   }
   string getnom(){return nom;}
   int getquantite(){return quantite;}
   double getprix(){return prix;}
   void setnom(string n){nom=n;}
   void setquantite(int q){quantite=q;}
   void setprix(double p){prix=p;}

   void afficher(){

      cout<<"nom:"<<nom<<endl;
      cout<<"quantite:"<<quantite<<endl;
      cout<<"prix:"<<prix<<endl;

   }
   void augmenterQuantite(int q){
      if(q>0){
        quantite+=q;
      }else{
       cout << "La quantité à ajouter doit être positive !" << endl;
      }


   }
   double calculerValeur() const {
        return quantite * prix;
    }

};







int main() {
     Produit p1("Stylo", 50, 1.5);
    Produit p2("Cahier", 30, 3.0);
    Produit p3("Gomme", 80, 0.8);
p2.setprix(3.5);
cout << "=== Valeur individuelle des produits ===" << endl;
    cout << p1.getnom() << " : " << p1.calculerValeur() << " dh" << endl;
    cout << p2.getnom() << " : " << p2.calculerValeur() << " dh" << endl;
    cout << p3.getnom() << " : " << p3.calculerValeur() << " dh" << endl;
     double valeurGlobale = p1.calculerValeur() + p2.calculerValeur() + p3.calculerValeur();

    cout << "\n=== Valeur globale du stock ===" << endl;
    cout << "Total : " << valeurGlobale << " dh" << endl;

    return 0;
}
