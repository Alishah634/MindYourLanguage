#!/bin/bash

# Step 1: Create the directories for each challenge (1 to 6)
for i in {1..6}; do
    mkdir -p Challenge${i}/
    mkdir -p Challenge${i}/sol
done

# Step 4: Compile each C file and move the executables to the `sol/` folder
for i in {1..6}; do
    gcc -o Challenge${i}/sol/Challenge${i} Challenge${i}/sol/Challenge${i}.c
    ./Challenge${i}/sol/Challenge${i}
done
