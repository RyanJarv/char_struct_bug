#include <pybind11/pybind11.h>

struct string_struct {
    std::string a;
};

struct char_struct {
    const char * a;
};

namespace py = pybind11;

PYBIND11_MODULE(char_struct_bug, m) {
    py::class_<string_struct>(m, "string_struct")
        .def(py::init<>())
        .def_readwrite("a", &string_struct::a);

    py::class_<char_struct>(m, "char_struct")
        .def(py::init<>())
        .def_readwrite("a", &char_struct::a);
}
