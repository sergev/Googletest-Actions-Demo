//
// Test the fibonacci() function.
//
#include "demo.hpp"
#include "gtest/gtest.h"

//
// Check valid inputs.
//
TEST(fibonacci, check_valid)
{
    EXPECT_EQ(fibonacci(0), 0U);
    EXPECT_EQ(fibonacci(1), 1U);
    EXPECT_EQ(fibonacci(2), 1U);
    EXPECT_EQ(fibonacci(3), 2U);
    EXPECT_EQ(fibonacci(4), 3U);
    EXPECT_EQ(fibonacci(5), 5U);
    EXPECT_EQ(fibonacci(10), 55U);
    EXPECT_EQ(fibonacci(20), 6765U);
    EXPECT_EQ(fibonacci(30), 832040U);
    EXPECT_EQ(fibonacci(40), 102334155U);
    EXPECT_EQ(fibonacci(50), 12586269025UL);
    EXPECT_EQ(fibonacci(60), 1548008755920UL);
    EXPECT_EQ(fibonacci(70), 190392490709135UL);
    EXPECT_EQ(fibonacci(80), 23416728348467685UL);
    EXPECT_EQ(fibonacci(90), 2880067194370816120UL);
    EXPECT_EQ(fibonacci(93), 12200160415121876738UL);
}

//
// Check exception on overflow.
//
TEST(fibonacci, check_overflow)
{
    EXPECT_ANY_THROW(fibonacci(100));
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
