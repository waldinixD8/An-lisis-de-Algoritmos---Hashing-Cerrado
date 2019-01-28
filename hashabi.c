#include "puente.h"

void hash_abierto(_nodo *tab[])
{
	int salir=1;
	
	int nu;
	int pos=0;
	int impri=0;
	int i=0;
	_nodo *lista;
	
	lista=NULL;

	while(salir!=0)
	{   
		limpiar();
		printf("introduzca un numero\n");
		scanf("%d",&nu);
		parar();
		limpiar();
        fflush(stdin);
		pos=funcion(nu);
		
		  lista = tab[pos];
		  lista = insert(nu,lista);
		  tab[pos]=lista;
		printf("si desea imprimir presione 1\n si desea continuar presione 0");
		scanf("%d",&impri);
		parar();
		limpiar();
		fflush(stdin);
		
		if(impri==1)
		{
			
			while(i<TAM)
			{
				
				imprimir2(tab[i],i);
				i++;
			}
			i=0;
		}
		
		
		printf("si desea continuar presione 1\n si desea salir presione 0");
		scanf("\n%d",&salir);
		fflush(stdin);
		parar();
	}


}