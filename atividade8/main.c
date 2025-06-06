#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct ponto{
    int xa;
    int xb;
    int ya;
    int yb;
}ponto;

int main(int argc, char* argv[]){

    ponto coo = {atoi(argv[1]), atoi(argv[2]), atoi(argv[3]), atoi(argv[4])};
    if(argc != 5){
        printf("Digite 4 argumentos\n");
        return 1;
    }

    float dis = sqrt(pow(coo.xa - coo.xb, 2) + pow(coo.ya - coo.yb, 2));
    printf("A distancia dos pontos eh: %.2f\n", dis);
    
    return 0;
}