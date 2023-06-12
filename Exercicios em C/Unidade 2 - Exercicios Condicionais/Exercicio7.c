#include <stdio.h>

int main()
{
int trabLab, avaSem, ExaFin, pesoLab, pesoSem, PesoFin, media, pond;
printf("Insira a nota do trabalho de laboratorio do aluno: ");
scanf("%d", &trabLab);
printf("Insira o peso da nota de trabalho de laboratorio: ");
scanf("%d", &pesoLab);
printf("Insira a nota da Avaliacao semestral o do aluno: ");
scanf("%d", &avaSem);
printf("Insira o peso da nota da Avaliacao semestral: ");
scanf("%d", &pesoSem);
printf("Insira a nota do exame final do aluno: ");
scanf("%d", &ExaFin);
printf("Insira o peso da nota do exame final: ");
scanf("%d", &PesoFin);
pond = pesoLab + pesoSem + PesoFin;
media = trabLab*pesoLab + avaSem*pesoSem + ExaFin*PesoFin / pond;
printf("A media e igual a: %d \n", media);
if(media >= 7)
    printf("Aprovado\n");
else if(media < 7 && media >= 4)
    printf("Exame\n");
else if(media < 4 && media >= 0)
    printf("Reprovado\n");
else
    printf(". \n");




return 0;
}
