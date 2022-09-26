#include "gmock/gmock.h"

#include "archivo.h"

#include "example.h"

using namespace testing;

namespace foobar::tests
{
	TEST(esPar1, Par1) {
        ASSERT_THAT(esPar(2), true);
	}
	TEST(esPar2, Par2) {
		ASSERT_THAT(esPar(4), true);
	}
	TEST(esPar3, NoPar3) {
		ASSERT_THAT(esPar(0), false);
	}
	TEST(esPar4, NoPar4) {
		ASSERT_THAT(esPar(3), false);
	}
	TEST(esPar5, NoPar5) {
		ASSERT_THAT(esPar(-13), false);
	}
	TEST(esPar6, NoPar6) {
		ASSERT_THAT(esPar('D'), false);
	}
	TEST(esVocal1, Vocal1) {
		ASSERT_THAT(esVocal('a'), true);
	}
	TEST(esVocal2, Vocal2) {
		ASSERT_THAT(esVocal('I'), true);
	}
	TEST(esVocal3, NoVocal3) {
		ASSERT_THAT(esVocal('c'), false);
	}
	TEST(esVocal4, NoVocal4) {
		ASSERT_THAT(esVocal('H'), false);
	}
	TEST(esVocal5, NoVocal5) {
		ASSERT_THAT(esVocal(1), false);
	}

}
