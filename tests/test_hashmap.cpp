#include <gtest/gtest.h>
#include "../containers/hashmap/hashmap.hpp"

// Test cases for the engineswap::unordered_map
TEST(UnorderedMapTest, InsertAndAccess) {
    engineswap::unordered_map<std::string> h;

    // Insert key-value pairs
    h.insert("C++", "Based");
    h.insert("Python", "Goated");
    h.insert("Php", "Its there");

    // Check inserted values
    EXPECT_EQ(h["C++"], "Based");
    EXPECT_EQ(h["Python"], "Goated");
    EXPECT_EQ(h["Php"], "Its there");
}

TEST(UnorderedMapTest, LoadFactor) {
    engineswap::unordered_map<std::string> h;

    h.insert("C++", "Based");
    h.insert("Python", "Goated");
    h.insert("Php", "Its there");

    // Verify load factor
    EXPECT_DOUBLE_EQ(h.getLoadFactor(), static_cast<double>(0.3));
}

TEST(UnorderedMapTest, RemoveAndAccess) {
    engineswap::unordered_map<std::string> h;

    h.insert("C++", "Based");
    h.insert("Python", "Goated");
    h.insert("Php", "Its there");

    // Remove a key and check access throws
    h.remove("C++");
    EXPECT_THROW(h["C++"], std::exception);
}

TEST(UnorderedMapTest, ModifyValue) {
    engineswap::unordered_map<std::string> h;

    h.insert("C++", "Based");
    h.insert("Python", "Goated");

    // Modify value associated with a key
    h["Python"] = "Snake";
    EXPECT_EQ(h["Python"], "Snake");
}
