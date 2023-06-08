# CMake based project with conan support

# Usage
```
# Build Development Docker
$ cd tools; make build-cpp-dev-ubuntu-conan; cd ..

# "Fall" into development environment
$ docker run -it --rm -v $(pwd):$(pwd) --workdir=$(pwd) cpp-dev-ubuntu-conan

# Setting packages with Conan
$ conan profile detect --force
$ mkdir build; cd build
$ conan install .. --output-folder=. --build=missing

# Configure CMake with Benchamr and Tests
$ cmake .. -DCMAKE_TOOLCHAIN_FILE=conan_toolchain.cmake -DCMAKE_BUILD_TYPE=Release -DENABLE_TESTING=ON -DENABLE_BENCHMARK=ON -DENABLE_GTEST=ON

# Build the Project
$ cmake --build .

# Run Benchmark example
$ ./tests/benchmark_example
$ ...

# Run GTest example
$ ./tests/gtest_example
$ ...

# Happy hacking!
```
