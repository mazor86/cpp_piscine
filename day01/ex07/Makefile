
NAME = ex07
CC = clang++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = ex07.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $@

%.o: %.cpp
	$(CC) $(FLAGS) -c -o $@ $<

clean:
	rm $(OBJS) *.replace

fclean: clean
	rm $(NAME)

re: fclean all

.PHONY: all clean fclean re
