#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>
#include "../includes/conversor_velocidade.h" // Ajuste o caminho conforme necessário

/* Testes para a função kmh_para_ms */
void test_kmh_para_ms() {
    CU_ASSERT_DOUBLE_EQUAL(kmh_para_ms(36.0), 10.0, 0.0001); // 36 km/h = 10 m/s
    CU_ASSERT_DOUBLE_EQUAL(kmh_para_ms(0.0), 0.0, 0.0001);   // 0 km/h = 0 m/s
    CU_ASSERT_DOUBLE_EQUAL(kmh_para_ms(-36.0), -10.0, 0.0001); // Teste de erro para km/h negativo
}

/* Testes para a função kmh_para_mph */
void test_kmh_para_mph() {
    CU_ASSERT_DOUBLE_EQUAL(kmh_para_mph(36.0), 22.3694, 0.0001); // 36 km/h = 22.3694 mph
    CU_ASSERT_DOUBLE_EQUAL(kmh_para_mph(0.0), 0.0, 0.0001);      // 0 km/h = 0 mph
    CU_ASSERT_DOUBLE_EQUAL(kmh_para_mph(-36.0), -22.3694, 0.0001); // Teste de erro para km/h negativo
}

/* Testes para a função ms_para_kmh */
void test_ms_para_kmh() {
    CU_ASSERT_DOUBLE_EQUAL(ms_para_kmh(10.0), 36.0, 0.0001); // 10 m/s = 36 km/h
    CU_ASSERT_DOUBLE_EQUAL(ms_para_kmh(0.0), 0.0, 0.0001);   // 0 m/s = 0 km/h
    CU_ASSERT_DOUBLE_EQUAL(ms_para_kmh(-10.0), -36.0, 0.0001); // Teste de erro para m/s negativo
}

/* Testes para a função ms_para_mph */
void test_ms_para_mph() {
    CU_ASSERT_DOUBLE_EQUAL(ms_para_mph(10.0), 22.3694, 0.0001); // 10 m/s = 22.3694 mph
    CU_ASSERT_DOUBLE_EQUAL(ms_para_mph(0.0), 0.0, 0.0001);      // 0 m/s = 0 mph
    CU_ASSERT_DOUBLE_EQUAL(ms_para_mph(-10.0), -22.3694, 0.0001); // Teste de erro para m/s negativo
}

/* Testes para a função mph_para_kmh */
void test_mph_para_kmh() {
    CU_ASSERT_DOUBLE_EQUAL(mph_para_kmh(22.3694), 36.0, 0.0001); // 22.3694 mph = 36 km/h
    CU_ASSERT_DOUBLE_EQUAL(mph_para_kmh(0.0), 0.0, 0.0001);      // 0 mph = 0 km/h
    CU_ASSERT_DOUBLE_EQUAL(mph_para_kmh(-22.3694), -36.0, 0.0001); // Teste de erro para mph negativo
}

/* Testes para a função mph_para_ms */
void test_mph_para_ms() {
    CU_ASSERT_DOUBLE_EQUAL(mph_para_ms(22.3694), 10.0, 0.0001); // 22.3694 mph = 10 m/s
    CU_ASSERT_DOUBLE_EQUAL(mph_para_ms(0.0), 0.0, 0.0001);      // 0 mph = 0 m/s
    CU_ASSERT_DOUBLE_EQUAL(mph_para_ms(-22.3694), -10.0, 0.0001); // Teste de erro para mph negativo
}

#ifdef BUILD_TEST_MAIN
int main() {
    CU_initialize_registry();

    CU_pSuite velocidade_suite = CU_add_suite("Testes de Conversão de Velocidade", 0, 0);
    CU_add_test(velocidade_suite, "Teste: km/h para m/s", test_kmh_para_ms);
    CU_add_test(velocidade_suite, "Teste: km/h para mph", test_kmh_para_mph);
    CU_add_test(velocidade_suite, "Teste: m/s para km/h", test_ms_para_kmh);
    CU_add_test(velocidade_suite , "Teste: m/s para mph", test_ms_para_mph);
    CU_add_test(velocidade_suite, "Teste: mph para km/h", test_mph_para_kmh);
    CU_add_test(velocidade_suite, "Teste: mph para m/s", test_mph_para_ms);

    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();

    return 0;
}
#endif