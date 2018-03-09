cmake_minimum_required(VERSION 3.10)

project(qrcode VERSION 4.0.0)

add_library(qrcode "")

target_include_directories(qrcode
PUBLIC
    include
PRIVATE
    src
)

target_compile_definitions(qrcode
PUBLIC
    MAJOR_VERSION=${PROJECT_VERSION_MAJOR}
    MINOR_VERSION=${PROJECT_VERSION_MINOR}
    MICRO_VERSION=${PROJECT_VERSION_PATCH}
    VERSION="${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}.${PROJECT_VERSION_PATCH}"
    STATIC_IN_RELEASE=static
)

target_sources(qrcode
PRIVATE
    src/bitstream.c
    src/mask.c
    src/mmask.c
    src/mqrspec.c
    src/qrenc.c
    src/qrencode.c
    # src/qrencode_inner.h
    src/qrinput.c
    src/qrspec.c
    src/rsecc.c
    src/split.c
)
