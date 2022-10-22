set(APP_BINARY ${PROJECT_NAME}_app)

add_executable(${APP_BINARY} main.cpp)

target_link_libraries(${APP_BINARY} PRIVATE ${PROJECT_NAME})