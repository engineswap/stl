#include "../containers/linked_list/linked_list.hpp"
#include <cassert>
#include <stdexcept>
#include <iostream>

int main() {
    using namespace engineswap;

    std::cout << "Test 1: Default Constructor" << std::endl;
    linked_list<int> nums;
    assert(nums.getSize() == 0);
    assert(nums.is_empty());

    std::cout << "Test 2: push_back and getSize" << std::endl;
    nums.push_back(10);
    assert(nums.getSize() == 1);
    assert(!nums.is_empty());
    nums.push_back(20);
    nums.push_back(30);
    assert(nums.getSize() == 3);

    std::cout << "Test 3: push_front" << std::endl;
    nums.push_front(5);
    assert(nums.getSize() == 4);
    assert(nums.front() == 5);

    std::cout << "Test 4: front and back" << std::endl;
    assert(nums.front() == 5);
    assert(nums.back() == 30);

    std::cout << "Test 5: pop_front" << std::endl;
    assert(nums.pop_front() == 5);
    assert(nums.getSize() == 3);
    assert(nums.front() == 10);

    std::cout << "Test 6: pop_back" << std::endl;
    assert(nums.pop_back() == 30);
    assert(nums.getSize() == 2);
    assert(nums.back() == 20);

    std::cout << "Test 7: insert" << std::endl;
    nums.insert(1, 15); // Insert 15 at index 1
    assert(nums.getSize() == 3);
    assert(nums[0] == 10);
    assert(nums[1] == 15);
    assert(nums[2] == 20);

    std::cout << "Test 8: erase" << std::endl;
    nums.erase(1); // Remove element at index 1
    assert(nums.getSize() == 2);
    assert(nums[0] == 10);
    assert(nums[1] == 20);

    std::cout << "Test 9: operator[]" << std::endl;
    nums[1] = 25; // Modify element at index 1
    assert(nums[1] == 25);

    std::cout << "Test 10: clear" << std::endl;
    nums.clear();
    assert(nums.getSize() == 0);
    assert(nums.is_empty());

    std::cout << "Test 11: Error Handling" << std::endl;
    try {
        nums.pop_front();
        assert(false); // Should not reach here
    } catch (const std::runtime_error &e) {
        assert(std::string(e.what()) == "Popping not allowed on empty list.");
    }

    try {
        nums.pop_back();
        assert(false); // Should not reach here
    } catch (const std::runtime_error &e) {
        assert(std::string(e.what()) == "Popping not allowed on empty list.");
    }

    try {
        nums.erase(0);
        assert(false); // Should not reach here
    } catch (const std::runtime_error &e) {
        assert(std::string(e.what()) == "Out of bounds");
    }

    try {
        nums.insert(1, 50);
        assert(false); // Should not reach here
    } catch (const std::runtime_error &e) {
        assert(std::string(e.what()) == "Out of bounds");
    }

    try {
        nums[0];
        assert(false); // Should not reach here
    } catch (const std::runtime_error &e) {
        assert(std::string(e.what()) == "Out of bounds");
    }

    std::cout << "Test 12: Reuse after clear" << std::endl;
    nums.push_back(100);
    nums.push_front(50);
    assert(nums.getSize() == 2);
    assert(nums.front() == 50);
    assert(nums.back() == 100);

    std::cout << "All tests passed!" << std::endl;
    return 0;
}
