#include <stdio.h>
#include <string.h>
int main() {
	char vi[15], amia[15], coohhhho[15];

        gets(vi);
        gets(amia);
        gets(coohhhho);

        if ((strcasecmp(vi,"vertebrado")==0) && (strcasecmp(amia,"mamifero")==0) && (strcasecmp(coohhhho,"onivoro")==0))      
            printf("homem\n");                    
        if ((strcasecmp(vi,"vertebrado")==0) && (strcasecmp(amia,"mamifero")==0) && (strcasecmp(coohhhho,"herbivoro")==0))      
            printf("vaca\n");
        if ((strcasecmp(vi,"vertebrado")==0) && (strcasecmp(amia,"ave")==0) && (strcasecmp(coohhhho,"carnivoro")==0))      
            printf("aguia\n");
        if ((strcasecmp(vi,"vertebrado")==0) && (strcasecmp(amia,"ave")==0) && (strcasecmp(coohhhho,"onivoro")==0))      
            printf("pomba\n");
        if ((strcasecmp(vi,"invertebrado")==0) && (strcasecmp(amia,"inseto")==0) && (strcasecmp(coohhhho,"hematofago")==0))      
            printf("pulga\n");
        if ((strcasecmp(vi,"invertebrado")==0) && (strcasecmp(amia,"inseto")==0) && (strcasecmp(coohhhho,"herbivoro")==0))      
            printf("lagarta\n");
        if ((strcasecmp(vi,"invertebrado")==0) && (strcasecmp(amia,"anelideo")==0) && (strcasecmp(coohhhho,"hematofago")==0))      
            printf("sanguessuga\n");
        if ((strcasecmp(vi,"invertebrado")==0) && (strcasecmp(amia,"anelideo")==0) && (strcasecmp(coohhhho,"onivoro")==0))      
            printf("minhoca\n");
        
	return 0;
}
