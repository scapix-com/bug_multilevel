include(FetchContent)
FetchContent_Declare(
        cmodule
        URL "https://github.com/scapix-com/cmodule/archive/refs/tags/v1.0.33.tar.gz"
        URL_HASH SHA256=b56bf2f3b5acb979f1242757976eaf525caeea70714caa6e19571f65e0b60727
)
FetchContent_MakeAvailable(cmodule)

find_package(Scapix REQUIRED)

scapix_bridge_headers(${PROJECT_NAME} "com.example.lib" ${CMAKE_SOURCE_DIR}/include/SomeClass.h)
