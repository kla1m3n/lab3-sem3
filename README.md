# C++ laboratory work: CMake Presets and sanitizers

This project demonstrates how AddressSanitizer and UndefinedBehaviorSanitizer
detect a runtime error in a C++ program. The same CMake Presets are used locally,
inside the Dev Container, and in GitHub Actions.

## Build without sanitizers

```sh
cmake --preset default
cmake --build --preset default
ctest --preset default
```

## Build and check with sanitizers

```sh
cmake --preset asan
cmake --build --preset asan
ctest --preset asan
```

The first commit of the laboratory program intentionally reads past the end of
a dynamic array, so the sanitizer check fails with `heap-buffer-overflow`. The
current version uses the last valid index and passes the same check.
