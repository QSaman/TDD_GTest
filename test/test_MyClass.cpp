#include <gtest/gtest.h>
#include "MyClass.h"

TEST(MyClassTU, Equal)
{
    MyClass my_class;
    EXPECT_EQ(7, my_class.sum(2, 5));
}

TEST(MyClassTU, NotEqual)
{
    MyClass my_class;
    EXPECT_NE(8, my_class.sum(1, 3));
}

int main(int argc, char* argv[])
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
