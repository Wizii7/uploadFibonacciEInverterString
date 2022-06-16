#include <stdio.h>
#include <locale.h>
int main ()
{
	setlocale(LC_ALL, "Portuguese");
    unsigned vet[4];
    unsigned int i;    
    vet[0]=0;
    vet[1]=1;
    vet[2]=0;
    vet[3]=0;
 
    printf("Informe o n�mero a ser comparado:");
    scanf("%u", &vet[3]);
    for (i=0;i<vet[3];i++)
    {    
        vet[2] = vet[0] + vet[1];
        if(vet[2] == vet[3])
        {
            printf("\nValor:%u", vet[3]);
			printf(" Composto por:%u + %u\n", vet[0], vet[1]);
			printf("Corresponde a sequ�ncia");         
            return 0;
        }
        vet[0] = vet[1];
        vet[1] = vet[2];
    }
    printf("O valor informado n�o corresponde a sequ�ncia.\n");
    return 0;
}
