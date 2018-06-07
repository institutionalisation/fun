#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n = 10000000;
	srand(time(NULL));
	printf("%i\n", n);
	while (n--)
	{
		int a = rand()-(1<<16), b = rand()-(1<<16);
		printf("%i %i\n", a, b);
		fprintf(stderr,"%i\n", a+b);
	}
}
