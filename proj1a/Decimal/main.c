//Alice Martins Valero
//Número de Matrícula - 202210341

#include <stdio.h>
#include <string.h>

int verifica(char str[]){
    for(int i = 0; i < strlen(str);i++){
        if(!isdigit(str[i])){
            printf("%s  |  Não Reconhecida\n",str);
            return 0;
        }
    }
    printf("%s  |  Reconhecida\n",str);
    return 0;
}

int main(void){
    FILE *file;
    char str[50];

    file = fopen("../teste.txt", "r");

    if (file == NULL) {
        printf("Arquivo não pode ser aberto\n");
    }else{
        while (!feof(file)) {
            //lê o numero
            fscanf(file, "%s", str);
            verifica(str);
        }
        int err = fclose(file);
        // err != 0
        if (err){
            printf("Arquivo incorretamente fechado!!\n");
        }
    }

} 