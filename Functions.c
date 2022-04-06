#include "Functions.h"
#include <stdio.h>

void getchain(int *chain, int n){
	int c = 0;

	for (int i = 0; i < n; i++){
		if (scanf_s("%d", &c) != 1) {
			fprintf(stderr, "Nie znaleziono zadnego znaku!\n"); \
			i--;
			continue;
		}
		
		if (c != '\n'){
			if (c == 0 || c == 1)
				chain[i] = c;
			else{
				printf("Znak nie jest 0 ani 1, prosze wprowadzic poprawny znak\n");
				i--;
			}
		}
	}
}

void printchain(int *chain, int n){
	printf("Wczytany lancuch to :\n");
	for (int i = 0; i < n; i++)
		printf("%d\t", chain[i]);
	printf("\n\n");

	system("pause");
}

void find_state(int* chain, int n, int *state){
	int qn = Q3;
	state[0] = Q3; /* Stan poczatkowy */

	for (int i = 0, j = 1; i < n; i++, j++){
		if (chain[i-1] == chain[i] && i > 0){
			state[j] = state[j-2];
			qn = state[j-2];
		}
		else if (qn == Q3){
			if (chain[i] == 1){
				qn = Q2;
				state[j] = qn;
			}
			if (chain[i] == 0){
				qn = Q1;
				state[j] = qn;
			}
		}
		else if (qn == Q1){
			if (chain[i] == 1){
				qn = Q0;
				state[j] = qn;
			}
			if (chain[i] == 0){
				qn = Q3;
				state[j] = qn;
			}
		}
		else if (qn == Q2){
			if (chain[i] == 1){
				qn = Q3;
				state[j] = qn;
			}
			if (chain[i] == 0){
				qn = Q0;
				state[j] = qn;
			}
		}
		else if (qn == Q0){
			if (chain[i] == 1){
				qn = Q1;
				state[j] = qn;
			}
			if (chain[i] == 0){
				qn = Q2;
				state[j] = qn;
			}
		}
	}
}

void print_path(int* state, int n){
	printf("Wykonane przejscia to :\n");
	printf("q3");
	for (int i = 1; i <= n; i++){
		if (state[i] == Q3)
			printf(" ----> q3");
		else if (state[i] == Q1)
			printf(" ----> q1");
		else if (state[i] == Q2)
			printf(" ----> q2");
		else if (state[i] == Q0)
			printf(" ----> q0");
	}
	printf("\n\n");
}

void if_accepted(int* state, int n){
	if (state[n] == Q0)
		printf("Lancuch zostal zaakceptowany.\n");
	else
		printf("Lancuch nie zostal zaakceptowany.\n\n");
}