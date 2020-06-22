#ifndef LISTAENLAZADA_H
#define LISTAENLAZADA_H
#include "nodo.h"
template <class T>
class LiztaEnlazada{
private:
		nodo<T> *head;
public:
	LiztaEnlazada();
	bool agregarObj(T *);
	class iteradorLista;
		iteradorLista begin() 
       	 { return iteradorLista(head);} 
    
    	iteradorLista end() 
       	 { return iteradorLista(NULL); }
	class iteradorLista{
	private: 
		nodo<T>* Cursor;

	public:
		iteradorLista(nodo<T> *obj){
			Cursor=obj;
		}
		bool masElementos(){
			return (Cursor != NULL );
		}
		T *obtenerObj(){
			T *e;
			if(masElementos()){
				e=Cursor->obtenerObj();
				Cursor=Cursor->obtenerSiguiente();
				return e;
			}
			return NULL;
		}
		bool operator!=(const iteradorLista& iterator) { return Cursor != iterator.Cursor;}
		iteradorLista operator++()
                    { 
                        if (Cursor) 
                            Cursor = Cursor->obtenerSiguiente(); 
                        return *this; 
                    } 

        iteradorLista operator++(int) 
                    { 
                        iteradorLista iterator = *this; 
                        ++*this; 
                        return iterator; 
                    }
	  
	
	};	
	virtual ~LiztaEnlazada();
};
template <class T>
LiztaEnlazada<T>::LiztaEnlazada(){
	head=NULL;
}
template <class T>
bool LiztaEnlazada<T>::agregarObj(T *obj){
	head=new nodo<T>(obj,head);
	return true;
}

template <class T>
LiztaEnlazada<T>::~LiztaEnlazada(){
	nodo<T> *p=head;
	nodo<T> *aux;
	while(p!=NULL){
		aux=p->obtenerSiguiente();
		delete p;
		p=aux;
	}
	head=NULL;
}

#endif