#!/bin/bash


# Compile and execute each C file in the sol/ folder to verify each one works:
for i in {1..15}; do
    echo "==============================================================================================================="
    echo "Compiling and executing Challenge${i}:"
    echo ""
    gcc -o Challenge${i}/sol/Challenge${i} Challenge${i}/sol/Challenge${i}.c
    ./Challenge${i}/sol/Challenge${i}
    echo "==============================================================================================================="
    echo ""
    echo ""
    echo ""
done
