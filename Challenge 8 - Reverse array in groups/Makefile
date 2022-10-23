test: ./tests/test_challenge.cc ./src/challenge.h CMakeLists.txt
	cmake -S . -B build && \
	cmake --build build && \
	cd build && ctest --output-on-failure

debug: ./src/challenge.c ./src/challenge.h
	gcc -g -o ./build/challenge ./src/challenge.c && \
	gdb ./build/challenge