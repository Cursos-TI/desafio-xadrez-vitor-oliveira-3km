#include <stdio.h>

// Jogo de xadrez
int main(){
    
    int rainha = 0;
    int cavalo, CavaloL;
//Movimento da torre
    printf("Primeira peça a se movimentar é a torre! \n");
    for (int torre = 0; torre < 5; torre++)
    {
        printf("Direita \n");
    }
//Movimento do bispo
    printf("Proxima peça a se mover é o bispo! \n");
    for (int bispo = 0; bispo < 5; bispo++)
    {
        printf("Cima e direita \n");
    }
//Movimento da rainha
    printf("Proxima peça a se mover é a rainha! \n");


    while (rainha < 8)
    {
        if (rainha < 8)
        {
            printf("Esquerda! \n"); 
            
        }
        
        rainha ++;
    }
//Movimento do cavalo
    printf("Proxima peça a se mover é o cavalo! \n");
    for (cavalo = 1; cavalo <= 1; cavalo++)
    {
        
        while (CavaloL <= 1)
        {
            printf("Horizontal \n");
            CavaloL++;
        }
        
        printf("Esquerda\n");
    }

    return 0;

}
