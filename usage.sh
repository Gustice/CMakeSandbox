#!/bin/bash

# Create build folder and starts configuration
cmake -S . -B build  # artefacts created in "build"
# Run generation
cmake --build build # artefacts created in "build"
# Installation
cmake --install build # artefacts from "build" are installed

## interesting arguments
    cmake --system-information # displays found tooling
    cmake --log-context # displays
    cmake --trace # verbose configuration
    cmake --verbose # verbose generation
    cmake --fresh # force configuration stage
    cmake --parallel # parallel generation
    cmake --clean-first # prerun clean target

# Run cmake as script
cmake -P script 
cmake -D var=value -P script -- args
# Run cmake platform agnostic shell command
cmake -E cmd
# Run a workflow Preset
cmake --workflow
