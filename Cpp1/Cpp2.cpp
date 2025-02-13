#include <iostream>
#include <math.h>
    
float hyp(int Long, int larg){
    return sqrt(a*a + b*b);
}
int main(){
    int a,b,c;
    std::cout<<"Entre le premier valeur : \n ";
    std::cin<<a;
    std::cout<<" Le second valeut please";
    std::cin<<b;
    std::cout<<"La troisieme et derniere";
    std::cin<<c;
    if(a==b==c){
        std::cout<<"C'est un triangle equilateral car les 3 côte sont ego /n ";
    }else if(a==b || b==c || c == a){
        std::cout<<"C'est un triangle isocel car il y a deux cote de meme mesure /n";
    }else{
        std::cout<<"C'est un triangle scalene /n ";
    }
    if(a==hyp(b,c)|| b == hyp(a,c)|| c== hyp(a,b)){
        std::cout<<"et aussi un triangle rectangle /n";
    }
    returne 0;
}
