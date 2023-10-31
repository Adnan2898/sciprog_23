CC = gcc
CCFLAGS = -O2
LDFLAGS = -lm

matmultc: Practical06.o matmult.o
	$(CC) -o matmultc Practical06.o matmult.o $(LDFLAGS)

matmult.o: matmult.c
	$(CC) -c $(CCFLAGS) matmult.c

main.o: main.c
	$(CC) -c $(CCFLAGS) Practical06.c