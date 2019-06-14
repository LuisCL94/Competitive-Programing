#include <stdio.h>

int main() {
	
	int i, cont=0;
	double num, soma=0, media;
	
	for (i = 0; i < 6; i++)  {
		scanf("%lf", &num);	
		if(num>0)  {
			cont++;	
			soma += num;
		}
	}
	
	media = soma / cont;
	
	printf("%d valores positivos\n%.1lf\n", cont, media);
	
	return 0;
}