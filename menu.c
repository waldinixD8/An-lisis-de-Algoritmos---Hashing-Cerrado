#include "puente.h"

int main()
{
	int y;
	//_registro tab[TAM];
        y=0;
	while((y!=1)&&(y!=2))
	{
	printf("pulse 1 si de sea aplicar cerrado\n");
	printf("pulse 2 si de sea aplicar abierto\n");
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
