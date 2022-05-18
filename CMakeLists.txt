cmake_minimum_required(VERSION 3.22)
project(glTF-Renderer)

set(CMAKE_CXX_STANDARD 14)

add_executable(glTF-Renderer
        src/main.cpp
        src/glad.c
        headers/shaderClass.h
        src/shaderClass.cpp
        headers/VBO.h
        src/VBO.cpp
        headers/EBO.h
        src/EBO.cpp
        headers/VAO.h
        src/VAO.cpp
        include/stb/stb_image.h
        headers/Mesh.h
        src/Mesh.cpp
        src/stb.cpp include/json/json.h headers/Model.h src/Model.cpp)

include_directories(GL)
target_link_libraries(glTF-Renderer GL glfw dl)
