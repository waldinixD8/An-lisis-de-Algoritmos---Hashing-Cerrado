#include "puente.h"

int main()
{
	int y;
	//_registro tab[TAM];
        y=0;
	while((y!=1)&&(y!=2))
	{
	printf("Pulse 1 si de sea aplicar hashing cerrado\n");
	printf("Pulse 2 si de sea aplicar hashing abierto\n");
	scanf("%d",&y);
	limpiar();
	}
	if(y==1)
	{
		reiniciartabla(tab);
        hash_cerrado(tab);
	}
	if(y==2)
	{
		
		hash_abierto(tabi);
	}

	return EXIT_SUCCESS;
}
