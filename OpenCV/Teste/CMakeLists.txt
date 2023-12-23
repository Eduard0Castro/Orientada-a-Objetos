cmake_minimum_required(VERSION 2.10)

project(Teste)
set(OpenCV_DIR C:/opencv/build)


find_package(OpenCV REQUIRED)



file(GLOB SOURCE_FILES "src/*.cpp"
                        "src/*.hpp")


 
add_executable(${PROJECT_NAME} ${SOURCE_FILES}) 



target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS})