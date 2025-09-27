#include <stdio.h>
#include <stdlib.h>
#include "interface.h"
#include "Fila.h"

void MSG_MENU( )
{
    system("cls");
    printf(" \n \n\t>>>>>>>>>>>>>>>>>>>>>>> OPCOES DE MENU <<<<<<<<<<<<<<<<<<<<<<<<");
    printf(" \n \n\t1. INSERIR");
    printf(" \n \t2. PESQUISAR");
    printf(" \n \t3. LIBERAR");
    printf(" \n \t4. IMPRIMIR");
    printf(" \n \t5. VERIFICAR");
    printf(" \n \t6. INTERSEÇÃO");
    printf(" \n \t7. DIFERENCIAR");
    printf(" \n \t8. ENFILEIRAR PRIORITÁRIO");
    printf(" \n \t9. DESENFILEIRAR PRIORITÁRIO");
    printf(" \n \t10. SAIR");
}

void MENU(TFila *Fila){
    TCelula *ptr;
    TPilha L1;
    TProduto x;
    TProduto produto;
    int opcao=0;
    int i;
    do
    {
        MSG_MENU();
        printf("\n\nDigite uma opcao: ");
        fflush(stdin);
        scanf("%d", &opcao);
        switch(opcao)
        {
            case 1:/**Inserir**/
                Teste(&x, &L1);
            break;
            case 2:/**Inserir**/
                ptr=Pesquisar(L1, x);
                if (ptr!=NULL){
                    printf("\n Pesquisa teve sucesso!");
                }else{
                    printf("\n Não encontrado!");
                }
            break;
            case 3:/**Inserir**/
                Desempilhar (&L1, &x);
            break;
            case 4:/**Inserir**/
               ImprimirPilha (L1);
            break;
            case 5:/**Inserir**/

            break;
            case 6:/**Inserir**/

            break;
            case 7:/**Inserir**/

            break;
            case 8:/**Inserir**/

            break;
            case 9:/**Inserir**/

            break;
            case 10:/**Inserir**/
                system("clear");
                printf("\n\n\n\t >>>>>> MSG: Saindo do MODULO...!!! <<<<<<");
                Liberar ( &L1);
                system("PAUSE");
            break;
            default:
                system("clear");
                printf("\n\n\n\t >>>>>> MSG: Digite uma opcao valida!!! <<<<<<");
                system("PAUSE");
            } // fim do bloco switch
    } while(opcao != 5);
}
