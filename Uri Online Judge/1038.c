#include <stdio.h>
int main() 	{
	int C, Q;
    double Total;

    scanf("%d %d", &C, &Q);

    if (C==1) 
        Total = Q * 4;
    else if (C==2) 
        Total = Q * 4.5;
    else if (C==3) 
        Total = Q * 5;
    else if (C==4) 
        Total = Q * 2;
    else if (C==5) 
        Total = Q * 1.5;
    
    printf("Total: R$ %.2lf\n", Total);

	return 0;
}
