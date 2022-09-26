#include "gmock/gmock.h"
#include "archivo.h"

#include "example.h"

using namespace testing;

namespace foobar::tests
{
	TEST(esParTest, Example) {
		
        ASSERT_THAT(esPar(2), true);
		ASSERT_THAT(esPar(4), true);
	}
	TEST(esParTest, Example1) {
		ASSERT_THAT(esPar(0), false);
		ASSERT_THAT(esPar(3), false);
		ASSERT_THAT(esPar(-13), false);
		ASSERT_THAT(esPar('D'), false);
	}
	TEST(esVocalTest, Example2) {
		ASSERT_THAT(esVocal('a'), true);
		ASSERT_THAT(esVocal('I'), true);
	}
	TEST(esVocalTest, Example3) {
		ASSERT_THAT(esVocal('c'), false);
		ASSERT_THAT(esVocal('H'), false);
		ASSERT_THAT(esVocal(1), false);

	}

}
