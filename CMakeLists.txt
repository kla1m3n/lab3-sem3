cmake_minimum_required(VERSION 3.23)

project(lab1_sanitizers LANGUAGES CXX)

option(ENABLE_SANITIZERS "Enable AddressSanitizer and UndefinedBehaviorSanitizer" OFF)

add_executable(lab1 src/main.cpp)

target_compile_features(lab1 PRIVATE cxx_std_20)

if(CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
    target_compile_options(lab1 PRIVATE -Wall -Wextra -Wpedantic)

    if(ENABLE_SANITIZERS)
        target_compile_options(
            lab1
            PRIVATE
                -fsanitize=address,undefined
                -fno-omit-frame-pointer
        )
        target_link_options(
            lab1
            PRIVATE
                -fsanitize=address,undefined
                -fno-omit-frame-pointer
        )
    endif()
elseif(ENABLE_SANITIZERS)
    message(FATAL_ERROR "The sanitizer preset requires GCC or Clang")
endif()

include(CTest)

if(BUILD_TESTING)
    add_test(NAME run_lab1 COMMAND lab1)
endif()
