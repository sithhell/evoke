#include "known.h"
#include <unordered_set>

static std::unordered_set<std::string> known = {
  // C++ standard headers
  "algorithm",
  "any",
  "array",
  "atomic",
  "bitset",
  "charconv",
  "chrono",
  "codecvt",
  "compare",
  "complex",
  "concepts",
  "condition_variable",
  "deque",
  "exception",
  "execution",
  "filesystem",
  "forward_list",
  "fstream",
  "functional",
  "future",
  "initializer_list",
  "iomanip",
  "ios",
  "iosfwd",
  "iostream",
  "istream",
  "iterator",
  "limits",
  "list",
  "locale",
  "map",
  "memory",
  "memory_resource",
  "mutex",
  "new",
  "numeric",
  "optional",
  "ostream",
  "queue",
  "random",
  "range",
  "ratio",
  "regex",
  "scoped_allocator",
  "set",
  "shared_mutex",
  "span",
  "sstream",
  "stack",
  "stdexcept",
  "streambuf",
  "string",
  "string_view",
  "strstream",
  "syncstream",
  "system_error",
  "thread",
  "tuple",
  "type_traits",
  "typeindex",
  "typeinfo",
  "unordered_map",
  "unordered_set",
  "utility",
  "valarray",
  "variant",
  "vector",
  "version",

  // c-compat C++ headers
  "cstdio",
  "cconio",
  "cassert",
  "cctype",
  "ccocale",
  "cmath",
  "csetjmp",
  "csignal",
  "cstdarg",
  "cstdlib",
  "cstring",
  "ctime",
  "ccomplex",
  "cstdalign",
  "cerrno",
  "clocale",
  "cstdatomic",
  "cstdnoreturn",
  "cuchar",
  "cfenv",
  "cwchar",
  "ctgmath",
  "cstdarg",
  "cstdbool",

  "stdio.h",
  "conio.h",
  "assert.h",
  "ctype.h",
  "cocale.h",
  "math.h",
  "setjmp.h",
  "signal.h",
  "stdarg.h",
  "stdlib.h",
  "string.h",
  "time.h",
  "complex.h",
  "stdalign.h",
  "errno.h",
  "locale.h",
  "stdatomic.h",
  "stdnoreturn.h",
  "uchar.h",
  "fenv.h",
  "wchar.h",
  "tgmath.h",
  "stdarg.h",
  "stdbool.h",
};

bool IsKnownHeader(const std::string& str) {
  return known.find(str) == known.end();
}

