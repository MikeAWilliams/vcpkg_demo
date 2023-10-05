# vcpkg_demo
use vcpkg and cmake
* first install vcpkg https://vcpkg.io/en/getting-started.html
* make sure you add vcpkg to the path
* the build.sh specifies clang as I was experiementing wih clang when I wrote this
* i was lazy and hard coded the location of the vcpkg tool chain file. So you will need to edit that in the build.sh file
    * "-DCMAKE_TOOLCHAIN_FILE=/home/mike/source/vcpkg/scripts/buildsystems/vcpkg.cmake"
* in either folder run ./build.sh
