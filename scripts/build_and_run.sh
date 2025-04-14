#!/bin/bash

# Navigate to the project directory
cd "$(dirname "$0")/.."

# Create the build directory if it doesn't exist
if [ ! -d "build" ]; then
    mkdir build
fi

# Navigate to the build directory
cd build

# Run CMake to configure the project
cmake ..

# Build the project
make

# Run the application
if [ -f "bin/rudawies" ]; then
    ./bin/rudawies
else
    echo "Build failed or executable not found."
fi