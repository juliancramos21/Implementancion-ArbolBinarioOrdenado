#include "ArbolBinarioOrdenado.h"

template <class T>
ArbolBinarioOrdenado<T>::ArbolBinarioOrdenado() {
    raiz = nullptr;
}

template <class T>
ArbolBinarioOrdenado<T>::~ArbolBinarioOrdenado() {
    if(raiz!=nullptr){
        delete raiz;
        raiz=nullptr;
    }
    
}

template <class T>
bool ArbolBinarioOrdenado<T>::esVacio() {
    return raiz == nullptr;
}

template <class T>
T ArbolBinarioOrdenado<T>::datoRaiz() {
    
}

template <class T>
int ArbolBinarioOrdenado<T>::altura() {
    return 0; // Valor por defecto
}

template <class T>
int ArbolBinarioOrdenado<T>::tamano() {
    return 0; // Valor por defecto
}

template <class T>
bool ArbolBinarioOrdenado<T>::insertar(T val) {
    return false; // Implementación vacía
}

template <class T>
bool ArbolBinarioOrdenado<T>::eliminar(T val) {
    return false; // Implementación vacía
}

template <class T>
bool ArbolBinarioOrdenado<T>::buscar(T val) {
    return false; // Implementación vacía
}

template <class T>
void ArbolBinarioOrdenado<T>::preOrden() {
    // Implementación vacía
}

template <class T>
void ArbolBinarioOrdenado<T>::inOrden() {
    // Implementación vacía
}

template <class T>
void ArbolBinarioOrdenado<T>::posOrden() {
    // Implementación vacía
}

template <class T>
void ArbolBinarioOrdenado<T>::nivelOrden() {
    // Implementación vacía
}
