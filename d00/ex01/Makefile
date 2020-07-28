CC=g++
CFLAGS=-c -Wall -Wextra -Wall
SOURCES=src/main.cpp src/Phonebook.cpp src/Contact.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=phonebook

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) -I inc/ $< -o $@

clean:
	rm src/*.o
	rm $(EXECUTABLE)
