#include<stdlib.h>
struct _reent { int a; };

struct _reent* _impure_ptr = NULL;
struct _reent* _global_impure_ptr = NULL;
