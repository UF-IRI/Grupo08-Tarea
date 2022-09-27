#include "gmock/gmock.h"

#include "archivo.h"

#include "example.h"

using namespace testing;

namespace foobar::tests
{
	TEST(ExampleTests, Example) {
		foobar::Example example{};
		ASSERT_THAT(example.getValue(), Eq(99));//dejamos el ejemplo para ver que corría todo
	}
	
	TEST(esPar1, Par1) {
		foobar::Example esPar{};
        ASSERT_THAT(esPar.esPar(2), true);//pasa la prueba, recibe un numero par por lo tanto devuelve true correctamente
	}
	TEST(esPar2, Par2) {
		foobar::Example esPar{};
		ASSERT_THAT(esPar.esPar(4), true);//pasa la prueba, recibe un numero par por lo tanto devuelve true correctamente
	}
	TEST(esPar3, NoPar3) {
		foobar::Example esPar{};
		ASSERT_THAT(esPar.esPar(0), false);//pasa la prueba, recibe 0 por lo tanto devuelve false correctamente
	}
	TEST(esPar4, NoPar4) {
		foobar::Example esPar{};
		ASSERT_THAT(esPar.esPar(3), false);//pasa la prueba, recibe un numero impar por lo tanto devuelve false correctamente
	}

	TEST(esVocal1, Vocal1) {
		foobar::Example esVocal{};
		ASSERT_THAT(esVocal.esVocal('a'), true);//pasa la prueba, recibe una vocal en minuscula y por lo tanto devuelve true correctamente
	}
	TEST(esVocal2, Vocal2) {
		foobar::Example esVocal{};
		ASSERT_THAT(esVocal.esVocal('I'), true);//pasa la prueba, recibe una vocal en mayuscula y por lo tanto devuelve false correctamente
	}
	TEST(esVocal3, NoVocal3) {
		foobar::Example esVocal{};
		ASSERT_THAT(esVocal.esVocal('c'), false);//pasa la prueba, recibe una consonante en minuscula y por lo tanto devuelve false correctamente
	}
	TEST(esVocal4, NoVocal4) {
		foobar::Example esVocal{};
		ASSERT_THAT(esVocal.esVocal('H'), false);//pasa la prueba, recibe una consonante en mayuscula y por lo tanto devuelve false correctamente
	}

	//conclusion: todas las pruebas están bien
}
