# char_struct_bug for pybind11

```
>>> import char_struct_bug
>>> s = char_struct_bug.string_struct()
>>> s.a = 'asdf'
>>> s.a
'asdf'
>>> c = char_struct_bug.char_struct()
>>> c.a = 'asdf'
>>> c.a
Traceback (most recent call last):
  File "<stdin>", line 1, in <module>
UnicodeDecodeError: 'utf-8' codec can't decode byte 0xe0 in position 0: invalid continuation byte
```


## Prerequisites

**On Unix (Linux, OS X)**

* A compiler with C++11 support
* CMake >= 2.8.12

**On Windows**

* Visual Studio 2015 (required for all Python versions, see notes below)
* CMake >= 3.1


## Installation

Just clone this repository and pip install. Note the `--recursive` option which is
needed for the pybind11 submodule:

```bash
git clone --recursive https://github.com/RyanJarv/char_struct_bug.git
pip install ./char_struct_bug
```

With the `setup.py` file included in this example, the `pip install` command will
invoke CMake and build the pybind11 module as specified in `CMakeLists.txt`.
