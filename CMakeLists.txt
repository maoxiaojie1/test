cmake_minimum_required(VERSION 3.10)
set(APP_NAME demo)
project(${APP_NAME})
include_directories(
    "${PROJECT_SOURCE_DIR}/test/include"
    "${PROJECT_SOURCE_DIR}/thirdparty/sqlite3/include"
    )
file(GLOB_RECURSE SRC "${PROJECT_SOURCE_DIR}/test/src/*.cpp"
                      "${PROJECT_SOURCE_DIR}/thirdparty/sqlite3/src/*.c"
                      )
find_package(Threads)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/output/bin)
add_executable(${APP_NAME} ${SRC})
target_link_libraries(${APP_NAME} ${CMAKE_THREAD_LIBS_INIT}
                                  dl
                                  )