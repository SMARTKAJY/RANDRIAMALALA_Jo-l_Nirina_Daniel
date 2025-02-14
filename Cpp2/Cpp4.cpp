#include <iostream>
#include <random>
   int main (){
       int rand,reponse;
       std::random_device rd;
       std::mt19937 gen (rd());
       std::uniform_int_distribution<int>distribution(0,100);
       rand= distribution(gen);
       std::cout<<"Devinez la valeur de 1 à 100 \n ";
       std::cin>>reponse;
       while(rand!=reponse){
           if(rand<reponse){
               std::cout<<"La reponse est plus petit \n ";
           }else{
               std::cout<<"La reponse est plus grand \n ";
           }
           std::cin>>reponse;
       }
       std::cout<<"Bravo vous avez trouver le nombre \n ";
   }

