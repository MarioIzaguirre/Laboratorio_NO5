#pragma once
#include "Pokemon.h"
#include <string>
#include "orden.h"
using namespace std;


void swap(Pokemon* p1, Pokemon* p2) {
	Pokemon aux = *p1;
	*p1 = *p2;
	*p2 = aux;
}
int Gen_divquick(Pokemon lista[], int start, int end) {
	Pokemon aux;
	int pivote, mayor, menor;
	pivote = lista[start].generacion;
	menor = start;
	mayor = end;
	while (menor < mayor)
	{
		while (lista[mayor].generacion > pivote)
		{
			mayor--;
		}
		while ((menor < mayor) && (lista[menor].generacion <= pivote))
		{
			menor++;
		}
		if (menor < mayor)
		{
			aux = lista[menor];
			lista[menor] = lista[mayor];
			lista[mayor] = aux;
		}
	}
	aux = lista[mayor];
	lista[mayor] = lista[start];
	lista[start] = aux;

	return mayor;
}

int Num_divquick(Pokemon lista[], int start, int end) {
	Pokemon aux;
	int pivote, mayor, menor;
	pivote = lista[start].numero;
	menor = start;
	mayor = end;
	while (menor < mayor)
	{
		while (lista[mayor].numero > pivote)
		{
			mayor--;
		}
		while ((menor < mayor) && (lista[menor].numero <= pivote))
		{
			menor++;
		}
		if (menor < mayor)
		{
			aux = lista[menor];
			lista[menor] = lista[mayor];
			lista[mayor] = aux;
		}
	}
	aux = lista[mayor];
	lista[mayor] = lista[start];
	lista[start] = aux;

	return mayor;
}

void Gen_quickSort(Pokemon lista[], int start, int end) {
	int pivote;
	if (start < end)
	{
		pivote = Gen_divquick(lista, start, end);
		Gen_quickSort(lista, start, pivote - 1);
		Gen_quickSort(lista, pivote + 1, end);
	}
}
void Num_quickSort(Pokemon lista[], int start, int end) {
	int pivote;
	if (start < end)
	{
		pivote = Num_divquick(lista, start, end);
		Num_quickSort(lista, start, pivote - 1);
		Num_quickSort(lista, pivote + 1, end);
	}
}
void Gen_selectionSort(Pokemon lista[], int n) {
	int i, j, cont;
	for (i = 0; i < n; i++)
	{
		cont = i;
		for (j = i + 1; j < n; j++)
		{
			if (lista[j].generacion < lista[cont].generacion)
			{
				cont = j;
			}
		}
		swap(&lista[cont], &lista[i]);
	}
}
void Num_selectionSort(Pokemon lista[], int n) {
	int i, j, cont;
	for (i = 0; i < n; i++)
	{
		cont = i;
		for (j = i + 1; j < n; j++)
		{
			if (lista[j].numero < lista[cont].numero)
			{
				cont = j;
			}
		}
		swap(&lista[cont], &lista[i]);
	}
}
void Gen_shellSort(Pokemon lista[], int n) {
	int i, j, k, intervalo;
	intervalo = n / 2;
	Pokemon temp;
	while (intervalo > 0)
	{
		for (i = intervalo; i <= n; i++) {
			j = i - intervalo;
			while (j >= 0) {
				k = j + intervalo;
				if (lista[j].generacion <= lista[k].generacion) {
					j--;
				}
				else {
					temp = lista[j];
					lista[j] = lista[k];
					lista[k] = temp;
					j -= intervalo;
				}
			}
		}
		intervalo = intervalo / 2;
	}
}
void Num_shellSort(Pokemon lista[], int n) {
	int i, j, k, intervalo;
	intervalo = n / 2;
	Pokemon temp;
	while (intervalo > 0)
	{
		for (i = intervalo; i <= n; i++) {
			j = i - intervalo;
			while (j >= 0) {
				k = j + intervalo;
				if (lista[j].numero <= lista[k].numero) {
					j--;
				}
				else {
					temp = lista[j];
					lista[j] = lista[k];
					lista[k] = temp;
					j -= intervalo;
				}
			}
		}
		intervalo = intervalo / 2;
	}
}