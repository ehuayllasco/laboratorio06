#ifndef _NODO_H_
#define _NODO_H_

template <class T>
class nodo
{
public: 
	nodo(T *, nodo<T> *);
	virtual void setObj(T *);
	virtual T *obtenerObj()const;
	virtual void setSiguiente(nodo<T> *);
	virtual nodo<T> *obtenerSiguiente()const;
	virtual ~nodo();
private:
	T *Obj;
	nodo<T> *Sig;

};
template <class T>
nodo<T>::nodo(T *obj, nodo<T> *sig):Obj(obj),Sig(sig){

}

template <class T>
void nodo<T>::setObj(T *obj){
	Obj=obj;
}

template <class T>
T *nodo<T>::obtenerObj()const{
	return Obj;
}


template <class T>
void nodo<T>::setSiguiente(nodo<T> *sig){
	Sig=sig;
}

template <class T>
nodo<T> *nodo<T>::obtenerSiguiente()const{
	return Sig;
}


template <class T>
nodo<T>::~nodo(){}
#endif //_NODO_H_