# CMakeList.txt : CMake project for Block Buster, include source and define
# project specific logic here.
#
project (BLOCK_BUSTER)
cmake_minimum_required (VERSION 3.8)

# Find WxWidgets
#set(wxWidgets_ROOT_DIR "C:/wxWidgets-3.1.3/out/install/x64-Debug")
#set(wxWidgets_LIB_DIR "C:/wxWidgets-3.1.3/out/install/x64-Debug/lib/vc_x64_dll")

#find_package(wxWidgets COMPONENTS core base REQUIRED)
#include(${wxWidgets_USE_FILE})

find_package (SFML 2.5 COMPONENTS window REQUIRED)

if (WIN32)
 if (MSVC)
  add_compile_options(/W3 /Za /TP /permissive-)
 endif (MSVC)
endif (WIN32)

add_executable (${PROJECT_NAME} "app.cpp" "frame.h")

# Link libraries
target_link_libraries(${PROJECT_NAME} ${SFML_LIBRARIES} ${SFML_DEPENDENCIES})

# TODO: Add tests and install targets if needed.
