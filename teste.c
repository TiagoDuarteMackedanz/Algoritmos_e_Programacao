#include <stdio.h>
float main()
{
    float nota1, nota2, notafinal, aluno, cont, aluno1, aluno2, total; /* aluno1 = reprovado aluno2 = examinado*/
    do
    {
        printf("Digite a nota 1: ");
        scanf("%f", &nota1);
        printf("Digite a nota 2: ");
        scanf("%f", &nota2);
        notafinal = (nota1 + nota2) / 2;
        if (notafinal >= 6)
        {
            aluno = aluno + 1;
            total=total +1;                                                        /* aluno++*/
        } 
        if (notafinal < 3)
        {
            aluno1 = aluno1 + 1;
            total=total +1;
        }
        if ((notafinal >= 3) && (notafinal <= 5.9))
        {
            aluno2 = aluno2 + 1;
            total=total +1; 
        }
        printf("%.1f media final.\n", notafinal);
        do
        {
            printf("Calcular a media de outro aluno (1)sim (2)nao? ");
            scanf("%f", &cont);
        } while ((cont < 1) || (cont > 2));
    } while (cont == 1);
    printf("%.0f alunos aprovados.\n", aluno);
    printf("%.0f alunos reprovado.\n", aluno1);
    printf("%.0f alunos em exame.\n", aluno2);
    printf("%.2f percentual de aprovados\n",(aluno/total) * 100);
    printf("%.2f percentual de reprovados\n",(aluno1/total) * 100);
    printf("%.2f percentual de alunos em exame\n",(aluno2/total) * 100);
         /* aluno = aluno aprovado -- aluno1 = reprovado -- aluno2 = examinado*/
}
