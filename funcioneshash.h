
struct campo
{
	int valor;
	int lleno;
};

typedef struct campo _registro;

extern int funcion(int x);
extern int exploracuadratica(_registro tab[],int x,int nu);
extern int exploralineal(_registro tab[],int x,int nu);
extern int	colicion(_registro tab[],int c,int nu);
extern void reiniciartabla(_registro tab[]);
extern void imprimir(_registro tab[]);
extern int insertar(_registro tab[],int p,int nu);