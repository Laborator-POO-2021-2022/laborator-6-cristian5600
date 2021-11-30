#include "Fractie.hpp"

Fractie::Fractie(int aa, int bb)
{
	a = aa; //numarator
	b = bb; //numitor
}

Fractie::Fractie(const Fractie &aux)
{
    a = aux.a;
    b = aux.b;
}

Fractie& Fractie::operator=(const Fractie &aux)
{	
	a = aux.a;
    b = aux.b;
    return *this;
}

double Fractie::getValoare() const
{	
	double aux;
    if(b != 0)
    	{
    		aux=(double)a/b;
        	return aux;		
		}
        
    else return 0;
}

bool Fractie:: operator <(const Fractie& aux){
	if((*this).getValoare() < aux.getValoare()) return true;
	else return false;
}

ostream& operator<<(ostream& out, const Fractie& aux)
{
    if(aux.b != 0)
        out << aux.a << "/" << aux.b << " ";
    else
        out << " Error !!! " << endl;
    return out;
}

