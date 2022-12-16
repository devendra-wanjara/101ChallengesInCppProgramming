#include<iostream>
#include<iomanip>
#include "Number.h"

Number::Number(int x = 9):num(x){};

//Number::Number(){};

void Number::setNum(int x){
    this->num = x;
}
int Number::getNum(){
    return num;
}