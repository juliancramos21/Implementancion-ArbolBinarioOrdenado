#ifndef _NODO_BINARIO_H_
#define _NODO_BINARIO_H_

#include <string>

template <class T>
class NodoBinario{
    protected:
        T dato;
        Nodo <T>* hijoIzq;
        Nodo <T>* hijoDer;
    
    public: 
        NodoBinario();
        ~NodoBinario();
        T& getDato();
        NodoBinario<T>* getHijoIzq() const;
        NodoBinario<T>* getHijoDer() const;
        void adicionarDesc(T& valor);
        void eliminarDesc (T& valor);
        bool esHoja();
        
        void setHijoIzq(NodoBinario<T>* izq);
        void setHijoDer(NodoBinario<T>* der);
        
        
        Nodo<T>*buscar(T& valor);
        void setDato(T& d);
        void limpiarLista();
        
        
        int cantDesc();
        void preOrden();

        
        
};

#include "nodo.hxx"

#endif