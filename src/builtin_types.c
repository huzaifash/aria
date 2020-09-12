#include <builtin_types.h>
#include <token.h>
#include <data_type.h>

BuiltinTypes builtin_types;

void builtin_types_init(void) {
    builtin_types.void_type = data_type_from_string_int("void", 0);
}
