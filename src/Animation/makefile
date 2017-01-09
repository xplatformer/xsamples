NAME = "Animation"

all:
	@echo "Compiling..."
	g++ -o $(NAME) $(NAME).cpp -L/usr/X11R6/lib -lX11 -I../References  -lstdc++ 

clean:
	rm -f $(OBJS) *.o

purge:
	rm -f $(NAME) $(OBJS) *.o

run: all
	@echo "Running..."
	./$(NAME) 



