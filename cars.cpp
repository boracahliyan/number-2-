#include"cars.h"

int Cars::numberofcars = 0;
int big_one::ozbir_counter = 0;

Cars::Cars(char* str, int n)
{
    model = new char[(strlen(str) + 1)];
    strcpy(model, str);
    ID = n;
    numberofcars++;
}

Cars::Cars(const Cars& c)
{
    model = new char[strlen(c.model) + 1];
    strcpy(model, c.model);
    ID = c.ID;
    numberofcars++;
}

Cars Cars::operator=(const Cars& c)
{
    delete[]model;
    model = new char[strlen(c.model) + 1];
    strcpy(model, c.model);
    ID = c.ID;
    return (*this);
}

int Cars::getnumberofcars() { return numberofcars; }

Cars::~Cars()
{
    delete[]model;
    numberofcars--;
}




big_one::big_one()
{

    number1 = 0;
    number2 = 0;
    name = new char[30];
    strcpy(name, "naber patron");
    ozbir_counter++;


}

big_one::big_one(const big_one& b) {
    this->name = new char[30];
    strcpy(name, "yapma be patron");
    number1 = 1;
    number2 = 2;
    cout<<"copy be yarak"<<endl;
}

big_one::~big_one()
{


    delete[] name;

    cout << "I am working yarak" << endl;


}

void big_one::printer() const {


    cout << "Name -> " << name << " ,Number1 -> " << number1 << " ,Number2 -> " << number2 <<" ,31 -> "<<ozbir_counter<< endl;


}

big_one &operator+( big_one &z,const big_one &b) {
    delete[]z.name;
    z.name = new char[30];
    strcpy(z.name,"oldu mu patron?");
    z.number1 = b.number1;
    z.number2 = b.number2;
    z.ozbir_counter += 1;

    return z;

}