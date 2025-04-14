# src/CMakeLists.txt
file(GLOB GAME_SOURCES "game/*.cpp")
file(GLOB UI_SOURCES "ui/*.cpp")
file(GLOB MAIN_SOURCES "main.cpp")

add_executable(rudawies ${MAIN_SOURCES} ${GAME_SOURCES} ${UI_SOURCES})
