NAME	=	Serena
CC		=	clang++
HEADER	=	ClapTrap.hpp ScavTrap.hpp
OBJDIR	=	obj
SRC		=	main.cpp ClapTrap.cpp ScavTrap.cpp 

OBJ 	=	$(addprefix $(OBJDIR)/, $(SRC:.cpp=.o))
CFLAGS	=	-Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "Ca compile \\o/ \nL'util s'appelle $(NAME)\n"

$(OBJDIR)/%.o: %.cpp
	@mkdir -p obj
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)
	@rm -rf obj

fclean: clean
	@rm -f $(NAME)
	@rm -rf obj

re: fclean all

.PHONY: clean fclean all re