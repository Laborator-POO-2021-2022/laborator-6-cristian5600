#ifndef NR_COMPLEX_HPP
#define NR_COMPLEX_HPP

#include <iostream>

using namespace std;

class nr_complex
{
private:
	double re; 
	double im; 

public:
	
	nr_complex(double real=0,double imaginar=0); 
	nr_complex(const nr_complex&);
	nr_complex & operator=(const nr_complex&);
	friend ostream& operator<<(ostream&, nr_complex&);
	bool operator <(const nr_complex&);
	double getValoare() const;
	
};

#endif
