cmake -H. -Bbuild
cmake --bulid build

ln -sf `pwd`/build/compile_commands.json
