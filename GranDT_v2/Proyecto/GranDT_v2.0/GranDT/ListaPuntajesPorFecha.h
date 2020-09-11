
/* TDA Lista
 * Implementaci�n Simplemente Enlazada
 * Archivo : ListaPuntajesPorFecha.h
 * Versi�n : 1.1
 */



#ifndef __LISTAPUNTAJESPORFECHA_H__
#define __LISTAPUNTAJESPORFECHA_H__
#include <string>
#ifndef NULL
#define NULL      0
#endif




/******************************************************************************/
/* Definiciones de Tipos de Datos */
/*--------------------------------*/

/* tipo enumerado para realizar comparaciones */

enum ResultadoComparacionPuntajesPorFecha {
  MAYORPUNTAJEPORFECHA,
  IGUALPUNTAJEPORFECHA,
  MENORPUNTAJEPORFECHA,
};

/* Tipo de Informacion que esta contenida en los Nodos de la
   Lista, identificada como PuntajesTotal. */

typedef struct{
int posicion=0;
int idEquipo;
std::string nombreEquipo;
std::string nombreJugador;
float puntaje;
}PuntajesPorFecha;




/* Tipo de Estructura de los Nodos de la Lista. */
struct NodoListaPuntajesPorFecha {
    PuntajesPorFecha dato; // dato almacenado
    NodoListaPuntajesPorFecha* sgte; // puntero al siguiente
};

/* Tipo de Puntero a los Nodos de la Lista, el cual se usa para recorrer
   la Lista y acceder a sus Datos. */
typedef NodoListaPuntajesPorFecha* PtrNodoListaPuntajesPorFecha;


/* Tipo de Estructura de la Lista */
struct ListaPuntajesPorFecha{
    PtrNodoListaPuntajesPorFecha primero;      // puntero al primer nodo de la lista
};


/******************************************************************************/
/* Definicion de Primitivas */
/*--------------------------*/

/*
  pre : la lista no debe haber sido creada.
  post: lista queda creada y preparada para ser usada.

  lista : estructura de datos a ser creado.
*/
void crearListaPuntajesPorFecha(ListaPuntajesPorFecha &lista);

/*----------------------------------------------------------------------------*/
/*
  pre : lista Creada con crearLista().
  post: Devuelve true si lista esta vacia, sino devuelve false.

  lista : lista sobre la cual se invoca la primitiva.
*/
bool listaVaciaPuntajesPorFecha(ListaPuntajesPorFecha &lista);

/*----------------------------------------------------------------------------*/
/*
  pre : lista Creada con crearLista().
  post: devuelve la representacion de lo Siguiente al �ltimo Nodo de la lista,
        o sea el valor Null, que en esta implementacion representa el final de
        la lista.

  return representaci�n del finJugador de la lista.
*/
PtrNodoListaPuntajesPorFecha finPuntajesPorFecha();

/*----------------------------------------------------------------------------*/
/*
  pre : lista Creada con crearLista().
  post: devuelve el puntero al primer elemento de la lista, o devuelve finJugador() si
        esta vacia

  lista : lista sobre la cual se invoca la primitiva.
  return puntero al primer nodo.
*/
PtrNodoListaPuntajesPorFecha primero(ListaPuntajesPorFecha &lista);

/*----------------------------------------------------------------------------*/
/*
  pre : lista Creada con crearLista().
  post: devuelve el puntero al nodo proximo del apuntado, o devuelve finJugador() si
        ptrNodo apuntaba a finJugador() o si lista esta vacia.

  lista : lista sobre la cual se invoca la primitiva.
  prtNodo : puntero al nodo a partir del cual se requiere el siguiente.
  return puntero al nodo siguiente.
*/
PtrNodoListaPuntajesPorFecha siguiente(ListaPuntajesPorFecha &lista, PtrNodoListaPuntajesPorFecha ptrNodo);

/*----------------------------------------------------------------------------*/
/*
  pre : lista Creada con crearLista().
        ptrNodo es un puntero a un nodo de lista.
  post: devuelve el puntero al nodo anterior del apuntado, o devuelve finJugador() si
        ptrNodo apuntaba al primero o si lista esta vacia.

  lista : lista sobre la cual se invoca la primitiva.
  prtNodo : puntero al nodo a partir del cual se requiere el anterior.
  return puntero al nodo anterior.
*/
PtrNodoListaPuntajesPorFecha anterior(ListaPuntajesPorFecha &lista, PtrNodoListaPuntajesPorFecha ptrNodo);

