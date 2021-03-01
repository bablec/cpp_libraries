CFLAGS = -c -I../include
OBJS = ../src/fraction.o ../src/dictionary.o

libdataStructures.a: $(OBJS)
	ar r libdataStructures.a $(OBJS)
	ranlib libdataStructures.a

../src/fraction.o: ../src/fraction.cc
	g++ $(CFLAGS) -o ../src/fraction.o ../src/fraction.cc

../src/dictionary.o: ../src/dictionary.cc
	g++ $(CFLAGS) -o ../src/dictionary.o ../src/dictionary.cc
