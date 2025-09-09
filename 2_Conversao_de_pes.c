#include <stdio.h>

int main(){
    int pes;

    printf("Digite a quantidade de pes: ");
    scanf("%i", &pes);

    int polegadas = pes*12;
    int jardas = pes/3;
    int milhas = jardas/1760;
    
    printf("|-----------------------\n");
    printf("| %i pes equivalem a:    \n", pes);
    printf("| %i polegadas           \n", polegadas);
    printf("| %i jardas              \n", jardas);
    printf("| %i milhas              \n", milhas);
    printf("|-----------------------");
    return 0;
}
