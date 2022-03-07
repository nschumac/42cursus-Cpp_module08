NAME = Templates 

SOURCES=	main.cpp			\

FLAGS = -Werror -Wall -Wextra -std=c++98

OBJECTS= $(SOURCES:.cpp=.o)

%.o: %.cpp
	@clang++ -Wall -Werror -Wextra -std=c++98 -o $@ -c $<

$(NAME): $(OBJECTS)
	clang++ $(FLAGS) $(OBJECTS) -o $@

all: $(NAME)

clean: 
	@rm -f $(OBJECTS)

fclean:
	@make clean
	@rm -f $(NAME)

re: fclean all