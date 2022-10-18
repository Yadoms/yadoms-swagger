cmake_minimum_required(VERSION 3.1)
cmake_policy(SET CMP0091 NEW)
enable_language(CXX)

set(project_name yadoms-swagger)

project(${project_name})

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")

file(GLOB_RECURSE YADOMS_SWAGGER_SOURCES
    src/*
    readme.md
)

source_group(TREE ${CMAKE_CURRENT_SOURCE_DIR} FILES ${YADOMS_SWAGGER_SOURCES})
 
if (MSVC)
   add_definitions(/bigobj)
endif()

add_subdirectory(oatpp)
add_subdirectory(oatpp-swagger)


include_directories(
   ${OATPP_INCLUDE_DIR}
   ${OATPP_SWAGGER_INCLUDE_DIR}
   src
)

add_executable(${project_name}
        ${YADOMS_SWAGGER_SOURCES}
        src/App.cpp)
        
add_dependencies(${project_name}
    oatpp_build
    oatpp-swagger_build
)

target_link_libraries(${project_name}
   ${OATPP_LIBRARY}
   ${OATPP_SWAGGER_LIBRARY}
)

if(WIN32)
    target_link_libraries(${project_name} ws2_32)
endif()

set_target_properties(${project_name} PROPERTIES
        CXX_STANDARD 11
        CXX_EXTENSIONS OFF
        CXX_STANDARD_REQUIRED ON
)


