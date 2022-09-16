#! /bin/bash

mkdir build && \
mkdir src && \
mkdir tests && \
touch ./src/challenge.c && \
touch ./src/challenge.h && \
touch ./tests/test_challenge.cc && \
touch Challenge.md && \
cp ../scripts/templates/Makefile . && \
cp ../scripts/templates/CMakeLists.txt .