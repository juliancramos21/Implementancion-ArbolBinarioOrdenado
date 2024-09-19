#ifndef _ARBOL_BINARIO_ORDENADO_H
#define _ARBOL_BINARIO_ORDENADO_H

#include "NodoBinario.h"

template<class T>
class ArbolBinarioOrdenado {
protected:
    NodoBinario<T>* raiz; // Cambiar a puntero
public:
    ArbolBinarioOrdenado();
    ~ArbolBinarioOrdenado(); // Corregir el destructor
    bool esVacio(); 
    T datoRaiz(); 
    int altura();
    int tamano();
    bool insertar(T val);
    bool eliminar(T val); 
    bool buscar(T val); 
    void preOrden();
    void inOrden();
    void posOrden();
    void nivelOrden();
};

#include "ArbolBinarioOrdenado.hxx"
#endif
