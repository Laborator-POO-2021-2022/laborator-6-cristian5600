#include "Vector.hpp"
#include "Fractie.hpp"
#include"Nr_complex.hpp"

template <class X>
vector<X>::vector(int dim, X *buf)
{
	this->dim = dim;
	this->buf = new X[dim];
	for(int i = 0; i < dim; i++)
	{
		this->buf[i] = buf[i];
	}
	
}

template <class X>
vector<X>& vector<X>::operator=(vector<X> &obj)
{	
	dim = obj.dim;
    buf = new X[dim];
	for(int i = 0; i < dim; i++)
	{
		buf[i] = obj.buf[i];
	}
    return *this;
}

template <class X>
void vector<X>::afisare()
{
	cout << "Dimensiune: " << dim << endl;
	for(int i = 0; i < dim; i++)
	{
		cout << buf[i] << " ";
	}
	cout<< endl;
}

template <class X>
void vector<X>::sortare()
{
	X temp;
	for (int i = 0; i < dim; i++)
		for(int j = i + 1; j < dim; j++)
			if(buf[i] < buf[j]) 
			{
				temp = buf[i];
				buf[i] = buf[j];
				buf[j] = temp;
			}
}

template <class X>
vector<X>::~vector()
{
	delete []buf;
}

static void test()
{
	int aux1[5] = { 1, 2, 3, 4, 5};
	vector<int> v1(5, aux1);
	v1.afisare();
	
	double aux2[5] = { 1, 2, 3, 4, 5};
	vector<double> v2(5, aux2);
	v2.afisare();
	
	nr_complex *aux3 = new nr_complex[5];
	aux3[0] = nr_complex(1, 1);
	aux3[1] = nr_complex(2, 2);
	aux3[2] = nr_complex(3,3);
	aux3[3] = nr_complex(4, 4);
	aux3[4] = nr_complex(5, 5);

	vector<nr_complex> comp(5, aux3);
	comp.afisare();
	
	Fractie *aux4 = new Fractie[5];
	aux4[0] = Fractie(14, 43);
	aux4[1] = Fractie(352, 23);
	aux4[2] = Fractie(142, 214);
	aux4[3] = Fractie(543, 18);
	aux4[4] = Fractie(234, 230);
	
	vector<Fractie> fr(5,aux4);
	fr.afisare();
	
	v1.sortare();
	v2.sortare();
	comp.sortare();
	fr.sortare();
	 
}