/*----------------------------------------------------------------------------*/
/*
  pre : lista creada con crearLista().
  post: devuelve el puntero al ultimo nodo de la lista, o devuelve finJugador() si
        si lista esta vacia.

  lista : lista sobre la cual se invoca la primitiva.
  return puntero al �ltimo nodo.
*/
PtrNodoListaPuntajesPorFecha ultimo(ListaPuntajesPorFecha &lista);

/*----------------------------------------------------------------------------*/
/*
  pre : lista creada con crearLista().
  post: agrega un nodo nuevo al principio de la lista con el dato proporcionado
        y devuelve un puntero a ese elemento.

  lista : lista sobre la cual se invoca la primitiva.
  dato : elemento a adicionar al principio de la lista.
  return puntero al nodo adicionado.
*/
PtrNodoListaPuntajesPorFecha adicionarPrincipio(ListaPuntajesPorFecha &lista, PuntajesPorFecha puntajes);

/*----------------------------------------------------------------------------*/
/*
  pre : lista creada con crearLista().
  post: agrega un nodo despues del apuntado por ptrNodo con el dato
        proporcionado y devuelve un puntero apuntado al elemento insertado.
        Si la lista esta vac�a agrega un nodo al principio de esta y devuelve
        un puntero al nodo insertado. Si ptrNodo apunta a finJugador() no inserta
        nada y devuelve finJugador().

  lista : lista sobre la cual se invoca la primitiva.
  dato : elemento a adicionar.
  ptrNodo : puntero al nodo despu�s del cual se quiere adicionar el dato.
  return puntero al nodo adicionado.
*/
PtrNodoListaPuntajesPorFecha adicionarDespues(ListaPuntajesPorFecha &lista, PuntajesPorFecha puntajes, PtrNodoListaPuntajesPorFecha ptrNodo);

/*----------------------------------------------------------------------------*/
/*
  pre : lista creada con crearLista().
  post: agrega un nodo al final de la lista con el dato proporcionado y devuelve
        un puntero al nodo insertado.

  lista : lista sobre la cual se invoca la primitiva.
  dato : elemento a adicionar al final de la lista.
  return puntero al nodo adicionado.
*/
PtrNodoListaPuntajesPorFecha adicionarFinal(ListaPuntajesPorFecha &lista, PuntajesPorFecha puntajes);

/*----------------------------------------------------------------------------*/
/*
  pre : lista creada con crearLista().
  post: agrega un nodo con el dato proporcionado antes del apuntado por ptrNodo
        y devuelve un puntero al nodo insertado. Si la lista esta vacia no
        inserta nada y devuelve finJugador(). Si ptrNodo apunta al primero, el nodo
        insertado sera el nuevo primero.

  lista : lista sobre la cual se invoca la primitiva.
  dato : elemento a adicionar.
  ptrNodo : puntero al nodo antes del cual se quiere adicionar el dato.
  return puntero al nodo adicionado.
*/
PtrNodoListaPuntajesPorFecha adicionarAntes(ListaPuntajesPorFecha &lista, PuntajesPorFecha puntajes, PtrNodoListaPuntajesPorFecha ptrNodo);

/*----------------------------------------------------------------------------*/
/*
  pre : lista creada con crearLista(), no vacia. ptrNodo es distinto de finJugador().
  post: coloca el dato proporcionado en el nodo apuntado por ptrNodo.

  lista : lista sobre la cual se invoca la primitiva.
  dato : elemento a colocar.
  ptrNodo : puntero al nodo del cual se quiere colocar el dato.
*/
void colocarDatoPuntajesPorFecha(ListaPuntajesPorFecha &lista, PuntajesPorFecha&puntajes, PtrNodoListaPuntajesPorFecha ptrNodo);

