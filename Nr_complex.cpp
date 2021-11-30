#include"Nr_complex.hpp"
#include<math.h>

nr_complex::nr_complex(double a , double b )
{
    im = b;
    re = a;
}

nr_complex::nr_complex(const nr_complex &c)
{
    im = c.im;
    re = c.re;
}

nr_complex& nr_complex::operator=(const nr_complex &c)
{
    re = c.re;
    im = c.im;
    return *this;
}

ostream& operator<<(ostream& out, nr_complex& c)
{
    out << c.re << " + " << c.im << "*j" << " ";
    return out;
}

double nr_complex::getValoare() const
{
	double r;
	r = sqrt((this->re)*(this->re) + (this->im)*(this->im));
	return r;
}

bool nr_complex:: operator <(const nr_complex& c)
{
	if((*this).getValoare() < c.getValoare()) return true;
	else return false;
}
