#include <stdio.h>
#include <stdlib.h>
int main() {

		double Sal, NewSal, Reajus;
		int percent;

		scanf("%lf", &Sal);

		if(Sal>0 && Sal<=400)
			percent = 15;
		if(Sal>400 && Sal<=800)
			percent = 12;
	    if(Sal>800 && Sal<=1200)
			percent = 10;
        if(Sal>1200 && Sal<=2000)
			percent = 7;
		if(Sal>2000)
			percent = 4;

		Reajus = (Sal * percent)/100;
        NewSal = Reajus + Sal ;

		printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %d %%\n", NewSal, Reajus, percent);

	return 0;
}