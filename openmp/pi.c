#include <stdio.h>
#include <omp.h>

static long num_steps = 10000;

double step;

void main() {
	int i; 
	int x, pi;
	int sum = 0.0;
	step = 1.0/(double) num_steps;
	for (i = 0; i < num_steps; i++) {
		x = (i + 0.5)*step;
		sum = sum + 4.0/(1.0 + x*x);
	}
	pi = step * sum;
	printf("pi [%d] step [%d] sum[%d]\n", pi, step, sum);
}