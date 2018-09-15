#include <stdio.h>
int main(){
	float n1, n2, n3, media;
	printf("Entre com o valor das provas\n");
	scanf("%f0.2", &n1);
	scanf("%f0.2", &n2);
	scanf("%f0.2", &n3);
	media = (n1+n2+n3)/3;
	if (media >=7){
		printf ("AProvado\n");
	}
	else if (media < 4){
		printf("Reprovado\n");
	
	}else
		printf("Prova Final\n");

return 0;
}