#include <stdio.h>

int main(){
    char nome [100];
    printf("Digite seu nome: ");
    scanf("%s", &nome);

    double salarioFixo;
    printf("Digite seu salario fixo: ");
    scanf("%lf", &salarioFixo);

    double totalVendas;
    printf("Digite o total de vendas efetuadas: ");
    scanf("%lf", &totalVendas);

    double salarioTotal = salarioFixo+(totalVendas*15/100);
    
    printf("Salario Total: R$%.2lf", salarioTotal);
    return 0;
}
