#ifndef _DRAWING_H_
#define _DRAWING_H_

#define BLUE "\x1b[36m"
#define WHITE "\x1b[0m"
#define GREEN "\x1b[32m"
#define RED "\x1b[31m"
#define YELLOW "\x1b[33m"
 
#define Q0 6
#define Q1 4
#define Q2 5
#define Q3 3

/* Funkcje default -> q3 wyswietlaja schematy w roznych konfiguracjach */
void schematics_default(void);

void schematics_state_q0(void);

void schematics_state_q1(void);

void schematics_state_q2(void);

void schematics_state_q3(void);

/* Funckja wyswietla diagramy kolejnych przejsc */
void print_schematics(int* state, int n);

/* Funkcje q0 -> q3 wyswietlaja stan koncowy automatu*/
void end_state_q0(void);

void end_state_q1(void);

void end_state_q2(void);

void end_state_q3(void);

/* Funkcja wyswietla stan koncowy*/
void print_end(int* state, int n);

#endif