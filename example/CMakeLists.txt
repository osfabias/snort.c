add_executable(example main.c)
target_link_libraries(example PRIVATE snort)
target_compile_options(example PRIVATE ${SNORT_COMPILE_OPTIONS})