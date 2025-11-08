#include <iostream>

using namespace std;


class Patient {
private:
    string nom;
    int age;
    int id;
    static int i;

public:

    Patient(string n, int a) {
        nom = n;
        age = a;
        id = ++i;
    }


    string getNom() {return nom;}
    int getAge() {return age;}
    int getId() {return id; }


    void setNom(string n) {nom = n;}
    void setAge(int a) {age = a;}


    void afficher() const {
        cout << " ID: " << id << endl;
        cout << "Nom : " << nom << endl;
        cout << "Age : " << age << " ans" << endl;
        cout << "--------" << endl;
    }


    Patient() {
        cout << "[Destruction] Patient avec ID " << id << " supprimé." << endl;
    }
};


int Patient::i = 0;


int main() {
    cout << "=== Creation des patients ===" << endl;
    Patient p1("samar", 30);
    Patient p2("karim", 45);
    Patient p3("amal", 25);

    cout << "\n=== Modification ===" << endl;
    p2.setNom("samar");
    p3.setAge(26);

    cout << "\n=== Informations des patients ===" << endl;
    p1.afficher();
    p2.afficher();
    p3.afficher();



    return 0;
}

