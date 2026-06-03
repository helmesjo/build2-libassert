#include <libassert/version.hpp>

#undef NDEBUG
#define NDEBUG
#include <cstdio>

int main()
{
  printf("LIBASSERT_VERSION_MAJOR: %d\n", LIBASSERT_VERSION_MAJOR);
  printf("LIBASSERT_VERSION_MINOR: %d\n", LIBASSERT_VERSION_MINOR);
  printf("LIBASSERT_VERSION_PATCH: %d\n", LIBASSERT_VERSION_PATCH);
  printf("LIBASSERT_VERSION: %d\n", LIBASSERT_VERSION);
}

