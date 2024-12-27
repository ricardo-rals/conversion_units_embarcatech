// tests/test_main.c
#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>

// Declarações das funções de teste de area
void test_metros_para_centimetros();
void test_centimetros_para_metros();

// Declarações das funções de teste de volume
void test_litros_para_mililitros();
void test_litros_para_metro_cubico();
void test_mililitros_para_litros();
void test_mililitros_para_metro_cubico();
void test_metro_cubico_para_litros();
void test_metros_cubicos_para_mililitros();

// Declarações das funções de teste de velocidade
void test_kmh_para_ms();
void test_kmh_para_mph();
void test_ms_para_kmh();
void test_ms_para_mph();
void test_mph_para_kmh();
void test_mph_para_ms();

int main() {
    CU_initialize_registry();
    // Suíte de testes para area
    CU_pSuite area_suite = CU_add_suite("Testes de Conversão de Área", 0, 0);
    CU_add_test(area_suite, "Teste: Metros para Centímetros", test_metros_para_centimetros);
    CU_add_test(area_suite, "Teste: Centímetros para Metros", test_centimetros_para_metros);

    // Suíte de testes para volume
    CU_pSuite volume_suite = CU_add_suite("Testes de Conversão de Volume", 0, 0);
    CU_add_test(volume_suite, "Teste: Litros para Mililitros", test_litros_para_mililitros);
    CU_add_test(volume_suite, "Teste: Litros para Metros Cúbicos", test_litros_para_metro_cubico);
    CU_add_test(volume_suite, "Teste: Mililitros para Litros", test_mililitros_para_litros);
    CU_add_test(volume_suite, "Teste: Mililitros para Metros Cúbicos", test_mililitros_para_metro_cubico);
    CU_add_test(volume_suite, "Teste: Metros Cúbicos para Litros", test_metro_cubico_para_litros);
    CU_add_test(volume_suite, "Teste: Metros Cúbicos para Mililitros", test_metros_cubicos_para_mililitros);

    // Suíte de testes para velocidade
    CU_pSuite velocidade_suite = CU_add_suite("Testes de Conversão de Velocidade", 0, 0);
    CU_add_test(velocidade_suite, "Teste: km/h para m/s", test_kmh_para_ms);
    CU_add_test(velocidade_suite, "Teste: km/h para mph", test_kmh_para_mph);
    CU_add_test(velocidade_suite, "Teste: m/s para km/h", test_ms_para_kmh);
    CU_add_test(velocidade_suite, "Teste: m/s para mph", test_ms_para_mph);
    CU_add_test(velocidade_suite, "Teste: mph para km/h", test_mph_para_kmh);
    CU_add_test(velocidade_suite, "Teste: mph para m/s", test_mph_para_ms);
   

    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();

    return 0;
}