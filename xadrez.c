#include <stdio.h>


int main(){
    
    int rainha = 0;

    printf("Primeira peça a se movimentar é a torre! \n");
    for (int torre = 0; torre < 5; torre++)
    {
        printf("Direita \n");
    }
    
    printf("Proxima peça a se mover é o bispo! \n");
    for (int bispo = 0; bispo < 5; bispo++)
    {
        printf("Cima e direita \n");
    }

    printf("Proxima peça a se mover é a rainha! \n");


    while (rainha < 8)
    {
        if (rainha < 8)
        {
            printf("Esquerda! \n"); 
            
        }
        
        rainha ++;
    }
    

    return 0;

}
