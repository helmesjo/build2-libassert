# libassert

This is a `build2` package for the [`libassert`](https://github.com/jeremy-rifkin/libassert)
C++ library. It provides an advanced assertion library with automatic expression
decomposition, stack traces, syntax highlighting, and rich diagnostic output.


## Usage

To start using `libassert` in your project, add the following `depends`
value to your `manifest`, adjusting the version constraint as appropriate:

```
depends: libassert ^2.2.1
```

Then import the library in your `buildfile`:

```
import libs = libassert%lib{assert}
```


## Importable targets

This package provides the following importable targets:

```
lib{assert}
```

The main compiled assertion library. Link against this target to use
`<libassert/assert.hpp>` and the rest of the public API.


## Configuration variables

This package provides the following configuration variables:

```
[bool] config.libassert.use_fmt       ?= false
[bool] config.libassert.no_std_format ?= false
[bool] config.libassert.build_testing ?= false
```

`config.libassert.use_fmt`: enable `{fmt}` integration (`-DLIBASSERT_USE_FMT`).
When `true`, the `fmt` package dependency becomes active and libassert will use
`fmt::formatter` specializations for stringification.

`config.libassert.no_std_format`: disable `std::format` support
(`-DLIBASSERT_NO_STD_FORMAT`). Set to `true` when the toolchain has a defective or
missing `<format>` implementation.

`config.libassert.build_testing`: expose internal headers required by the
`libassert-tests` package. Not intended for normal consumers.
