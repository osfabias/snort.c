# Testing

This directory contains the test suite for the library using Google Test framework.

## Running Tests

### Building and Running Tests

```bash
# Build with tests enabled
cmake -DSNORT_BUILD_TESTS=ON ..
make

# Run tests using CTest (recommended)
ctest --verbose

# Or run tests directly with Google Test options
./test_snort --gtest_verbose
./test_snort --gtest_filter="*Basic*"  # Run only tests matching pattern
```

### Test Options

The project supports several CMake options for testing:

| Option | Default | Description |
|--------|---------|-------------|
| `SNORT_BUILD_TESTS` | `ON` (standalone) | Build test programs |
| `SNORT_ENABLE_COVERAGE` | `OFF` | Enable code coverage (requires Debug build) |

### Google Test Options

Google Test provides many command-line options for test execution:

```bash
# Run specific test suites
./test_snort --gtest_filter="UsnortBasicTest.*"

# Run tests with detailed output
./test_snort --gtest_verbose

# Run tests in random order
./test_snort --gtest_shuffle

# Stop on first failure
./test_snort --gtest_break_on_failure

# List all available tests
./test_snort --gtest_list_tests
```

### Code Coverage

When `SNORT_ENABLE_COVERAGE=ON` and build type is `Debug`, code coverage is automatically enabled for tests.

## Test Structure

- `test_main.c` - Main test file with Google Test test cases
- Add new test files as needed
