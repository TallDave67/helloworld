// helloworld.cpp
module;
#include <stdio.h>

export module helloworld;  // module declaration
export void hello();

module :private;
void hello() { puts("Hello world!"); }

