#include <stdio.h>
#include <stdlib.h>
#include "item.h"
#include "catalogo.h"

int main (){
	item val;
	int n;
	char nome[20], cod[20];
	int ris;

	printf("Inserisci il nome del catalogo: ");
	scanf("%s", nome);
	catalogo c=newCatalogo(nome);
	
	printf("Quanti viaggi vuoi inserire? ");
	scanf("%d", &n);
	for (int i=0;i<n;i++){
		val=inputItem();
		addViaggio(c, val);
	}
	printf("\n\n\n\n");
	outputLib(c);	
	printf("\n\nInserire codice del viaggio da cercare: ");
	scanf("%s", cod);
	ris=searchViaggio(c, cod);
	if (ris>0)
		printf("Viaggio trovato\n");
	else
		printf("Viaggio non trovato\n");
}
