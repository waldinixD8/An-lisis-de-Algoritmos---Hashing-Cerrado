#include "puente.h"



_nodo *insert(int valor, _nodo *lista)
{
	_nodo *nue;
	_nodo *aux;

	nue = (_nodo *) malloc(sizeof(_nodo));
	nue->numero = valor;
	nue->sig = NULL;

	if (lista==NULL)
		lista=nue;
	else
	{
		aux = lista;
		while (aux->sig != NULL)
			aux = aux->sig;
		aux->sig=nue;
	}

	return lista;

}




void imprimir2(_nodo *tab,int pos)
{
	
	_nodo *aux;
	aux=tab;
	printf("(%d)->",pos);
	while(aux!=NULL)
		{
			printf("%d->",aux->numero);
			aux=aux->sig;
			
		}
		printf("NULL\n\n");
	
	
}





