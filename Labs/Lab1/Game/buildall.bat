cls
make -f makefile.gnu clean
make -f makefile.borland clean
make -f makefile.microsoft clean
dir gnu borland microsoft
pause
make -f makefile.gnu
make -f makefile.borland
make -f makefile.microsoft
dir gnu borland microsoft

