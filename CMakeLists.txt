cmake_minimum_required(VERSION 3.16)
project(claude-session-pool CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(claudesessionpool
    src/main.cpp
    src/sessions.cpp
    src/rotate.cpp
    src/proxy.cpp
    src/cli.cpp
    src/state.cpp
)

target_include_directories(claudesessionpool PRIVATE include)

if(WIN32)
    target_link_libraries(claudesessionpool PRIVATE userenv)
endif()
