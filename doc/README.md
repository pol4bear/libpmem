# Requirements

- Cmake 3.1.9 or higher
- libstdc++
- C/C++ Compiler

# Supported Platforms

- Linux
- Windows
- macOS

# Quickstart

libpmem uses [Cmake](https://cmake.org/) as default build system. You can easily build library for your system using these build system.

1. Clone library to local system and move in to it.

   ```shell
   git clone https://github.com/pol4bear/libpmem.git
   cd libpmem
   ```

2. Create Ninja build file using Cmake.

   ```shell
   cmake -G Ninja -S . -B build_dir
   ```

3. Build library with using Cmake.

   ```shell
   cmake --build build_dir
   ```

# FAQ

## Can I use this library on my OS?

I've tested this library in Linux, Windows and macOS. So you can use it with no problem if you are Linux, Windows or macOS user.

## Can I use Make or Visual Studio instead Ninja?

Yes. I recommend you to use Ninja because you can get better experience. But you can use other build systems too. Just remove ```-G Ninja``` option on build file generation.

```shell
cmake -S . -B build_dir
```

## How can I build shared(dynamic) library?

You can give option to build shared(dynamic) library before build file generation.

```shell
cmake -G Ninja -S . -B build_dir -Dtype=shared
# or
cmake -G Ninja -S . -B build_dir -Dtype=dynamic
```

## Can I build library in debug mode?

Ofcourse you can build library in debug mode. You can add option before build file generation to build library in debug mode.

```shell
cmake -G Ninja -S . -B build_dir -DCMAKE_BUILD_TYPE=Debug
cmake --build build_dir
```

