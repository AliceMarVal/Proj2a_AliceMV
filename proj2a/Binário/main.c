//Alice Martins Valero
//Número de Matrícula - 202210341

#include <stdio.h>
#include <string.h>

int verifica(char str[]){
    for(int i = 0; i < strlen(str);i++){
        if(str[i] != '1' && str[i] != '0'){
            printf("%s  |  Não Reconhecida\n",str);
            return 0;
        }
    }
    printf("%s  |  Reconhecida\n",str);
    return 0;
}

int main(void){
    FILE *fp;
    char str[50];


    fp = fopen("./teste.txt", "r");

    if (fp == NULL) {
        printf("Arquivo não pode ser aberto\n");
    }else{
        while (!feof(fp)) {
            //lê o numero
            fscanf(fp, "%s", str);
            verifica(str);
        }
        int err = fclose(fp);
        // err != 0
        if (err){
            printf("Arquivo incorretamente fechado!!\n");
        }
    }

} 