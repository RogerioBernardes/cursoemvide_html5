#include<stdio.h>
#include<stdlib.h>

int main(){
	int matriz[3][3],i,j;
	for(i=0;i<3;i++)
	for(j=0;j<3;j++){
		printf("Insira o valor para linha %d coluna%d",i+1,j+1);
		
		scanf("%d",&matriz[i][j]);
	}

printf("\n");

for(i=0;i<3;i++){
for(j=0;j<3;j++)
printf("%d",matriz[i][j]);
printf("\n");
}

for(i=0;i<3;i++)
for(j=0;j<3;j++)
matriz[i][j]=
matriz[i][j]*5;

printf("\n");

for(i=0;i<3;i++){
for(j=0;j<3;j++)
printf("%d",matriz[i][j]);
printf("\n");
}
system("pause");
return 0;
}
