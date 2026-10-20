#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define PI 3.1415

int main()
{
	char letra = 'a';
	float valor = 56.34;
	int n = 0, m = 0;
	int a, b, c, d;
	int num = 5;

	char nome[] = "Joseph Xang";

	printf("Valor = %5.2f\n", valor);
	printf("Nome eh: %s\n", nome);
	printf("Valor de PI = %6.4f", PI);

	n++; /* resultado: n =  1 			*/
	printf("%d\n", n);
	++m; /* resultado: m =  1 			*/
	printf("%d\n", m);
	n--;
	--n; /* resultado: n = -1 			*/
	printf("%d\n", n);
	a = n++; /* resultado: a = -1; n =0 	*/
	printf("%d\n", a);
	b = ++m; /* resultado: b =  2; m = 2	*/
	printf("%d\n", b);
	c = 2 * (m++); /* resultado: c =  4; m = 3	*/
	printf("%d\n", c);	
	d = 3 * (++n); /* resultado: d =  3; n = 1	*/
	printf("%d\n", d);
}
