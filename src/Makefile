CC=g++
CFLAGS=-std=c++0x
CLIBS=-L/usr/lib/sfml/lib -lsfml-audio -lFLAC++
SRC=main.cpp SongInfo.cpp
OBJ=$(SRC:.cpp=.o)
EXEC=../RadiOo.out

all: objects
	$(CC) $(CFLAGS) $(OBJ) -o $(EXEC) $(CLIBS)

objects:
	$(CC) -c $(SRC)

.PHONY: clean mrproper

clean:
	rm -rf *.o

mrproper: clean
	rm -rf $(EXEC)
