#include "puente.h"


void limpiar()
{
#ifdef RUN_WINDOWS
system("clear");
#else 
system("clear");
#endif 
}

void parar()
{
#ifdef RUN_WINDOWS
system("read -p 'Presione alguna tecla\n' var");
#endif 
}

int leer()
{
	int x;
#ifdef RUN_WINDOWS
	{
       scanf("%i",&x);
	   fflush(stdin);
	   return x;
	}

#else 
	{
 scanf("%i",&x);
	   fflush(stdin);
	   return x;
	}
#endif 
}
