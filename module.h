struct module {
	void (*foo)();
	void (*bar)();
};

extern struct module *modules[];
extern int modules_size;
