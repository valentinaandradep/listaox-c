#include <stdio.h>
#include "function_listaox.c"

int main(int argc, char *argv[])
{
    char lista[9] = {0};

    if (argc == 1)
    {
        for (int i = 0; i < 9; i++)
        {
            int valido = 0;

            while (valido == 0) 
            {
                printf("Digite o caractere %d da lista: ", i + 1);
                scanf(" %c", &lista[i]);

                if (validar(lista[i])) 
                {
                    valido = 1; 
                }
                else 
                {
                    printf("Caractere inválido\n");
                }
            }
        }
    }
    else 
    {
        if (argc != 10)
        {
            printf("Caractere inválido\n");
            printf("Criado por: Valentina Andrade\n");
            return 1;
        }

        for (int i = 0; i < 9; i++)
        {
            lista[i] = argv[i + 1][0];

            if (!validar(lista[i]))
            {
                printf("Caractere inválido\n");
                printf("Criado por: Valentina Andrade\n");
                return 1;
            }
        }
    }

    for (int i = 0; i < 9; i++)
    {
        printf("Caractere %d: %c\n", i + 1, lista[i]);
    }

    printf("Criado por: Valentina Andrade\n");
    return 0;
}
