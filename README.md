# Usage

Confirmed broken with CMake 3.18.3 (released 9/2020) and confirmed working properly with CMake 3.25 rc 4 (released 11/2022).

```
./repro.sh  # Run CMake and build steps to repro issue
./only_c.sh  # Run CMake and build steps without `foo.cc` in the target, which passes -std:c11 correctly and builds correctly
```