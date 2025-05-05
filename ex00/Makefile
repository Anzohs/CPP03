NAME = clap_trap
CXX = c++
FLAGS = -Wall -Wextra -Werror
SRC = ClapTrap.cpp main.cpp
OBJ = $(SRC:.cpp=.o)


%.o: %.cpp
	$(CXX) $(FLAGS) -c $< -o $@

all : $(NAME)


$(NAME): $(OBJ)
	$(CXX) $(OBJ) -o $(NAME) $(FLAGS)

clean:
	@rm -f $(OBJ)
	@echo "Objects Removed"

fclean: clean
	@rm -rf $(NAME)
	@echo "Executable removed"

re: fclean all