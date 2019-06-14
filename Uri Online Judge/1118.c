#include <stdio.h>

int main() {

  while (1) {
    
    int SouN;
    double X, Y, media;
  	
    scanf("%lf", &X);

    while(X<0 || X>10) {
      printf("nota invalida\n");
      scanf("%lf", &X);
    }

    scanf("%lf", &Y);

    while(Y<0 || Y>10) {
      printf("nota invalida\n");
      scanf("%lf", &Y);
  	}
		
    media = (X+Y)/2;
    
    printf("media = %.2lf\n", media);
    printf("novo calculo (1-sim 2-nao)\n");

    scanf("%d", &SouN);
    
    while(SouN<1 || SouN>2) { 
      printf("novo calculo (1-sim 2-nao)\n");
      scanf("%d", &SouN);
    }
    
    if (SouN==2) break; 
  }
    
    return 0;
}
