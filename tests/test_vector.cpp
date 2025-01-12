#include <gtest/gtest.h>
#include "../containers/vector/vector.hpp"

// Test default constructor
TEST(VectorTest, DefaultConstructor) {
    engineswap::vector<int> v;

    EXPECT_EQ(v.getSize(), 0);
    EXPECT_EQ(v.getCapacity(), 0);
}

// Test pushBack and indexing
TEST(VectorTest, PushBackAndIndexing) {
    engineswap::vector<int> v;

    v.pushBack(1);
    EXPECT_EQ(v.getSize(), 1);
    EXPECT_EQ(v.getCapacity(), 1);
    EXPECT_EQ(v[0], 1);

    v.pushBack(2);
    EXPECT_EQ(v.getSize(), 2);
    EXPECT_EQ(v.getCapacity(), 2);
    EXPECT_EQ(v[0], 1);
    EXPECT_EQ(v[1], 2);

    v.pushBack(3);
    EXPECT_EQ(v.getSize(), 3);
    EXPECT_EQ(v.getCapacity(), 4); // Capacity doubles
    EXPECT_EQ(v[0], 1);
    EXPECT_EQ(v[1], 2);
    EXPECT_EQ(v[2], 3);
}

// Test popBack
TEST(VectorTest, PopBack) {
    engineswap::vector<int> v;

    v.pushBack(1);
    v.pushBack(2);
    v.pushBack(3);

    v.popBack();
    EXPECT_EQ(v.getSize(), 2);
    EXPECT_EQ(v.getCapacity(), 4); // Capacity does not shrink
    EXPECT_EQ(v[0], 1);
    EXPECT_EQ(v[1], 2);
}

// Test resize
TEST(VectorTest, Resize) {
    engineswap::vector<int> v;

    v.pushBack(1);
    v.pushBack(2);

    v.resize(100);
    EXPECT_EQ(v.getSize(), 2);      // Size remains unchanged
    EXPECT_EQ(v.getCapacity(), 100); // Capacity changes
}

// Test toString
TEST(VectorTest, ToString) {
    engineswap::vector<int> v;

    v.pushBack(1);
    v.pushBack(2);

    EXPECT_EQ(v.toString(), "[1,2]\nSize: 2 Capacity: 2\n");
}

// Test clear
TEST(VectorTest, Clear) {
    engineswap::vector<int> v;

    v.pushBack(1);
    v.pushBack(2);
    v.resize(100); // Resize to ensure capacity remains after clearing
    v.clear();

    EXPECT_EQ(v.getSize(), 0);
    EXPECT_EQ(v.getCapacity(), 100); // Capacity remains unchanged
}
