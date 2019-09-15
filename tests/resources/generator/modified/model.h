/* The content of this file was generated using a modified C profile of libCellML 0.2.0. */

#include <stddef.h>

extern const char VERSION[];
extern const char LIBCELLML_VERSION[];

extern const size_t STATE_COUNT;
extern const size_t VARIABLE_COUNT;

typedef enum {
    CONSTANT,
    COMPUTED_CONSTANT,
    ALGEBRAIC
} VariableType;

typedef struct {
    char name[5];
    char units[14];
    char component[13];
} VariableInfo;

typedef struct {
    char name[5];
    char units[14];
    char component[13];
    VariableType type;
} VariableInfoWithType;
