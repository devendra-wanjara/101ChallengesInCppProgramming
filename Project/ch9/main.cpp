#include<iostream>
#include<iomanip>
//#include<math> 

int getfactorial(int);
int gfactorial(int);
bool isCurious ( int num);

int main(){

    int ans = 0;
    ans = getfactorial(4);
    int bigNum = 1000;
    std::cout << "factorial of 4 = " << ans << std::endl;

       for( int i = 0; i <= bigNum; i++){
            bool curious = isCurious(i);
            if(curious)
                std::cout << i << std::endl;;
               

        }

}


int gfactorial(int num){

    int f = 0;
    if(num ==0)
        return 1;
    else
        f = num * getfactorial(num - 1);    

    return f;
}

int getfactorial(int num){
    
    int f = 0;

    if(num == 0)
        return 1;
    else 
        f = num * gfactorial(num - 1);
    return f;     
}

bool isCurious ( int num){

    int sum = 0;
    int digit = 0 ;
    int tNum = num;

    while(tNum !=0){
        digit = tNum % 10;
        sum = sum + getfactorial(digit);
        //std::cout <<"Sum = " <<sum << " Num= " <<num << std::endl;
        tNum = tNum / 10;
    }
        if( sum == num){
            return true;
        }else {
            return false;
        }
}
