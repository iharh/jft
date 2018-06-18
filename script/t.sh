#! /bin/env bash
#export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:build/libs/clbkenlm/shared
#export ASAN_SYMBOLIZER_PATH=/usr/bin/llvm-symbolizer
ASAN_OPTIONS=symbolize=1 build/exe/test1/sanitizer/test1
