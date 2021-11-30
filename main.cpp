#include "Vector.hpp"

int main()
{
	int aux1[5] = {3, 535, 163, 14, 463};
	vector<int> v1(5, aux1);
	v1.afisare();
	cout << endl << "dupa sortare: " << endl; 
	v1.sortare();
	v1.afisare();
	
	double aux2[5] = {325, 124, 74, 523, 239};
	vector<double> v2(5, aux2);
	v2.afisare();
	cout << endl << "dupa sortare: " << endl; 
	v2.sortare();
	v2.afisare();
	
	nr_complex *aux3 = new nr_complex[5];
	aux3[0] = nr_complex(123, 253);
	aux3[1] = nr_complex(24, 532);
	aux3[2] = nr_complex(112,123);
	aux3[3] = nr_complex(3, 4);
	aux3[4] = nr_complex(523, 12);
	vector<nr_complex> comp(5, aux3);
	comp.afisare();
	comp.sortare();
	comp.afisare();
	
	Fractie *aux4 = new Fractie[10];
	aux4[0] = Fractie(23, 149);
	aux4[1] = Fractie(54, 53);
	aux4[2] = Fractie(13, 43);
	aux4[3] = Fractie(51, 13);
	aux4[4] = Fractie(15, 10);
	aux4[5] = Fractie(423, 7);
	aux4[6] = Fractie(4, 9);
	aux4[7] = Fractie(41, 53);
	aux4[8] = Fractie(5221, 2);
	aux4[9] = Fractie(2, 32);
	vector<Fractie> fr(10,aux4);
	fr.afisare();
	cout << endl << "dupa sortare:" << endl;
	fr.sortare();
	fr.afisare();
	
	return 0;
}
