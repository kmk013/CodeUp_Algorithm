#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	int day, month, year;

	scanf("%d.%d.%d", &year, &month, &day);
	printf("%02d-%02d-%04d\n", day, month, year);
}