
NAME = ex01
CXX = clang++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp FragTrap.cpp ScavTrap.cpp
HDRS = FragTrap.hpp ScavTrap.hpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(OBJS) -o $@

%.o: %.cpp $(HDRS)
	$(CXX) $(FLAGS) -c -o $@ $<

clean:
	rm $(OBJS)

fclean: clean
	rm $(NAME)

re: fclean all

.PHONY: all clean fclean re
