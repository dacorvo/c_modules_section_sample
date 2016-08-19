#include "module.h"

extern struct module module_a;
extern struct module module_b;

struct module *modules[2] = {
	&module_a,
	&module_b
};

int modules_size = 2;
