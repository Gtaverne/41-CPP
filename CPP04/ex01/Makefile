NAME	=	fire
CC		=	clang++
HEADER	=	Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp Brain.hpp
OBJDIR	=	obj
SRC		=	main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp

OBJ 	=	$(addprefix $(OBJDIR)/, $(SRC:.cpp=.o))
CFLAGS	=	-Wall -Wextra -Werror -std=c++98 -fsanitize=address

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "Ca compile \\o/ \nL'util s'appelle ./fire\n"

$(OBJDIR)/%.o: %.cpp
	@mkdir -p obj
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re