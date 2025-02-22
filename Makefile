CC = gcc
CFLAGS = -Wall -Wextra -pedantic -std=c11

OUTPUT = memofib
SOURCE_FILES = memofib.c

all: $(OUTPUT)

$(OUTPUT): $(SOURCE_FILES) 
		$(CC) $(CFLAGS) -o $(OUTPUT) memofib.c

clean:
		rm -f $(OUTPUT)