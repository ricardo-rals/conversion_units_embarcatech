#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>
#include "../includes/conversao_area.h"

/* Teste para a função metrosParaCentimetros */
void test_metros_para_centimetros() {
    CU_ASSERT_DOUBLE_EQUAL(metrosParaCentimetros(1.0), 10000.0, 0.0001);
    CU_ASSERT_DOUBLE_EQUAL(metrosParaCentimetros(0.0), 0.0, 0.0001);
    CU_ASSERT_DOUBLE_EQUAL(metrosParaCentimetros(2.5), 25000.0, 0.0001);
}

/* Teste para a função centimetrosParaMetros */
void test_centimetros_para_metros() {
    CU_ASSERT_DOUBLE_EQUAL(centimetrosParaMetros(10000.0), 1.0, 0.0001);
    CU_ASSERT_DOUBLE_EQUAL(centimetrosParaMetros(0.0), 0.0, 0.0001);
}


#ifdef BUILD_TEST_MAIN
int main() {
    CU_initialize_registry();

    CU_pSuite area_suite = CU_add_suite("Testes de Conversão de Área", 0, 0);
    CU_add_test(area_suite, "Teste: Metros para Centímetros", test_metros_para_centimetros);
    CU_add_test(area_suite, "Teste: Centímetros para Metros", test_centimetros_para_metros);
    CU_add_test(area_suite, "Teste: Valores Negativos", test_valores_negativos);

    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();

    return 0;
}
#endif
