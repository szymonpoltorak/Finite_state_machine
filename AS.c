#include <stdio.h>
#include <stdlib.h>
#include "Functions.h"
#include "Drawing.h"


int main(void){
	int n = 0; /* Dlugosc lancucha */

	printf("Diagram przejsc przed wykonaniem : \n");
	schematics_default ();
	printf("Na zielono zaznaczono stan akceptowalny, a na niebiesko stan poczatkowy\n");
	printf("Na czerwono bedzie zaznaczany stan obecny, a na zolto stan koncowy\n");
	printf("--------------------------\n");

	printf("Podaj dlugosc lancucha :  ");
	if (scanf_s("%d", &n) != 1) {
		fprintf(stderr, "Nie podano dlugosci lancucha!!\n");
		exit(EXIT_FAILURE);
	}

	int* chain = (int*) malloc(n * sizeof *chain);
	int* state = (int*) malloc(n * sizeof * state);

	printf("Podaj lancuch :\n");
	getchain(chain, n);
	printchain(chain, n);
	
	find_state(chain, n, state);
	system("cls");
	print_path(state, n);
	printf("Diagram przejsc :\n");
	system("pause");

	print_schematics(state, n);

	print_end(state, n);
	system("cls");
	if_accepted(state, n);

	return EXIT_SUCCESS;
}