#include "module.h"

void foo()
{
	int i;
	for (i = 0; i < modules_size; i++) {
		modules[i]->foo();
	}
}
