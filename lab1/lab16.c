#include "stdio.h"
#include "math.h"

int factorial(int x) {
	int answer = 1;
	while (x != 0) {
		answer *= x;
		x--;
	}
	return answer;
}


int main() {

	int n;
	float x;
	float answer = 1;

	scanf("%d", &n);
	scanf("%f", &x);

	for (int i = 1; i <= n; i++) {
		
		answer *= (1 + (sin(i * x) / factorial(i)));
	}
	printf("%.6f", answer);

	return 0;
}