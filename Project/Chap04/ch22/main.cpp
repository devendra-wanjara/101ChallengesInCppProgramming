#include<iostream>
#include<iomanip>
#include "Number.h"

int main(){
    
    Number* n = new Number();
    
    

    std::cout << "Hello World" << std::endl;
    std::cout <<"n with new =" <<n->getNumber() << std::endl;

    Number* n1 = new Number(7);//user defined constructor called
    std::cout << n1->getNumber() << std::endl; //
    n1->setNumber(10);
    std::cout << n1->getNumber() << std::endl;

    Number n2; // no arg user defined constructor called
    n2.setNumber(6);
    std::cout << "n without new " <<n2.getNumber() << std::endl;
}