#include "gmock/gmock.h"

class Cal {
public :
	int getSumSum(int a, int b, int c) {
		return (a + b + c);
	}
};

TEST(t1, t2) {
	EXPECT_EQ(1, 1);
}

TEST(t1, testSumSum) {
	int expected = 6;
	Cal cal;
	int actual = cal.getSumSum(1, 2, 3);
	EXPECT_EQ(expected, actual);
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}