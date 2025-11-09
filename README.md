# snort.c 🐖

`snort.c` is a C logging library.

## Table of Contents

- [Building the Project](#building-the-project)
- [Build Options](#build-options)
- [Using as a CMake Subdirectory](#using-as-a-cmake-subdirectory)

## Building the Project

### Prerequisites

- CMake 3.16 or higher
- C99 compatible compiler (GCC, Clang, MSVC)
- Git (for cloning)

### Basic Build

```bash
# Clone the repository
git clone https://github.com/MyGroup/snort.git
cd snort

# Create build directory
mkdir build
cd build

# Configure and build
cmake ..
make
```

### Build with Specific Options

```bash
# Build with all features enabled
cmake -DSNORT_BUILD_SHARED=ON -DSNORT_BUILD_EXAMPLE=ON -DSNORT_BUILD_TESTS=ON ..

# Build in Release mode
cmake -DCMAKE_BUILD_TYPE=Release ..
```

## Build Options

The project supports several CMake options to customize the build:

| Option | Default | Description |
|--------|---------|-------------|
| `CMAKE_BUILD_TYPE` | `Debug` | Build type: `Debug`, `Release`, `RelWithDebInfo`, `MinSizeRel` |
| `SNORT_BUILD_SHARED` | `OFF` | Build library as a shared library instead of static |
| `SNORT_BUILD_EXAMPLE` | `ON` (standalone) | Build example program demonstrating library usage |
| `SNORT_BUILD_TESTS` | `ON` (standalone) | Build test programs |

### Build Type Details

- **Debug**: Includes debug symbols, no optimization, enables `__SNORT_DEBUG__` macro
- **Release**: Optimized for performance, no debug symbols
- **RelWithDebInfo**: Optimized with debug symbols
- **MinSizeRel**: Optimized for minimal size

### Compiler-Specific Features

- **GCC/Clang**: Uses `-Wall -Wextra -Wpedantic` with additional warnings
- **MSVC**: Uses `/W4` for high warning level
- **All**: Position-independent code enabled, C99 standard enforced

## Using as a CMake Subdirectory

To use this library in your own CMake project:

```cmake
# Add the library as a subdirectory
add_subdirectory(snort)

# Link the library to your target
target_link_libraries(your_target PRIVATE snort)
```

The library will be built as a static library by default. To use as a shared library:

```cmake
set(SNORT_BUILD_SHARED ON)
add_subdirectory(snort)
target_link_libraries(your_target PRIVATE snort)
```

## Setting root directory for file paths in log

In order to set root directory for file paths in log messages set this compiler option:
```shell
-fmacro-prefix-map=/path/to/project=.
```
