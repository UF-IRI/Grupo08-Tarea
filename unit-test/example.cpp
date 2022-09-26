#include "gmock/gmock.h"

#include "archivo.h"

#include "example.h"

using namespace testing;

namespace foobar::tests
{
	TEST(ExampleTests, Example) {
		foobar::Example example{};
		ASSERT_THAT(example.getValue(), Eq(99));
	}
	
	TEST(esPar1, Par1) {
		foobar::Example esPar{};
        ASSERT_THAT(esPar.esPar(2), true);
	}
	TEST(esPar2, Par2) {
		foobar::Example esPar{};
		ASSERT_THAT(esPar.esPar(4), true);
	}
	TEST(esPar3, NoPar3) {
		foobar::Example esPar{};
		ASSERT_THAT(esPar.esPar(0), false);
	}
	TEST(esPar4, NoPar4) {
		foobar::Example esPar{};
		ASSERT_THAT(esPar.esPar(3), false);
	}
	TEST(esPar5, NoPar5) {
		foobar::Example esPar{};
		ASSERT_THAT(esPar.esPar(-13), false);
	}
	TEST(esPar6, NoPar6) {
		foobar::Example esPar{};
		ASSERT_THAT(esPar.esPar('D'), false);
	}

	TEST(esVocal1, Vocal1) {
		foobar::Example esVocal{};
		ASSERT_THAT(esVocal.esVocal('a'), true);
	}
	TEST(esVocal2, Vocal2) {
		foobar::Example esVocal{};
		ASSERT_THAT(esVocal.esVocal('I'), true);
	}
	TEST(esVocal3, NoVocal3) {
		foobar::Example esVocal{};
		ASSERT_THAT(esVocal.esVocal('c'), false);
	}
	TEST(esVocal4, NoVocal4) {
		foobar::Example esVocal{};
		ASSERT_THAT(esVocal.esVocal('H'), false);
	}
	TEST(esVocal5, NoVocal5) {
		foobar::Example esVocal{};
		ASSERT_THAT(esVocal.esVocal(1), false);
	}
	
}
