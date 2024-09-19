
#ifndef _ARBOL_BINARIO_ORDENADO_H
#define _ARBOL_BINARIO_ORDENADO_H
#include "NodoBinario.h"
template< class T>
class ArbolBinario0rdenado {
protected:
NodoBinario<T> raiz
public:
ArbolBinarioOrd();
-ArbolBinario0rd();
bool esVacio(); T datoRaiz(); int altura();
int tamano();
bool insertar(T val);
bool eliminar (T val); bool buscar(T val); void preorden();
void inOrden();
void posOrden();
void nivelorden();
};

#include "ArbolBinarioOrdenado.hxx"
#endif