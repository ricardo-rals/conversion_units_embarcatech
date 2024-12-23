#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>
#include "../includes/conversao_volume.h"

/* Testes para a função litros_para_mililitros */
void test_litros_para_mililitros() {
    CU_ASSERT_DOUBLE_EQUAL(litros_para_mililitros(1.0), 1000.0, 0.0001);
    CU_ASSERT_DOUBLE_EQUAL(litros_para_mililitros(0.0), 0.0, 0.0001);
    CU_ASSERT_DOUBLE_EQUAL(litros_para_mililitros(2.5), 2500.0, 0.0001);
}

/* Testes para a função litros_para_metro_cubico */
void test_litros_para_metro_cubico() {
    CU_ASSERT_DOUBLE_EQUAL(litros_para_metro_cubico(1.0), 0.001, 0.000001);
    CU_ASSERT_DOUBLE_EQUAL(litros_para_metro_cubico(0.0), 0.0, 0.000001);
}

/* Testes para a função mililitros_para_litros */
void test_mililitros_para_litros() {
    CU_ASSERT_DOUBLE_EQUAL(mililitros_para_litros(1000.0), 1.0, 0.0001);
    CU_ASSERT_DOUBLE_EQUAL(mililitros_para_litros(0.0), 0.0, 0.0001);
}

/* Testes para a função milililitros_para_metro_cubico */
void test_milililitros_para_metro_cubico() {
    CU_ASSERT_DOUBLE_EQUAL(milililitros_para_metro_cubico(1000000.0), 1.0, 0.000001);
    CU_ASSERT_DOUBLE_EQUAL(milililitros_para_metro_cubico(0.0), 0.0, 0.000001);
}

/* Testes para a função metro_cubico_para_litros */
void test_metro_cubico_para_litros() {
    CU_ASSERT_DOUBLE_EQUAL(metro_cubico_para_litros(1.0), 1000.0, 0.0001);
    CU_ASSERT_DOUBLE_EQUAL(metro_cubico_para_litros(0.0), 0.0, 0.0001);
}

/* Testes para a função metros_cubicos_para_mililitros */
void test_metros_cubicos_para_mililitros() {
    CU_ASSERT_DOUBLE_EQUAL(metros_cubicos_para_mililitros(1.0), 1000000.0, 0.0001);
    CU_ASSERT_DOUBLE_EQUAL(metros_cubicos_para_mililitros(0.0), 0.0, 0.0001);
}

/* Configurar e rodar os testes */
int main() {
    CU_initialize_registry();

    CU_pSuite suite = CU_add_suite("Testes de Conversão de Volume", 0, 0);

    CU_add_test(suite, "Teste: Litros para Mililitros", test_litros_para_mililitros);
    CU_add_test(suite, "Teste: Litros para Metros Cúbicos", test_litros_para_metro_cubico);
    CU_add_test(suite, "Teste: Mililitros para Litros", test_mililitros_para_litros);
    CU_add_test(suite, "Teste: Mililitros para Metros Cúbicos", test_milililitros_para_metro_cubico);
    CU_add_test(suite, "Teste: Metros Cúbicos para Litros", test_metro_cubico_para_litros);
    CU_add_test(suite, "Teste: Metros Cúbicos para Mililitros", test_metros_cubicos_para_mililitros);

    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();

    return 0;
}
