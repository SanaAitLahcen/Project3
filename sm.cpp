#include <iostream>
#include "Vehicule.h"

int main() {
    Vehicule V1;
    V1.afficher();
    Vehicule* V2;
    V2 = new Vehicule(2, "BMW", 100);
    V2->afficher();

    Vehicule* V3;
    V3=new Vehicule(*V2);//deux adresses différents V3 et V2
    V3->afficher();
    
    return 0;
}
