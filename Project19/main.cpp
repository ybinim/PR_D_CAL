#include "gmock/gmock.h"

class Cal {
public :
	int getGop(int a, int b)
	{
		return a * b;
	}
};

TEST(t1, t2) {
	EXPECT_EQ(1, 1);
}

TEST(CalTest, getGopTest)
{
	Cal myCal;
	EXPECT_EQ(myCal.getGop(1, 2), 2);
	EXPECT_EQ(myCal.getGop(0, 3), 0);
	EXPECT_EQ(myCal.getGop(-1, -1), 1);
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}