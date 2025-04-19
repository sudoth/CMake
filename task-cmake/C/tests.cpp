#include "main.h"
#include <gtest/gtest.h>

TEST(GeneratedFileTest, CheckValue) {
    ASSERT_EQ(VALUE, 42);
}

TEST(LibraryTest, MultiplyTest) {
    ASSERT_EQ(multiply(3,4), 12);
}