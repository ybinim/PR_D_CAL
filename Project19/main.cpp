#include "gmock/gmock.h"

class Cal {
public :
	int getMinus(int a, int b)
	{
		return a - b;
	}

  int getSum(int a, int b) {
		return a + b;
	}
  
	int getSumSum(int a, int b, int c) {
		return (a + b + c);
  }
};

TEST(t1, t2) {
	EXPECT_EQ(1, 1);
}

TEST(CalTest, getMinusTest) {
	Cal testCal;
	EXPECT_EQ(testCal.getMinus(1, 2), -1);
	EXPECT_EQ(testCal.getMinus(3, 0), 3);
	EXPECT_EQ(testCal.getMinus(-1, -1), 0);
}
  
TEST(t1, TestSum) {
	Cal c;
	int expected = 3;
	int actual = c.getSum(1, 2);
	EXPECT_EQ(expected, actual);
}
  
TEST(t1, testSumSum) {
	int expected = 6;
	Cal cal;
	int actual = cal.getSumSum(1, 2, 3);
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}