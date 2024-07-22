all:
	meson compile -C builddir
run: all
	builddir/Tables_Multiplication
setup:
	meson setup builddir