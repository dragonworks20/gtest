cmake_minimum_required(VERSION 3.14)
project(my_project)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)



enable_testing()

# add_executable(
#   hello_test
#   hello_test.cc
#   sum.cc
#   sum_test.cc
# )
# target_link_libraries(
#   hello_test
#   GTest::gtest_main
# )


# include(GoogleTest)
# gtest_discover_tests(hello_test)
# 테스트 대상 프로젝트 추가
# add_executable(tests main.cc sum.cc)  # main.cc와 sum.cc 파일 추가
# include_directories(../)
add_executable(tests main.cc
  ${CMAKE_CURRENT_SOURCE_DIR}/sumTest/sum_test.cc
)  # sum_test.cc 파일 추가

# 각 실행 파일에 대한 Google Test 라이브러리 링크
# target_link_libraries(tests tests)
# target_link_libraries(tests GTest::gtest_main)
# target_link_libraries(sum_tests GTest::gtest_main)
target_link_libraries(tests GTest::gtest_main GTest::gmock_main sum)

# 테스트 실행 파일의 출력 경로 설정
# set_target_properties(tests PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")
set_target_properties(tests PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

# 테스트 실행 파일의 이름 설정
# set_target_properties(tests PROPERTIES OUTPUT_NAME "tests")
set_target_properties(tests PROPERTIES OUTPUT_NAME "tests")

# 실행 파일 빌드 후 자동으로 테스트 수행
# add_custom_command(TARGET tests POST_BUILD COMMAND tests)
# add_custom_command(TARGET sum_tests POST_BUILD COMMAND sum_tests)

