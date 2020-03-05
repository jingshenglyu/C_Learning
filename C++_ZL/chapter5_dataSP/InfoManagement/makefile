obj = main.o account.o

main: $(obj)
	g++ $(obj) -o main

main.o: main.cpp account.h
	g++ -c main.cpp

account.o: account.cpp account.h
	g++ -c account.cpp

.PHONY:clean  #phony target	
clean:
	rm *.o #clean all .o files

