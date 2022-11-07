add_executable(test_iterative test_iterative.c)
target_link_libraries(test_iterative palindrome)
add_test(NAME test_iterative
        COMMAND test_iterative)

add_executable(test_recursive test_recursive.c)
target_link_libraries(test_recursive palindrome)
add_test(NAME test_recursive
        COMMAND test_recursive)