#include <stdio.h>
#include <stdlib.h>

typedef struct nodo
{
	int nbr;

	struct nodo *sig;
}Numero;

Numero *listanumeros(Numero *lista)
{
	lista = NULL;

	return lista;

}
Numero *agregarnumero(Numero *lista, int nbr)
{
	Numero *nuevonumero, *aux;
	nuevonumero = malloc(sizeof(Numero));
	nuevonumero->nbr=nbr;
	 
	nuevonumero->sig=NULL;
	if(lista == NULL){
		lista = nuevonumero;
	}
	else{

		aux = lista;
		while(aux->sig!=NULL){
			aux = aux->sig;
		}
		aux->sig = nuevonumero;
	}
	return lista; 

}
int ft_atoi(char *array)
{
	int x;
	int nbr;
	int sign;

	sign = 1;
	nbr =0;
	x = -1;
	 
	if(array[x] == '-')
	 	sign = -1;
		x++;
	while(array[x]>='0' && array[x]<='9' && array[x] != '\0')
	{
		nbr *=10;
		nbr += array[x]-'0';
		x++;
	}
	return(nbr * sign);
		
}

int		ft_wordlen(char *str)
{
	int i = 0;
	while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		++i;
	return (i);
}

char	*word_dupe(char *str)
{
	int i = 0;
	int len = ft_wordlen(str);
	char *word = malloc(sizeof(char) * (len + 1));
	word[len] = '\0';

	while (i < len)
	{
		word[i] = str[i];
		++i;
	}
	return (word);
}
void	fill_nbrs(char *str, Numero **lista)
{
	int word_index = 0;
	int nbr;

	char *string;
	while (*str == ' ' || *str == '\t' || *str == '\n')
		++str;
	while (*str != '\0')
	{	
		string = word_dupe(str);
		  
		while (*str != '\0' && *str != ' ' && *str != '\t' && *str != '\n')
			++str;
		while (*str == ' ' || *str == '\t' || *str == '\n')
			++str;
		nbr = ft_atoi(string);
		*lista = agregarnumero(*lista, nbr);		 
	}
		 
}
int main(int argc, char **argv)
{
	if(argc!=1)
	{
		int x;
		int i;
		int count;
		char *string;
		count = 0;
		i = 0;
		x = 1;
		Numero *lista;
		lista = listanumeros(lista);
		string = argv[1];
		 
		fill_nbrs(string, &lista);
		while(lista)
		{
			printf("%d\n", lista->nbr);
			lista = lista->sig;

		}		
	}
		 
	return 0;
}