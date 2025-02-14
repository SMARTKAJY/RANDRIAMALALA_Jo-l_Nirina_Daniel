#include <iostream>
    int main (){
        int a;
        std::cout<<"Entrez une valeur pour faire sa multiplication 	\n";
        std::cin>>a;
        for (int i = 0 ; i <= 10;i++ ){
            std::cout<<a<<" × "<<i<<" = "<<a*i<<"\n";
        }
    }
