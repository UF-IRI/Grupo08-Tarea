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
	TEST(esPar5, NoPar5) {
		foobar::Example esPar{};
		ASSERT_THAT(esPar.esPar(13), true);//no pasa la prueba, recibe un numero impar pero en vez de devolver false devuelve true como si fuera un numero par (lo cual es incorrecto)
	}
	/*TEST(esPar6, NoPar6) {
		foobar::Example esPar{};
		ASSERT_THAT(esPar.esPar('D'), false);//probamos con que reciba una letra en vez de un nro pero siempre va a ser false ya que no entra a la condición de if sino a la de else en la cual todo es falso, CONSULTAR
	}*/

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
	TEST(esVocal5, NoVocal5) {
		foobar::Example esVocal{};
		ASSERT_THAT(esVocal.esVocal('M'), true);//no pasa la prueba, recibe una consonante en mayuscula pero en vez de devolver false, devuelve true como si fuera una vocal (lo cual es incorrecto)
	}
	/*TEST(esVocal6, NoVocal6) {
		foobar::Example esVocal{};
		ASSERT_THAT(esVocal.esVocal(1), false);//probamos con que reciba un nro en vez de una letra pero siempre va a ser false ya que no entra a la condición de if sino a la de else en la cual todo es falso, CONSULTAR
	}*/

	//conclusion, hay 4 pruebas de la función esVocal que son exitosas y una tira error. Y hay 4 pruebas de la funcion esPar exitosas y una no lo es.
	
}
