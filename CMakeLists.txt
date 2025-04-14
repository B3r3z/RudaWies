cmake_minimum_required(VERSION 3.10)
project(RudaWies)

# Ustawienie standardu C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Ustawienie katalogu wyjściowego dla plików wykonywalnych
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

# Dodanie katalogów z plikami nagłówkowymi
include_directories(${PROJECT_SOURCE_DIR}/include)

# Dodanie podkatalogu ze źródłami
add_subdirectory(src)
# Opcjonalnie: Dodanie testów, only if tests/CMakeLists.txt exists
if(EXISTS ${PROJECT_SOURCE_DIR}/tests/CMakeLists.txt)
	enable_testing()
	add_subdirectory(tests)
endif()