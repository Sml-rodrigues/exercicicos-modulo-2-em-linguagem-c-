#include <stdio.h>
#include <stdlib.h>

float calcular_hr_Trabalhada(float salarioMinimo);

float calcular_salario_do_mes(float horasTrabalhadas, float valorHora);

int calcular_dependente(int quant_dependentes, float valor_por_dependente);

float calcular_valor_da_horaExtra(float qtd_horaExtra);

float calcula_salario_bruto(float valor_salario_do_Mes, float soma_valor_por_dependentes, float valor_hr_extra);

float calcula_IRRF(float salario_Bruto);

float calcula_salrio_liquido(float salario_Bruto, float Imposto_retido_na_fonte);

float calcula_valor_final_a_receber(float salario_liquido);


int main()
{
    float salarioMinimo=954.00, valor_por_dependente=32.00, horasTrabalhadas=0, valor_hr_extra=0;
    float qtd_horaExtra=0, valorHora=0, valor_salario_do_Mes=0, soma_valor_por_dependentes=0, salario_Bruto=0;
    float Imposto_retido_na_fonte=0, salario_liquido=0, gratificacao=0;
    int quant_dependentes=0;

    printf("\nEntre com o total de horas trabalhada\n");
    scanf("%f", &horasTrabalhadas);

    printf("\nEntre com a quantidade de dependentes\n");
    scanf("%d", &quant_dependentes);

    printf("\nEntre com a quantidade de hora extra\n");
    scanf("%f", &qtd_horaExtra);

    valorHora = calcular_hr_Trabalhada(salarioMinimo);
    printf("\nO valor da hora trabalhada eh...................: %.2f R$\n",valorHora);

    valor_salario_do_Mes = calcular_salario_do_mes(horasTrabalhadas, valorHora);
    printf("\nO salario do mes eh.............................: %.2f R$\n", valor_salario_do_Mes);

    soma_valor_por_dependentes = calcular_dependente(quant_dependentes, valor_por_dependente);
    printf("\nO calculo total por numero de dependentes eh....: %.2f R$\n",soma_valor_por_dependentes);

    valor_hr_extra = calcular_valor_da_horaExtra(qtd_horaExtra);
    printf("\nO valor de cada hora extra trabalhada eh........: %.2f R$\n", valor_hr_extra);

    salario_Bruto = calcula_salario_bruto(valor_salario_do_Mes, soma_valor_por_dependentes, valor_hr_extra);
    printf("\nO valor do salario bruto eh.....................: %.2f R$\n", salario_Bruto);

    Imposto_retido_na_fonte = calcula_IRRF(salario_Bruto);
    printf("\nO valor do imposto retido na fonte eh...........: %.2f R$\n", Imposto_retido_na_fonte);

    salario_liquido = calcula_salrio_liquido(salario_Bruto, Imposto_retido_na_fonte);
    printf("\nO valor do salario liquido eh...................: %.2f R$\n", salario_liquido);

    gratificacao = calcula_valor_final_a_receber(salario_liquido);
    printf("\nO total liquido a receber eh....................: %.2f R$\n",gratificacao);

    return 0;
}

float calcular_hr_Trabalhada(float salarioMinimo)
{
    float custoHr;
    custoHr = salarioMinimo * 0.10;
    return(custoHr);
}

float calcular_salario_do_mes(float horasTrabalhadas, float valorHora)
{
    float salario_do_Mes;
    salario_do_Mes = horasTrabalhadas * valorHora;
    return(salario_do_Mes);
}

int calcular_dependente(int quant_dependentes, float valor_por_dependente)
{
    float total_por_dependentes;
    total_por_dependentes = quant_dependentes * valor_por_dependente;
    return(total_por_dependentes);
}

float calcular_valor_da_horaExtra(float qtd_horaExtra)
{
    float acrescimo_hr_extra;
    acrescimo_hr_extra = qtd_horaExtra * 0.50;
    return(acrescimo_hr_extra);
}

float calcula_salario_bruto(float valor_salario_do_Mes, float soma_valor_por_dependentes, float valor_hr_extra)
{
    float valor_salario_bruto;
    valor_salario_bruto = valor_salario_do_Mes + soma_valor_por_dependentes + valor_hr_extra;
    return(valor_salario_bruto);
}

float calcula_IRRF(float salario_Bruto)
{
    float IRRF;

    if(salario_Bruto <= 200.00)
    {
        IRRF=0;
    }
    else
        if(salario_Bruto >= 200 && salario_Bruto <= 500)
    {
        IRRF = salario_Bruto * 0.10;
    }
    else
        if(salario_Bruto >= 500)
    {
        IRRF = salario_Bruto * 0.20;
    }
    return(IRRF);
}

float calcula_salrio_liquido(float salario_Bruto, float Imposto_retido_na_fonte)
{
    float calc_sal_liquido;
    calc_sal_liquido = salario_Bruto - Imposto_retido_na_fonte;
    return(calc_sal_liquido);
}

float calcula_valor_final_a_receber(float salario_liquido)
{
    float valor_gratificacao;

    if(salario_liquido <= 350.00)
    {
        valor_gratificacao = salario_liquido + 100.00;
    }
    else
        if(salario_liquido >= 350.00)
    {
        valor_gratificacao = salario_liquido + 50.00;
    }
    return(valor_gratificacao);
}

