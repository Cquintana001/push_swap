#include <stdio.h>
#include <stdlib.h>

typedef struct nodo
{
	char *titulo;

	struct nodo *sig;
}Libro;


Libro *listalibro(Libro *lista)
{
	lista = NULL;

	return lista;

}
Libro *agregarLibro(Libro *lista, char *titulo)
{
	Libro *nuevoLibro, *aux;
	nuevoLibro = malloc(sizeof(Libro));
	nuevoLibro->titulo=titulo;
	nuevoLibro->sig=NULL;
	if(lista == NULL){
		lista = nuevoLibro;
	}
	else{

		aux = lista;
		while(aux->sig!=NULL){
			aux = aux->sig;
		}
		aux->sig = nuevoLibro;
	}
	return lista; 

}
int main()
{
	Libro *Lista = listalibro(Lista);
	 
	Lista = agregarLibro(Lista, "Moby Dick");
	printf("%s", Lista->titulo);
	return 0;
}