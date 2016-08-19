struct module {
	void (*foo)();
	void (*bar)();
};

extern const struct module modules_start[];
extern const struct module modules_end[];
