#include "../Unity/src/unity.h"
#include "numberConversion.c"

void test_twoToPowerOfNToDecimal(void) {
	TEST_ASSERT_EQUAL_INT(twoToPowerOfNToDecimal(5), 32);
}

int main(void) {
	UNITY_BEGIN();
	RUN_TEST(test_twoToPowerOfNToDecimal);
	return UNITY_END();
}
