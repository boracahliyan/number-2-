#include"cars.h"

ostream& operator<<(ostream& os, Cars c)
{
	os << "Model:" << c.model << ", ID:" << c.ID;
	return os;
}

int main()
{
	Cars c1("Tofas Sahin", 1111), c2("Suzuki Alto", 1112),c3("Renault Megane",1113);

	cout << c1 << endl;
	cout << c2 << endl;
	cout << c3 << endl;

	cout << "Number of carsssss:" << Cars::getnumberofcars() << endl;


	cout <<endl<<endl<< "------------------------------------------------------------------------------------" << endl;

	big_one deneme1;

	deneme1.printer();

	big_one deneme2 = deneme1;

	deneme2.printer();

    deneme2 + deneme1;

    deneme2.printer();



	return 0;
}