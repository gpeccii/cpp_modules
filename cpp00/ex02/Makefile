NAME = Bank

SRC = $(wildcard *.cpp)

OBJS = $(SRC:.cpp=.o)

FLAGS := -Wall -Wextra -Werror -std=c++98

#COLORS
RED = \033[1;31m

GREEN = \033[1;32m

YELLOW = \033[1;33m

DEFAULT = \033[0m

all: $(NAME)

%.o : %.cpp
	@(c++ $(FLAGS) -c $< -o $@)

$(NAME): $(OBJS)
	@(c++ $(FLAGS) $(OBJS) -o $(NAME))
	@echo "$(GREEN)$(NAME) created!$(DEFAULT)"

clean:
	@rm -f $(OBJS)
	@echo "$(YELLOW)object files deleted!$(DEFAULT)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(RED)all deleted!$(DEFAULT)"

re: clean fclean all
