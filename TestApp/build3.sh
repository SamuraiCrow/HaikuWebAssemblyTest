#!/bin/bash

clang -DBYTECODE -I../os -I.. -I../os/app -I../os/interface -I../os/support -I../os/kernel -I../os/storage -I../../haiku/headers/posix -I../../haiku/headers/build/gcc-2.95.3 -c --target=wasm32 -oApp.wasm App.cpp
