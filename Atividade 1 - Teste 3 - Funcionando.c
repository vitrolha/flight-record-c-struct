#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct{
    int dia,mes,ano;
}Data;
typedef struct{
    int horas,minutos;
}Horario;

typedef struct {

    int num_voo;
    Data data;
    Horario horario_voo;
    char aeroporto_saida[50];
    char aeroporto_chegada[50];
    int rota;
    Horario tempo_estimado;
    int passageiros;

}Voo[10];

struct cadastroVoo{
    Voo voo;
};


int main (){

    int k,i,oqfazer,j;
    int pesq=0;
    int numero_consulta;
    int resp;
    int numero_remover=0;
    int remover=0;


    struct cadastroVoo voo[10];
    struct cadastroVoo *ptrVoo;

    ptrVoo = &voo;



    do{
        printf("Cadastros - 1");
        printf("\nConsulta - 2");
        printf("\nRemover - 3\n");
        scanf("%i",&oqfazer);

        if(oqfazer == 1){
            //cadastrar
            printf("Cadastros: ");
            scanf("%i",&k);

            for(i=0;i<k;i++){
                printf("Cadastro %i: \n",i+1);
                scanf("%i",&ptrVoo->voo[i].num_voo);

                printf("\nData. Dia: ");
                scanf("%i",&ptrVoo->voo[i].data.dia);
                fflush(stdin);
                printf("\nData. Mes: ");
                scanf("%i",&ptrVoo->voo[i].data.mes);
                fflush(stdin);
                printf("\nData. Ano: ");
                scanf("%i",&ptrVoo->voo[i].data.ano);
                fflush(stdin);

                printf("\nHorario:");
                printf("\nHoras: ");
                scanf("%i",&ptrVoo->voo[i].horario_voo.horas);
                fflush(stdin);
                printf("\nMinutos: ");
                scanf("%i",&ptrVoo->voo[i].horario_voo.minutos);
                fflush(stdin);

                printf("\nAeroporto de saida: ");
                scanf("%s",&ptrVoo->voo[i].aeroporto_saida);
                fflush(stdin);

                printf("\nAeroporto de cehgada: ");
                scanf("%s",&ptrVoo->voo[i].aeroporto_chegada);
                fflush(stdin);

                printf("\nRota: ");
                scanf("%i",&ptrVoo->voo[i].rota);
                fflush(stdin);

                printf("\nTempo estimado: ");
                printf("\nHoras: ");
                scanf("%i",&ptrVoo->voo[i].tempo_estimado.horas);
                fflush(stdin);
                printf("\nMinutos: ");
                scanf("%i",&ptrVoo->voo[i].tempo_estimado.minutos);
                fflush(stdin);

                printf("\nPassageiros: ");
                scanf("%i",&ptrVoo->voo[i].passageiros);
                fflush(stdin);


            }
        }

        else if(oqfazer == 2){
            //consultar
            printf("\nNumero do voo: ");
            scanf("%i",&numero_consulta);
            for(i=0;i<k;i++){
                if(numero_consulta==ptrVoo->voo[i].num_voo){
                    printf("%i\n",ptrVoo->voo[i].num_voo);
                    printf("\nVoo encontrado");
                    pesq = i;

                    printf("\nNo. do voo: %i, Data: %i/%i/%i",ptrVoo->voo[pesq].num_voo,ptrVoo->voo[pesq].data.dia,ptrVoo->voo[pesq].data.mes,ptrVoo->voo[pesq].data.ano);
                    printf("\nHorario: %i:%i",ptrVoo->voo[pesq].horario_voo.horas,ptrVoo->voo[pesq].horario_voo.minutos);
                    printf("\nAeroporto de saida: %s",ptrVoo->voo[pesq].aeroporto_saida);
                    printf("\nAeroporto de chegada: %s",ptrVoo->voo[pesq].aeroporto_chegada);
                    printf("\nRota: %i",ptrVoo->voo[pesq].rota);
                    printf("\nTempo estimado: %i:%i",ptrVoo->voo[pesq].tempo_estimado.horas,ptrVoo->voo[pesq].tempo_estimado.minutos);
                    printf("\nPassageiros: %i",ptrVoo->voo[pesq].passageiros);
                }
                else{
                    printf("\nVoo nao encontrado\n");

                }

            }


        }
        else if(oqfazer==3){
            //remover
            printf("\nNumero do voo para remover: \n");
            scanf("%i",&numero_remover);

            for(i=0;i<k;i++){
                if(numero_remover == ptrVoo->voo[i].num_voo){
                    printf("\nVoo encontrado");
                    remover = i;
                    memset(&ptrVoo->voo[remover], 0, sizeof voo[remover]);
                    printf("\nVoo removido com sucesso!");
                }
                else{
                    printf("\nVoo nao encontrado");
                }
            }


        }



       // for(i=0;i<k;i++){
         //   printf("\nCadastro %i\n",i+1);
         //   printf("No. do voo: %i, Data: %i/%i/%i, Horario: %i:%i",ptrVoo->voo[i].num_voo,ptrVoo->voo[i].data.dia,ptrVoo->voo[i].data.mes,ptrVoo->voo[i].data.ano, ptrVoo->voo[i].horario_voo.horas,ptrVoo->voo[i].horario_voo.minutos);
        //    printf("\nAeroporto de saida: %s",ptrVoo->voo[i].aeroporto_saida);
        //    printf("\nAeroporto chegada: %s",ptrVoo->voo[i].aeroporto_chegada);
         //   printf("\nRota: %i, Tempo estimado: %i:%i",ptrVoo->voo[i].rota,ptrVoo->voo[i].tempo_estimado.horas,ptrVoo->voo[i].tempo_estimado.minutos);
        //    printf("\nPassageiros: %i",ptrVoo->voo[i].passageiros);

      //  }


    printf("\n1 - Continuar. 2 - Sair\n");
    scanf("%i",&resp);
    }while(resp==1);



}
