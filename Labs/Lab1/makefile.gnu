# Macros ========================================

CC= g++
CFLAGS= -Wall -Wextra -Werror -ansi -pedantic
LFLAGS= 

ERASE=rm
OBJECTS=hw-gnu.obj
EXE=hw-gnu.exe

# Targets ========================================

$(EXE) : $(OBJECTS)
	$(CC) $(LFLAGS) -o $(EXE) $(OBJECTS)

hw-gnu.obj : hw.cpp
	$(CC) -c -o hw-gnu.obj $(CFLAGS) hw.cpp
	
clean :
	$(ERASE) $(EXE) $(OBJECTS)