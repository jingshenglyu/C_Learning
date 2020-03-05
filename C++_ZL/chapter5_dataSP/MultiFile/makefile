obj = main.o Point.o

main: $(obj)
	g++ $(obj) -o main

main.o: main.cpp point.h
	g++ -c main.cpp

Point.o: Point.cpp point.h
	g++ -c Point.cpp

.PHONY:clean  #phony target	
clean:
	rm *.o #clean all .o files

