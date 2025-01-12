#include <gtest/gtest.h>
#include "../containers/string/string.hpp"

// Test default constructor
TEST(StringTest, DefaultConstructor) {
    engineswap::string sd;
    EXPECT_EQ(sd.getCapacity(), 0);
    EXPECT_EQ(sd.getSize(), 0);
}

// Test constructor with C-string
TEST(StringTest, CStringConstructor) {
    engineswap::string s("Dog");
    EXPECT_EQ(s.getCapacity(), 3);
    EXPECT_EQ(s.getSize(), 3);
    EXPECT_STREQ(s.c_str(), "Dog");
}

// Test operator[]
TEST(StringTest, IndexOperator) {
    engineswap::string s("Dog");

    EXPECT_EQ(s[0], 'D');
    EXPECT_EQ(s[1], 'o');
    EXPECT_EQ(s[2], 'g');

    // Test out-of-bounds access
    EXPECT_THROW(s[3], std::exception);
}

// Test string concatenation (operator+=)
TEST(StringTest, Concatenation) {
    engineswap::string s("Dog");

    s += " balls";
    EXPECT_STREQ(s.c_str(), "Dog balls");
    EXPECT_EQ(s.getSize(), 9);
    EXPECT_EQ(s.getCapacity(), 18);

    s += " lol";
    EXPECT_STREQ(s.c_str(), "Dog balls lol");
    EXPECT_EQ(s.getSize(), 13);
    EXPECT_EQ(s.getCapacity(), 18);
}

// Test reserve functionality
TEST(StringTest, Reserve) {
    engineswap::string s("Dog balls lol");

    s.reserve(10); // Should not shrink the capacity
    EXPECT_EQ(s.getCapacity(), 13);

    s.reserve(20); // Should increase the capacity
    EXPECT_EQ(s.getCapacity(), 20);
}
