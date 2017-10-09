CC      = gcc
CFLAGS  = -Wall -Werror
SOURCE  = $(wildcard *.c)
EXE     = piglatin

.PHONY: all
all: $(EXE)

$(EXE): $(SOURCE)
	$(CC) $(CFLAGS) $(SOURCE) -o $(EXE)


.PHONY: clean
clean:
	rm -f $(OBJ) $(EXE)
