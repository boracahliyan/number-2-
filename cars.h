#include<iostream>
#include "cstring"
using namespace std;
class Cars
{
private:
    char* model;
    int ID;
    static int numberofcars;
public:
    Cars(char*, int);
    Cars(const Cars&);
    Cars operator=(const Cars&);
    ~Cars();
    static int getnumberofcars();
    friend ostream& operator<< (ostream&,Cars);
};

class big_one
{
public:
    big_one();
    big_one(const big_one& b);
    ~big_one();
    void printer() const;
    friend big_one &operator+(big_one &z,const big_one &b);

private:
    char* name;
    int number1;
    int number2;
    static int ozbir_counter;
};
