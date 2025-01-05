# Re-writing c++ STL from scratch

### std::vector

- https://stackoverflow.com/questions/3167272/how-does-c-stdvector-work

- Must use a pointer to a c-style array so we can change the size at runtime.

- Keep track of size and capacity yourself.

- Add unit tests.

 ### std::string

- A null terminal char array under the hood