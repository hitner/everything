
set(TARGET_NAME test_on_console)

set(TARGET_SOURCES main.cpp)

add_executable(${TARGET_NAME} ${TARGET_SOURCES})

target_link_libraries(${TARGET_NAME} PUBLIC ${UTILITY_TARGET})

target_include_directories(${TARGET_NAME} PUBLIC ${PROJECT_SOURCE_DIR}/utility)
