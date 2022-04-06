#ifndef _FUNCTIONS_H_
#define _FUNCTIONS_H_

#define Q0 6
#define Q1 4
#define Q2 5
#define Q3 3

/* Funkcja wyswietla wprowadzony przez uzytkownika lancuch */
void printchain(int *chain, int n);

/* Funkcja pobiera i zapisuje lancuch */
void getchain(int *chain, int n);

/* Funkcja wyswietla sciezke przejsc miedzy stanami */
void print_path(int* state, int n);

/* Funkcja sprawdza przez jakie stany przechodzi maszyna odczytujac podany przez uzytkownika lancuch */
void find_state(int *chain, int n, int *state);

/* Funkcja sprawdza czy lancuch zostal zaakceptowany i wyswietla odpowiednia */
void if_accepted(int* state, int n);

#endif