#include <cassert>
#include <iostream>
#include "../containers/bst/bst.hpp"

using namespace engineswap;

void testInsert(bst& tree) {
    std::cout << "Testing Insert..." << std::endl;

    // Expected preorder traversal after insertions
    std::vector<int> expected = {5, 3, 1, 4, 10, 8};
    assert(tree.preorder() == expected);

    std::cout << "Insert test passed!\n" << std::endl;
}

void testFindMin(bst& tree) {
    std::cout << "Testing FindMin..." << std::endl;
    assert(tree.findMin() == 1); // Minimum value in the tree
    std::cout << "FindMin test passed!\n" << std::endl;
}

void testHeight(bst& tree) {
    std::cout << "Testing Height..." << std::endl;
    assert(tree.height() == 2); // Height of the tree
    std::cout << "Height test passed!\n" << std::endl;
}

void testPreorder(bst& tree) {
    std::cout << "Testing Preorder Traversal..." << std::endl;

    // Expected preorder traversal
    std::vector<int> expected = {5, 3, 1, 4, 10, 8};
    assert(tree.preorder() == expected);

    std::cout << "Preorder Traversal test passed!\n" << std::endl;
}

void testRemove(bst& tree) {
    std::cout << "Testing Remove...\n" << std::endl;

    std::cout << "Removing a node with two children (3)...\n";
    tree.remove(3); // Remove a node with two children
    std::vector<int> expectedAfterRemove3 = {5, 4, 1, 10, 8};
    assert(tree.preorder() == expectedAfterRemove3);

    std::cout << "Removing the root node (5)...\n";
    tree.remove(5); // Remove the root node
    std::vector<int> expectedAfterRemove5 = {8, 4, 1, 10};
    assert(tree.preorder() == expectedAfterRemove5);

    std::cout << "Removing a node with one child (10)...\n";
    tree.remove(10); // Remove a node with one child
    std::vector<int> expectedAfterRemove10 = {8, 4, 1};
    assert(tree.preorder() == expectedAfterRemove10);

    std::cout << "Removing a leaf node (1)...\n";
    tree.remove(1); // Remove a leaf node
    std::vector<int> expectedAfterRemove1 = {8, 4};
    assert(tree.preorder() == expectedAfterRemove1);

    std::cout << "Removing the last internal node (8)...\n";
    tree.remove(8); // Remove the last internal node
    std::vector<int> expectedAfterRemove8 = {4};
    assert(tree.preorder() == expectedAfterRemove8);

    std::cout << "Removing the last remaining node (4)...\n";
    tree.remove(4); // Tree should now be empty
    assert(tree.isEmpty() == true);
    assert(tree.preorder().empty()); // Preorder traversal should be empty

    std::cout << "Remove test passed!\n" << std::endl;
}



void runAllTests() {
    // Create the same tree for all tests
    bst tree;
    tree.insert(5);
    tree.insert(3);
    tree.insert(10);
    tree.insert(1);
    tree.insert(4);
    tree.insert(8);

    testInsert(tree);

    bst treeForFindMin = tree; // Copy the tree for each test
    testFindMin(treeForFindMin);

    bst treeForHeight = tree; // Copy the tree for each test
    testHeight(treeForHeight);

    bst treeForPreorder = tree; // Copy the tree for each test
    testPreorder(treeForPreorder);

    bst treeForRemove = tree; // Copy the tree for each test
    testRemove(treeForRemove);
}

int main() {
    runAllTests();
    std::cout << "All tests passed successfully!" << std::endl;
    return 0;
}
