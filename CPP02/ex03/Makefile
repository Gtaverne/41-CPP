NAME	=	ex3
CC		=	clang++
HEADER	=	Fixed.hpp Point.hpp
OBJDIR	=	obj
SRC		=	main.cpp Fixed.cpp Point.cpp bsp.cpp

OBJ 	=	$(addprefix $(OBJDIR)/, $(SRC:.cpp=.o))
CFLAGS	=	-Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "Ca compile \\o/ \nL'util s'appelle ex3\n"

$(OBJDIR)/%.o: %.cpp
	@mkdir -p obj
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re