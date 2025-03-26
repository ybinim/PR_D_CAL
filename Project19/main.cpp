#include "gmock/gmock.h"

class Cal {
public :
	int getMinus(int a, int b)
	{
		return a - b;
	}
};

TEST(t1, t2) {
	EXPECT_EQ(1, 1);
}

TEST(CalTest, getMinusTest)
{
	Cal testCal;
	EXPECT_EQ(testCal.getMinus(1, 2), -1);
	EXPECT_EQ(testCal.getMinus(3, 0), 3);
	EXPECT_EQ(testCal.getMinus(-1, -1), 0);
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}