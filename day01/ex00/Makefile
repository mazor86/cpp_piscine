
NAME = ex00
CC = clang++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp Pony.cpp
HDRS = Pony.hpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $@

%.o: %.cpp $(HDRS)
	$(CC) $(FLAGS) -c -o $@ $<

clean:
	rm $(OBJS)

fclean: clean
	rm $(NAME)

re: fclean all

.PHONY: all clean fclean re
