#include "puente.h"


int funcion(int x)
{ 
   return x%TAM; 
}


int exploracuadratica(_registro tab[],int x,int nu)
{
	int y=1;
	int pos;
        pos=-1;
		
	while ((pos<TAM) && (pos!=x))
	{
		pos=x+(y*y);
		if(pos==x)
		  return 0;
		else 
		{       
			if (pos>=TAM)
			pos=pos%TAM;
			
			if (tab[pos].lleno==0)
			{
				tab[pos].valor=nu;
                tab[pos].lleno=1;
				return 1;
			}
		
			y=y+1;			
			
		}

	}
   return 0;
}
int exploralineal(_registro tab[],int x,int nu)
{
	int pos=-1;
	int y=1;
   
	while((pos<TAM) && (pos!=x))
	{
				
		        pos=x+y;
				if(pos==x)
		        return 0;
				if(pos==TAM)
				{   
				    pos=0;
				}
				
			
				if (tab[pos].lleno==0)
				{
				tab[pos].valor=nu;
                tab[pos].lleno=1;
				return 1;
				}
				
				y=y+1;	
				if(pos==0)
					pos=11;
		
		
	}
	return 0;
} 
int colicion(_registro tab[],int c,int nu)
{
   int y=0;
	    y=exploracuadratica(tab,c,nu);
        if(y==0)
		{
			
			y=exploralineal(tab,c,nu);
		}
		if(y==0)
		{  
		   y=exploralineal(tab,0,nu);
		}

	if(y==0)
        
		 return 0;
	return 1;
   
}
void reiniciartabla(_registro tab[])
{  
	int i;
	i=0;
		while (i<=TAM)
		{
			tab[i].lleno=0;
                        i++;
		}

}
void imprimir(_registro tab[])
{
	int i=0;
	
	while(i!=TAM)
	{
		printf("(%d)\n",tab[i].valor);
		
		i=i+1;
	} 
}
int insertar(_registro tab[],int p,int nu)
{
	if(tab[p].lleno==0)
	{
		tab[p].valor=nu;
		tab[p].lleno=1;
		return 0;
	}
	else
		return 1;
}
