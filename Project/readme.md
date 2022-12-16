
### 
    header can have class declaration with prototypes
    we can but should not have any implementation in headers 

### Class & Object 
    Object can be instantiated in following two ways 
    1. Class n = Class(); // cleans up automatically 
    2. Class* n = new Class(); // Dynamic way need to call delete afer 

### To link static lib 
    g++ main.cpp -L. libstaticNumLib.a -o test

### To create a Dynamic lib 
    g++ -c Number.cpp -o libDynamic.dll // generates dll 
    g++ main.cpp  -L. libDynamic.dll  -o test // generates executable