/*----------------------------------------------------------------------------*/
/*
  pre : lista creada con crearLista(), no vacia. ptrNodo es distinto de finJugador().
  post: devuelve el dato del nodo apuntado por ptrNodo.

  lista : lista sobre la cual se invoca la primitiva.
  dato : elemento obtenido.
  ptrNodo : puntero al nodo del cual se quiere obtener el dato.
*/
void obtenerDatoPuntajesPorFecha(ListaPuntajesPorFecha &lista, PuntajesPorFecha &puntajes, PtrNodoListaPuntajesPorFecha ptrNodo);

/*----------------------------------------------------------------------------*/
/*
  pre : lista creada con crearLista().
  post: elimina el nodo apuntado por ptrNodo. No realiza accion si la lista
        esta vacia o si ptrNodo apunta a finJugador().

  lista : lista sobre la cual se invoca la primitiva.
  ptrNodo : puntero al nodo que se desea eliminar.
*/
void eliminarNodoPuntajesPorFecha(ListaPuntajesPorFecha &lista, PtrNodoListaPuntajesPorFecha ptrNodo);

/*----------------------------------------------------------------------------*/
/*
  pre : lista creada con crearLista().
  post: si la lista no esta vacia, elimina su nodo primero, sino no realiza
        accion alguna.

  lista : lista sobre la cual se invoca la primitiva.
*/
void eliminarNodoPrimeroPuntajesPorFecha(ListaPuntajesPorFecha &lista);

/*----------------------------------------------------------------------------*/
/*
  pre : lista creada con crearLista().
  post: si la lista no esta vacia elimina su nodo ultimo,
        sino no realiza accion.

  lista : lista sobre la cual se invoca la primitiva.
*/
void eliminarNodoUltimoPuntajesPorFecha(ListaPuntajesPorFecha &lista);

/*----------------------------------------------------------------------------*/
/*
  pre : lista creada con crearLista().
  post: elimina todos los Nodos de la lista quedando destruida e inhabilitada
        para su uso.

  lista : lista sobre la cual se invoca la primitiva.
*/
void eliminarListaPuntajesPorFecha(ListaPuntajesPorFecha &lista);


/******************************************************************************/
/* Definici�n de Operaciones Adicionales */
/*---------------------------------------*/

/*
  pre : lista fue creada con crearLista().
  post: si el dato se encuentra en la lista, devuelve el puntero al primer nodo
        que lo contiene. Si el dato no se encuentra en la lista devuelve finJugador().

  lista : lista sobre la cual se invoca la primitiva.
  dato : elemento a localizar.
  return puntero al nodo localizado o finJugador().
*/
PtrNodoListaPuntajesPorFecha localizarDato(ListaPuntajesPorFecha &lista , PuntajesPorFecha puntajes);

/*----------------------------------------------------------------------------*/
/*
  pre : lista fue creada con crearLista() y cargada con datos ordenados de
        menor a mayor respecto del sentido progresivo.
  post: agrega a la lista el dato manteniendo el orden pero con multiples
        valores iguales y devuelve un puntero al nodo insertado.

  lista : lista sobre la cual se invoca la primitiva.
  dato : elemento a insertar.
  return puntero al nodo insertado.
*/
PtrNodoListaPuntajesPorFecha insertarDato(ListaPuntajesPorFecha &lista, PuntajesPorFecha puntajes);

/*----------------------------------------------------------------------------*/
/*
  pre : la lista fue creada con crearLista().
  post : elimina el dato de la lista, si el mismo se encuentra.

  lista : lista sobre la cual se invoca la primitiva.
  dato : elemento a eliminar.
*/
void eliminarDatoPuntajesPorFecha(ListaPuntajesPorFecha &lista, PuntajesPorFecha puntajes);

/*----------------------------------------------------------------------------*/
/*
  pre : la lista fue creada con crearLista().
  post : reordena la lista.

  lista : lista sobre la cual se invoca la primitiva.
*/
void reordenarPuntajesPorFecha(ListaPuntajesPorFecha &lista);

/*----------------------------------------------------------------------------*/
/*
  pre : la lista fue creada con crearLista().
  post : devuelve la cantidad de datos que tiene la lista.

  lista : lista sobre la cual se invoca la primitiva.
*/
int longitudPuntajesPorFecha(ListaPuntajesPorFecha &lista);

#endif

