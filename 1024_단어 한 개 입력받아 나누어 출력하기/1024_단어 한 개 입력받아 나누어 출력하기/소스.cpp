#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	char arr[20] = { 0, };
	int i = 0;

	cin >> arr;

	while (arr[i] != 0) {
		printf("\'%c\'\n", arr[i]);
		i++;
	}

	return 0;
}