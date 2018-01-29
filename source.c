/*Get simple numbers from 0 to END*/
#include "stdio.h"

#define END 1000000

int simple[END];

int is_simple(int i);

int main() {
	int i, j = 0;
	for(i = 2; i <= END; i++) {
		if(is_simple(i) == 1) {
			simple[j] = i;
			printf("%d\n", i);
			j++;
		}
	}
	return 0x0;
}

int is_simple(int i) {
	int j;
	for(j = 0; simple[j] != 0; j++) {
		if(i % simple[j] == 0) {
			return 0;
		}
	}
	return 1;
}