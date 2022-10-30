#pragma once
#include "Pokemon.h"
class orden {
public:
	void swap(Pokemon* p1, Pokemon* p2);

	void Gen_selectionSort(Pokemon lista[], int n);
	void Num_selectionSort(Pokemon lista[], int n);

	void Gen_quickSort(Pokemon lista[], int start, int end);
	void Num_quickSort(Pokemon lista[], int start, int end);

	void Gen_shellSort(Pokemon lista[], int n);
	void Num_shellSort(Pokemon lista[], int n);

	int Gen_divquick(Pokemon lista[], int start, int end);
	int Num_divquick(Pokemon lista[], int start, int end);
};