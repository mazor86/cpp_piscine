
NAME = ex06
CC = clang++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
HDRS = Weapon.hpp HumanA.hpp HumanB.hpp
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
