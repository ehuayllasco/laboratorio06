#include <iostream>
#include "ListaEnlazada.h"
#include "gato.h"
#include <vector>
#include <iterator>
using namespace std;
int main(){
	LiztaEnlazada<gato> *List= new LiztaEnlazada<gato>;
	gato *ga1 = new gato("no se","blanco");
	gato *ga2 = new gato("no se1","blanco1");
	gato *ga3 = new gato("no se2","blanco2");
	gato *ga4 = new gato("no se3","blanco3");
	gato *ga5 = new gato("no se4","blanco4");
	List->agregarObj(ga1);
	List->agregarObj(ga2);
	List->agregarObj(ga3);
	List->agregarObj(ga4);
	List->agregarObj(ga5);
	gato *G;

	cout << "Impresion mediante el iterador" << endl; 
    for ( LiztaEnlazada<gato>::iteradorLista iterator = List->begin(); iterator != List->end(); iterator++) 
    { 
    	G=iterator.obtenerObj();
		cout<<G->Tostring()<<endl;
    } 
	
	cout << "Impresion mediante de la clase iterador usan metodos BEGIN y END" << endl;
	//delete it;
	std::vector<gato> v;
	v.push_back(*ga1);
	v.push_back(*ga2);
	v.push_back(*ga3);
	v.push_back(*ga4);
	v.push_back(*ga5);
	cout << "Impresion mediante el iterador de la libreria" << endl; 
	std::vector<gato>::iterator itr;
    for (itr = v.begin(); itr != v.end(); itr++) 
    { 
        cout << *itr << " "<<endl; 
    }
	return 0;
}