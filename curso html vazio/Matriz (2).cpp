#include<stdio.h>
#include<stdlib.h>

int main(){
	int matriz[3][3],l,r;
	for(l=0;l<3;l++)
	for(r=0;r<3;r++){
		printf("Insira o valor para linha %d coluna%d",l+1,r+1);
		
		scanf("%d",&matriz[l][r]);
	}

printf("\n");

for(l=0;l<3;l++){
for(r=0;r<3;r++)
printf("%d",matriz[l][r]);
printf("\n");
}

for(l=0;l<3;l++)
for(r=0;r<3;r++)
matriz[l][r]=
matriz[l][r]*5;

printf("\n");

for(l=0;l<3;l++){
for(r=0;r<3;r++)
printf("%d",matriz[l][r]);
printf("\n");
}
system("pause");
return 0;
}
