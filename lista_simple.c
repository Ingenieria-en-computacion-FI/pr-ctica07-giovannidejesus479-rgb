#include "lista_simple.h"

Nodo* crearNodo(void *dato, size_t size){
    Nodo *nuevo = (Nodo*)malloc(sizeof(Nodo));
    if(nuevo!=NULL){
        nuevo->siguiente = NULL;
        nuevo->dato = malloc(size);
        memcpy(nuevo->dato, dato, size);
    }
    return nuevo;
}


void borrarNodo(Nodo *n);
if(nuevo == NULL){
    free(dato);
    free(nuevo);
}

bool modificarNodo(Nodo *n, void *d, size_t size){//modificar el prototipo de la funcion
    if(n!=NULL){
        memcpy(n->dato, d, size);
    }
}


Lista* crearLista(){
    Lista *lista = (Lista*)malloc(sizeof(Lista));
    if(lista!=NULL){
        lista->head = NULL;
        lista->tail = NULL;
    }
    return lista;
}
int esVacia(Lista* lista){//cambiar a bool
    return lista->head == NULL;
}    

// Inserciones
void insertarInicio(Lista* lista, void* dato, size_t size){
    Nodo *nuevo = crearNodo(dato, size);
    nuevo->siguiente = lista->head;
    lista->head = nuevo;    
}

void insertarFinal(Lista* lista, void* dato, size_t size){
    Nodo *nuevo = crearNodo(dato, size);
    lista->tail = nuevo;
    nuevo->siguiente = NULL;
}

void insertarPorPosicion(Lista* lista, int pos){
    if(esVacia(lista)){

        return;

    }
    int total = 0;
    for(Nodo *tmp = lista->head; tmp != NULL; tmp = tmp->siguiente){
        total++;
    }
    if(pos==0){
        insertarInicio(lista, dato, size);
    }else if(pos==total){

    }else{

    }
}

void eliminarInicio(Lista *lista){

    void *tmp = lista->head;
    lista->head = head->siguiente;
    tmp->siguiente = NULL;
    borrarNodo(dato);
}

void eliminarFinal(Lista *lista){
    void *tmp = lista->tail, *tmp2 = lista->tail;
    for()
}