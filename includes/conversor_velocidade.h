#ifndef CONVERSAO_UNIDADES_H
#define CONVERSAO_UNIDADES_H

// Função principal que orquestra as conversões
int conversor_main();

// Funções de conversão de velocidade
double kmh_para_ms(double kmh);
double kmh_para_mph(double kmh);
double ms_para_kmh(double ms);
double ms_para_mph(double ms);
double mph_para_kmh(double mph);
double mph_para_ms(double mph);

#endif // CONVERSAO_UNIDADES_H