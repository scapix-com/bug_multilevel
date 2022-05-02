cmake_minimum_required(VERSION 3.22)

project(lib)

add_library(lib lib.cpp lib.h)
target_include_directories(lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

include(FetchContent)
FetchContent_Declare(
  cmodule
  URL "https://github.com/scapix-com/cmodule/archive/refs/tags/v1.0.32.tar.gz"
  URL_HASH SHA256=e6937c95d73188a5add846b27cd00160fe4f6ea31af33be417d2ab7ac19bd8d2
)
FetchContent_MakeAvailable(cmodule)

find_package(Scapix REQUIRED)

scapix_bridge_headers(lib "com.example.lib" ${CMAKE_CURRENT_SOURCE_DIR}/lib.h)
