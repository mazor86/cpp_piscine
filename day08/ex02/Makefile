
NAME = mutantstack
CC = clang++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp mutantstack.cpp
HEADER = mutantstack.hpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $@

%.o: %.cpp $(HEADER)
	$(CC) $(FLAGS) -c -o $@ $<

clean:
	rm $(OBJS)

fclean: clean
	rm $(NAME)

re: fclean all

.PHONY: all clean fclean re
