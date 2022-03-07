#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>
#include <iostream>
#include <string.h>

void chercher_extremum(int *tab, int* min, int* max) {
	*min = tab[1];
	*max = tab[1];
	for (int i = 0; i <= 5; i++) {
		if (tab[i] > *max){
			*max = tab[i];
		}
	
		if (tab[i] < *min){
			*min = tab[i];
		}
			
	}
}

int main() {
	int tab[5];
		int min = 0;  
	    int max = 0;
	std::cout << "rentrez 5 entiers\n";
	for (int i = 0; i <= 5; i++) {
		std::cin >> tab[i];
	}
		

			chercher_extremum(tab, &min, &max);

				std::cout << "le maximum est donc ";
				std::cout << max;
				std::cout << "\n";
				std::cout << "le minimum est donc ";
				std::cout << min;
		}
	
