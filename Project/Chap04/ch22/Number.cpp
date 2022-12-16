/**
 * Write a self-sufficient class called Number which maintains an int. It should have following methods in it to perform various operation on the int:

* void setNumber (int n); // sets n into int

* int getNumber(); // return current value of int

* void printNumber(); // prints the int

 * bool isNegative(); // checks whether int is negative

*bool isDivisibleBy (int n); // checks whether int is divisible by n

* int absoluteValue(); // returns absolute value of int
*/
#include "Number.h"
#include<iostream>
#include<iomanip>

Number::Number (){
    this->number = -1;
}
Number::Number(int x){
    this->number = x;
}
void Number :: setNumber(int i){
    this->number = i;
}

int Number :: getNumber(){
    return this->number;
}