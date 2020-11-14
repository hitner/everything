cd ..
if not exist build_everything mkdir build_everything
cmake -G "Visual Studio 15" -S everything -B build_everything

@PAUSE