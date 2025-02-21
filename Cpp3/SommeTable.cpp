#include <iostream>
using namespace std;

int main (){
int tab [5] = {1,2,3,4,5};
int somme = 0;
for (int i = 0 ; i <= 4; i++){
  somme += tab[i];
}
 cout<<"La somme des elements du tableau vaut "<<somme<<endl;
}
