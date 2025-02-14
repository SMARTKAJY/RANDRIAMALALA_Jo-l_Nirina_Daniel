#include <iostream>

int main(){
  int age;
  
  std::cout<<"Entrez votre age ";
  std::>>age;
  if(age<18){
   std::cout<<"Vous ête encore mineur ";
  }else if(age>60){
   std::cout<<"Vous êtes vieux ";
  }else{
   std::cout<<"Vous etes majeur ";
   }
 
   return 0;
}
