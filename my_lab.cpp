#include "my_lab.h"
#include <iostream>
int myrandom(float down, float up) {
	static int r = 1;
	r = ((int)down + 1) + ((r * 4231 + 12345) % ((int)up - ((int)down + 1)));
	return r;
}
void count(float gap, int* arr, float down, float up) {
	int i = 0;
	while (i < 10000) {
		arr[(int)((myrandom(down, up) - (int)down) / gap)] ++;
		i++;
	}
}