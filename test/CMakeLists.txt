add_executable (request_test request.test.c)
target_link_libraries(request_test cmocka)
add_test (NAME request_test COMMAND request_test)
