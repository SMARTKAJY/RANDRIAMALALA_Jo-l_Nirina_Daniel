#include <iostream>
#include <cmath>


float hyp(int a, int b) {
    return sqrt(a * a + b * b);
}

int main() {
    int a, b, c;
    std::cout << "Entrez la première valeur : ";
    std::cin >> a;
    std::cout << "Entrez la seconde valeur : ";
    std::cin >> b;
    std::cout << "Entrez la troisième valeur : ";
    std::cin >> c;
    if(a > b + c || b > a + c || c > a + b ){
        std::cout<<" Votre triangle n'est pas valider \n "
    }else{
        
        if (a == b && b == c) {
            std::cout << "C'est un triangle équilatéral car les 3 côtés sont égaux.\n";
        } 
        else if (a == b || b == c || c == a) {
            std::cout << "C'est un triangle isocèle car il y a deux côtés de même mesure.\n";
        } 
        else {
            std::cout << "C'est un triangle scalène.\n";
        }
    
        if (a == hyp(b, c) || b == hyp(a, c) || c == hyp(a, b)) {
            std::cout << "Et aussi un triangle rectangle.\n";
        }
    }


    return 0;
}
