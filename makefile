CC = g++
CFLAGS = -Wall -g
OBJS = main.o FinancialFunctions.o CLIFunctions.o
EXEC = program

program: main.o FinancialFunctions.o CLIFunctions.o
	$(CC) $(CFLAGS) main.o FinancialFunctions.o CLIFunctions.o -o program

main.o: main.cpp FinancialFunctions.cpp CLIFunctions.cpp
	$(CC) $(CFLAGS) -c main.cpp

FinancialFunctions.o: FinancialFunctions.cpp FinancialFunctions.h
	$(CC) $(CFLAGS) -c FinancialFunctions.cpp

CLIFunctions.o: CLIFunctions.cpp CLIFunctions.h
	$(CC) $(CFLAGS) -c CLIFunctions.cpp


clean:
	rm -f $(EXEC) $(OBJS)
