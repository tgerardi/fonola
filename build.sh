#!/bin/sh

set -xe

output_file="./obj/fonola"
src_files="./src"

g++ `pkg-config --cflags raylib` -o  "$output_file" "$src_files"/*.cpp `pkg-config --libs raylib` -lm -lglfw -ldl -lpthread

$output_file