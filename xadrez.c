#include <stdio.h>
void torre(int n){
    if (n > 0)
    {
        printf("torre moveu cima\n");
        torre(n-1);
    } 
}
void bispo(int n){
    if (n > 0)
    {
        printf("bispo moveu cima, direita\n");
        bispo(n-1);
    }
    
}
void rainha(int n){
    if (n > 0)
    {
        printf("rainha moveu esquerda, baixo\n");
        rainha(n-1);
    }
    
}
void cavalo(int n){
    if (n > 0)
    {
        printf("\ncavalo moveu cima");
        if (n == 1)
        {
            printf(", direita\n");
        }
        cavalo(n-1);    
    }
    
}
int main(){
    int x = 2;
    torre(x);
    int y = 3;
    bispo(y);
    int w = 4;
    rainha(w);
    int a = 2;
    cavalo(a);
}

