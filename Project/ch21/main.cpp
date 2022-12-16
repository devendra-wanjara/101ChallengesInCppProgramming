#include<iostream>
#include<cstdarg>
#include<algorithm>

//HACK:

//IMP: 
//SOME: 

int findMax ( int, ...);

int main () {

    int max = 0;
    std::cout << "Max = " << findMax(5,1,7,3,4,5) << std::endl;
    

}

int findMax(int count, ...){

    int max, i , num;

    va_list ptr;
    va_start(ptr,count);
    max = va_arg(ptr,int); // int? 

    for(i = 1; i< count; i++){

        num = va_arg(ptr,int);
            // if(num > max){
            //     max = num;
            // }
            max = std::max(max,num);
            std::pair<int,int> pairInt  = std::minmax() //TODO: try to use min max with var_args
     }
    return max;
}