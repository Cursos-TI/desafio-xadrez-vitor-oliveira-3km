#include <stdio.h>

void recursivo(int torre){
    if (torre > 0)
    {
        recursivo(torre - 1);
        printf("Direita \n", torre);

    }
    
}

void recursivo1(int bispo) {
    if (bispo > 0)
    {
        recursivo1(bispo - 1);
        printf("Cima e Direita \n", bispo);
    }
    
}

void recursivo2(int rainha) {
    if (rainha > 0)
    {
        recursivo2(rainha - 1);
        printf("Esquerda \n", rainha);
        
    }
    
}

void recursivo3(int cavalo) {
    if (cavalo > 0)
    {
        recursivo3(cavalo - 1);
        printf("Duas casas horizontais depois direita");
    }
    
}


int main() {

    int movimento = 4;
    int movimento1 = 4;
    int movimento2 = 7;
    int movimento3 = 1;

    printf("Movimento da Torre... \n");
    recursivo(movimento);
    printf("Movimento do bispo ...\n");
    recursivo1(movimento1);
    printf("Movimento da rainha... \n");
    recursivo2(movimento2);
    printf("Movimento do cavalo... \n");
    recursivo3(movimento3);


    return 0;

}
