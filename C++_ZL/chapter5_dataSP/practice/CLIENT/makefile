obj = test.o client.o

main: $(obj)
	g++ $(obj) -o main

test.o: test.cpp client.h
	g++ -c test.cpp
client.o: client.cpp client.h
	g++ -c client.cpp

.PHONY:clean  #phony target	
clean:
	rm *.o #clean all .o files

