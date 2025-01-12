#include <gtest/gtest.h>
#include "../containers/bst/bst.hpp"

using namespace engineswap;

// Test cases for BST
TEST(BSTTest, Insert) {
    bst tree;
    tree.insert(5);
    tree.insert(3);
    tree.insert(10);
    tree.insert(1);
    tree.insert(4);
    tree.insert(8);

    // Expected preorder traversal after insertions
    std::vector<int> expected = {5, 3, 1, 4, 10, 8};
    EXPECT_EQ(tree.preorder(), expected);
}

TEST(BSTTest, FindMin) {
    bst tree;
    tree.insert(5);
    tree.insert(3);
    tree.insert(10);
    tree.insert(1);
    tree.insert(4);
    tree.insert(8);

    EXPECT_EQ(tree.findMin(), 1); // Minimum value in the tree
}

TEST(BSTTest, Height) {
    bst tree;
    tree.insert(5);
    tree.insert(3);
    tree.insert(10);
    tree.insert(1);
    tree.insert(4);
    tree.insert(8);

    EXPECT_EQ(tree.height(), 2); // Height of the tree
}

TEST(BSTTest, PreorderTraversal) {
    bst tree;
    tree.insert(5);
    tree.insert(3);
    tree.insert(10);
    tree.insert(1);
    tree.insert(4);
    tree.insert(8);

    // Expected preorder traversal
    std::vector<int> expected = {5, 3, 1, 4, 10, 8};
    EXPECT_EQ(tree.preorder(), expected);
}

TEST(BSTTest, Remove) {
    bst tree;
    tree.insert(5);
    tree.insert(3);
    tree.insert(10);
    tree.insert(1);
    tree.insert(4);
    tree.insert(8);

    // Removing a node with two children (3)
    tree.remove(3);
    std::vector<int> expectedAfterRemove3 = {5, 4, 1, 10, 8};
    EXPECT_EQ(tree.preorder(), expectedAfterRemove3);

    // Removing the root node (5)
    tree.remove(5);
    std::vector<int> expectedAfterRemove5 = {8, 4, 1, 10};
    EXPECT_EQ(tree.preorder(), expectedAfterRemove5);

    // Removing a node with one child (10)
    tree.remove(10);
    std::vector<int> expectedAfterRemove10 = {8, 4, 1};
    EXPECT_EQ(tree.preorder(), expectedAfterRemove10);

    // Removing a leaf node (1)
    tree.remove(1);
    std::vector<int> expectedAfterRemove1 = {8, 4};
    EXPECT_EQ(tree.preorder(), expectedAfterRemove1);

    // Removing the last internal node (8)
    tree.remove(8);
    std::vector<int> expectedAfterRemove8 = {4};
    EXPECT_EQ(tree.preorder(), expectedAfterRemove8);

    // Removing the last remaining node (4)
    tree.remove(4);
    EXPECT_TRUE(tree.isEmpty());
    EXPECT_TRUE(tree.preorder().empty());
}
