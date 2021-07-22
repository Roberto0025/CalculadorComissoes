#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    float total, vend_1, vend_2, com_empr=0, com_ind_1=0,com_ind_2=0;
    float ComGeral(float total);
    float ComVendedor(float total);

    printf("======================= BEM VINDO =======================\n");
    printf("========= CALCULADORA DE COMISSÕES DELTA INKJET =========\n");

    printf("\nEntre com o total de vendas da EMPRESA....: ");
    scanf("%f", &total);
    com_empr=ComGeral(total);
    printf("Comissão coletiva.............: %.2f\n", com_empr)/2;

    printf("Entre com o total de vendas do VENDEDOR_1.: ");
    scanf("%f", &vend_1);
    com_ind_1 = ComVendedor(vend_1)/2;
    printf("Comissão Individual...........: %.2f\n", com_ind_1);

    printf("Entre com o total de vendas do VENDEDOR_2.: ");
    scanf("%f", &vend_2);
    com_ind_2 = ComVendedor(vend_2)/2;
    printf("Comissão Individual...........: %.2f\n", com_ind_2);

    printf("\n\nCOMISSÃO INDIVIDUAL DE CADA VENDEDOR......:%.2f", (com_empr+com_ind_1+com_ind_2));

    printf("\n\n\n===========Obrigado por usar nosso software===========\n");
    printf("====================== ATÉ LOGO ======================\n");
    printf("============ ROBERTO APARECIDO DE SOUZA ==============\n\n\n");


    return 0;
}


float ComGeral(float total){
    float com=0;
    if(total > 100000)
    {
       return
       printf("\n\t\tATENÇÃO!!!!\n\tVALOR ACIMA DO ESPERADO!!!\n\t    FECHE E RECOMECE!!\n\n\n");
    }
    else
    {
        if(total < 50000)   {com = total * 0.002;
        }
        if(total >= 50000 && total < 70000) {com = total * 0.003;
        }
        if(total >= 70000 && total < 80000) {com = total * 0.004;
        }
        if(total >= 80000 && total < 90000) {com = total * 0.005;
        }
        if(total >= 90000 && total < 100000) {com = total * 0.006;
        }
        return com;
    }
}

float ComVendedor(float total){
    float com=0;
    if(total > 50000)
    {
       return
       printf("\n\t\tATENÇÃO!!!!\n\tVALOR ACIMA DO ESPERADO!!!\n\t    FECHE E RECOMECE!!\n\n\n");
    }
    else
    {
        if(total < 10000)   {com = total * 0.005;
        }
        if(total >= 10000 && total < 15000) {com = total * 0.0055;
        }
        if(total >= 15000 && total < 20000) {com = total * 0.006;
        }
        if(total >= 20000 && total < 25000) {com = total * 0.0065;
        }
        if(total >= 25000 && total < 30000) {com = total * 0.007;
        }
        if(total >= 30000 && total < 35000) {com = total * 0.0075;
        }
        if(total >= 35000 && total < 40000) {com = total * 0.008;
        }
        if(total >= 40000 && total < 45000) {com = total * 0.0085;
        }
        if(total >= 45000 && total < 50000) {com = total * 0.009;
        }
        return com;
    }
}
