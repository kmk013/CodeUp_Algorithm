#include <cstdio>
#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int num[5];

	scanf("%1d%1d%1d%1d%1d", &num[0], &num[1], &num[2], &num[3], &num[4]);

	for (int i = 5; i >= 1; i--) {
		printf("\[%d\]\n", num[5 - i] * (int)pow(10, i) / 10);
	}

	return 0;
}