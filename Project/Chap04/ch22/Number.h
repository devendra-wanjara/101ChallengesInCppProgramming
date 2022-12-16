#ifndef NUMBER_H
#define NUMBER_H

class Number{

    private:
    int number;
    public:
    Number ();
    //Number(int i):integer(i){}; //do not implement in header file
    Number(int i);
    void setNumber(int);
    int getNumber();
};
#endif