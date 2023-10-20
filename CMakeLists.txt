cmake_minimum_required(VERSION 3.15 FATAL_ERROR)

set(PROJECT_NAME
    CADEX_task    
)

project(${PROJECT_NAME}
        VERSION 0.2
        
)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin) # Указывает путь для .exe файла

add_subdirectory(src/lib)
add_subdirectory(src/sources)