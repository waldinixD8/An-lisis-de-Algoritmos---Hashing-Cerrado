#include "puente.h"

void hash_cerrado(_registro tab[])
{
	int posi=0;
	int salir=1;
	int numero,impri;
	int coli=0;
	int full=0;
        numero=0;
	while(salir!=0)
	{   
		limpiar();
		printf("introduzca un numero\n");
		scanf("%d",&numero);
                fflush(stdin);
		parar();
		limpiar();
		posi=funcion(numero);
		coli=insertar(tab,posi,numero);

		if(coli==1)
		{
			full=colicion(tab,posi,numero);
			if (full==0)
			{
				printf("\nEl vector ya esta lleno en su totalidad");
				system("pause");
				salir=0;
			}
			else
			{
				printf("Si desea imprimir el vector pulse 1\nsino pulse cualquier numero\n");
				scanf("%d",&impri);
				fflush(stdin);
				parar();
				if(impri==1)
				imprimir(tab);
				parar();
				limpiar();
				printf("Si desea salir pulse:0\n sino pulse:1\n");
				scanf("%d",&salir);
				parar();
				fflush(stdin);
			}

		}
		else
		{
		printf("Si desea imprimir el vector pulse 1\n");
		scanf("%d",&impri);
		fflush(stdin);
		if(impri==1)
		imprimir(tab);
		parar();
		limpiar();
		printf("Si desea salir pulse 0 sino pulse 1\n");
		scanf("%d",&salir);		
		fflush(stdin);
		parar();
		}
	}
}
