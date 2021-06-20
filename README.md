# Hello World

This project demonstrates modules in C++20.

Uses clang compiler on linux (pop os 20.10).

## Steps

cd build

./doCmake.sh

make VERBOSE=1

./helloworld-driver

## History

dates: June 19, 2021
duration: 8 hours

### IDE Scramble

After discovering another developer's code using modules that required the clang compiler, I spent about an hour investigating IDEs with clang support, such as Eclipse, Qt, CLion and VS Code.

So many hoops to jump through with these IDEs.

Once I realized I had full control with CMake and make I ditched the IDEs.

### Core code from Another Developer

These folks gave me my start.

[Another Developer](https://stackoverflow.com/questions/57300495/how-to-use-c20-modules-with-cmake)

### Setting clang as Compiler

These folks were very helpful.

[Choose correct Compiler from Alternatives](https://askubuntu.com/questions/791616/set-clang-3-8-as-default)

sudo update-alternatives --config cc

> There are 2 choices for the alternative cc (providing /usr/bin/cc).
> 
>   Selection    Path            Priority   Status
>   
> ------------------------------------------------------------
>   0            /usr/bin/gcc     20        auto mode
>   
>   1            /usr/bin/clang   10        manual mode
> 
>   2            /usr/bin/gcc     20        manual mode

### Setting clang Compile Options

Good details from these folks.

[Compiler Options](https://stackoverflow.com/questions/7031126/switching-between-gcc-and-clang-llvm-using-cmake)

### Help at the Final Hour

Anything being included or imported by the module I was trying to create was flagged as undefined by compiler.

Thanks to Arthur O’Dwyer for providing the particular syntax that pushed this project to completion.

[Things the module uses must be outside of the module](https://quuxplusone.github.io/blog/2019/11/07/modular-hello-world/)




