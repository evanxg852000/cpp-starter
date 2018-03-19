#!/bin/bash

if [ $# -eq 0 ]
then
	cd cmake/
    cmake ..
    make
    test/tests
elif [ $1 == "install" ]
then
    cd cmake/
    cmake ..
    make
    test/tests
    make install
elif [ $1 == "clean" ]
then
    rm -rf cmake/*
    rm -rf build/*
    rm -rf include/*
    touch cmake/.gitignore build/.gitignore include/.gitignore
fi