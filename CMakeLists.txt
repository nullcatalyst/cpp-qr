cmake_minimum_required(VERSION 3.10)

project(qr)
set(CMAKE_CXX_STANDARD 17)

add_library(qr "")

target_include_directories(qr
PUBLIC
    include
PRIVATE
    src
)

target_compile_definitions(qr
PUBLIC
    STATIC_IN_RELEASE=static
)

target_sources(qr
PRIVATE
    src/bitstream.c
    src/mask.c
    src/qrencode.c
    # src/qrencode_inner.h
    src/qrinput.c
    src/qrspec.c
    src/rsecc.c
    src/split.c

    src/print.cpp
)
