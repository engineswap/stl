#include <gtest/gtest.h>
#include "../containers/bst/bst.hpp"

TEST(BSTTest, Insert){
    engineswap::bst tree;
    tree.insert(1);
    tree.insert(2);
    tree.insert(-1);
}
