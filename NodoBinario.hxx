#include "NodoBinario.h"

template <class T>
NodoBinario<T>::NodoBinario() : hijoIzq(nullptr), hijoDer(nullptr) {}

template <class T>
NodoBinario<T>::~NodoBinario() {
}

template <class T>
T& NodoBinario<T>::getDato() {
    return dato; 
}

template <class T>
NodoBinario<T>* NodoBinario<T>::getHijoIzq() const {
    return hijoIzq; 
}

template <class T>
NodoBinario<T>* NodoBinario<T>::getHijoDer() const {
    return hijoDer; 
}

template <class T>
void NodoBinario<T>::adicionarDesc(T& valor) {
    
}

template <class T>
void NodoBinario<T>::eliminarDesc(T& valor) {
}

template <class T>
bool NodoBinario<T>::esHoja() {
    return hijoIzq == nullptr && hijoDer == nullptr; // Retorna true si es hoja
}