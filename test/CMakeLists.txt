include(FetchContent)
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        release-1.12.1
)
FetchContent_MakeAvailable(googletest)

include(GoogleTest)

set(TEST_BINARY ${PROJECT_NAME}_test)

add_executable(${TEST_BINARY} my_class_test.cpp)

target_link_libraries(${TEST_BINARY} PRIVATE ${PROJECT_NAME} gtest_main)

gtest_discover_tests(${TEST_BINARY})