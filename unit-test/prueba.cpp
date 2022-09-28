#include "gmock/gmock.h"

#include "prueba.h"

using namespace testing;

namespace foobar::tests
{
	TEST(ExampleTests, Example) {
		foobar::Example example{};
        ASSERT_THAT(example.getValue(), Eq(99));
	}
}

TEST(funciones_simples, calculadora)
{
	ASSERT_THAT(calculadora_simple(2222222222222222, 222222222222222, 4), 10);
	ASSERT_THAT(calculadora_simple(522222.0, 2.0, 4), 261111);
	ASSERT_THAT(calculadora_simple(-2222222222222222, 222222222222222, 4), -10);
	ASSERT_THAT(calculadora_simple(-2222222222222222, -222222222222222, 4), 10);
}

TEST(funciones_simples, BHASKARA_P)
{
	ASSERT_THAT(Bhaskara_dif_positivo(1, 4, 4), -2);
	ASSERT_THAT(Bhaskara_dif_positivo(2, 2, 2),-1);
}

TEST(funciones_simples, BHASKARA_N)
{
	ASSERT_THAT(Bhaskara_dif_positivo(2, 2, 2), -1);
	ASSERT_THAT(Bhaskara_dif_negativo(1, 1, -2), -2);
}