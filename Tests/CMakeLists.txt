cmake_minimum_required(VERSION 3.10)

project(WatchTests)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../Library)
aux_source_directory(. SRC_LIST)

add_executable(${PROJECT_NAME} ${SRC_LIST})
target_link_libraries(${PROJECT_NAME} WatchLib)
target_link_libraries(${PROJECT_NAME} gmock_main)
