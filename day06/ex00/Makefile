
NAME = convert
CC = clang++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = Convert.cpp main.cpp
HEADER = Convert.hpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $@ -g

%.o: %.cpp $(HEADER)
	$(CC) $(FLAGS) -c -o $@ $<

test: $(NAME)
	@sh ./test.sh
clean:
	rm $(OBJS)

fclean: clean
	rm $(NAME)

re: fclean all

.PHONY: all clean fclean re test