set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

set(SRCS tester.c)
if(INCLUDE_FOO)
  set(SRCS foo.cc ${SRCS})
endif()

# Bug MSVC: tester.c does not get -std:c11 when `foo.cc` is included in library
add_library(tester STATIC ${SRCS})
