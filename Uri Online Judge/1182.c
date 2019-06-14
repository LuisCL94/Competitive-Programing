#include <stdio.h>

int main()   {
	
	int C; 
	char T;

	scanf("%d %c", &C, &T);

	int i, j;
	float M[12][12], soma = 0, media;

	for(i=0; i<12; i++)
		for(j=0; j<12; j++)
			scanf("%f", &M[i][j]);

	for(i=0; i<12; i++) {
		for(j=0; j<12; j++) {
			if(j==C)
				soma +=	M[i][j];		
		}
	}	
	
	media = soma/12;
	
	if(T=='S') printf("%.1lf\n", soma);
	if(T=='M') printf("%.1lf\n", media);

	return 0;
}
