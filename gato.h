#ifndef GATO_H
#define GATO_H
#include <sstream>
using namespace std;
class gato{
public:
	gato(string,string);
	virtual string Tostring()const;
	virtual ~gato();
private:
	string Raza;
	string Color;
};
ostream& operator <<(ostream&, const gato&);

gato::gato(string raza, string color):Raza(raza),Color(color){}
string gato::Tostring()const{
	stringstream s;
	s<<"Raza---"<<Raza<<endl;
	s<<"Color--"<<Color<<endl;
	return s.str();
}
ostream& operator <<(ostream &salida, const gato &ga){
	return salida<<ga.Tostring()<<endl;
}
gato::~gato(){}
#endif