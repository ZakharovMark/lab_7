#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#define LEN1 10
#define LEN2 500000
#include "my_lab.h"

using namespace std;

int main()
{
	int i = 0, f = 0, amount = 0;
	double f1 = 0;
	float down = 0, up = 0, gap = 0;
	printf("Write down limit - ");
	f = scanf("%f", &down);
	printf("Write up limit - ");
	f = scanf("%f", &up);
	printf("Write size of interval - ");
	f = scanf("%f", &gap);
	amount = (int)((up - down)/ gap);
	int* arr = (int*)calloc(amount, sizeof(int)); 
	count(gap, arr, down, up);
	if (arr) {
		for (i = 0; i < amount; i++) {
			f1 = (double)arr[i] / 10000;
			cout << "Probability of " << i << " interval is - " << f1 << endl;
		}
	}
	return 0;
}
