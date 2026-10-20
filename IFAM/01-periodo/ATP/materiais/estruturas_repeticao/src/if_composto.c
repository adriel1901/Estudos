#include <stdio.h>
int main() {
	float n1,n2,n3,media;
	printf("Nota 1 : ");
	scanf("%f",&n1);
	printf("Nota 2 : ");
	scanf("%f",&n2);
	printf("Nota 3 : ");
	scanf("%f",&n3);
	media=(n1+n2+n3)/3;
	
	if (media>=6) {
		printf("Media = %5.2f. Aprovado! ",media);
	}

	return 0;
}
