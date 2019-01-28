struct nodo
{
	int numero;
	struct nodo *sig;
};

typedef struct nodo _nodo;



extern _nodo *insert(int valor, _nodo *lista);
extern void imprimir2(_nodo *tab,int pos);
