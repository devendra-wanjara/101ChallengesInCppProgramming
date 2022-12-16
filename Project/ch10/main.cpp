#include <iostream>
#include <iomanip>
//fibonacci is a seriest of numbers so you can print all number which make a fibonacci series

int printFibonacci(int);
int printFibonacci1(int);
int getLen(int);

int main()
{
    int num = 1000;
    std::cout << "Hello World dEVEN" << std::endl;
    std::cout << "len = " << getLen(1234) << std::endl; 
    //std::cout << printFibonacci(num) << std::endl;
    std::cout << "New " << printFibonacci1(num) << std::endl;
}

int printFibonacci(int num)
{
    int fnum = 0;

    if (num <= 1)
        return num;
    else
    {
        return fnum = printFibonacci(num - 1) + printFibonacci(num - 2);
        //std::cout << "Fnum = " <<fnum << std::endl;
        //return fnum;
    }
}

int printFibonacci1(int num)
{
    int f[num + 5]{0};//= {0};
    int i;
    int number = 0;

    f[0] = 0;
    f[1] = 1;

    for (i = 2; i <= num; i++)
    {

        f[i] = f[i - 2] + f[i - 1];
        number = f[i];
         if(getLen(number) >= 2){
             std::cout << "MAX INDEX" << i << std::endl;
             break;
            }
        
    }
    for(auto x : f){
        //std::cout << x << " " ;
        ;
    }
    std::cout << std:: endl;
    return f[num];
}

int getLen(int number){
    int count = 0;
    int currentNUmber = number;
    
    while(1){
        count++;
        currentNUmber = currentNUmber / 10;
       // std::cout <<"currentNuminFun = " << currentNUmber << "count = " << count << std::endl;
        if(currentNUmber <=0){
            break;
        }
        //currentNUmber = number %10;
    }
    return count;

    
}