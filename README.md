# libassert - C++ assertion library

`libassert` is a C++ assertion library that provides automatic expression
decomposition, stack traces, syntax highlighting, and diagnostic output
on assertion failure.

This file contains setup instructions and other details that are more
appropriate for development rather than consumption. If you want to use
`libassert` in your `build2`-based project, then instead see the accompanying
package [`README.md`](libassert/PACKAGE-README.md) file.

The development setup for `libassert` uses the standard `bdep`-based workflow.
For example:

```
git clone https://github.com/build2-packaging/libassert.git
cd libassert

bdep init -C @gcc cc config.cxx=g++
bdep update
bdep test
```
