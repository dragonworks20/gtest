FILE(GLOB_RECURSE SRC_FILES ${CMAKE_CURRENT_SOURCE_DIR}/*.cc)

add_library(sum STATIC ${SRC_FILES})

target_include_directories(sum PUBLIC ${CMAKE_SOURCE_DIR}/include)