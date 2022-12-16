#include<iostream>

// Learn Swap by Refrence

void swapByRef(int&, int&);
void swapByPtr(int*, int*);
int main () {

    int a = 10;
    int b = 20;

    std::cout << "A = " << a << " B =" << b << std::endl;
    swapByRef(a,b);
    std::cout << "A = " << a << " B =" << b << std::endl;
    swapByPtr(&a,&b);
    std::cout << "A = " << a << " B =" << b << std::endl;
}

void swapByRef(int& num1, int& num2){

    int t = 0;

    t= num1;
    num1 = num2;
    num2 = t;

}

void swapByPtr(int* num1, int* num2){
    int t;
    t = *num1;
    *num1 = *num2;
    *num2 = t;
}