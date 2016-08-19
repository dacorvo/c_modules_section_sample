SECTIONS
{
	.modules : {
		modules_start = .;
		*(.modules)
		modules_end = .;
	}
}
INSERT AFTER .rodata;
