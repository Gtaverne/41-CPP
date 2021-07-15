NAME	=	karenwaffen
CC		=	clang++
HEADER	=	Karen.hpp
OBJDIR	=	obj
SRC		=	main.cpp Karen.cpp

OBJ 	=	$(addprefix $(OBJDIR)/, $(SRC:.cpp=.o))
CFLAGS	=	-Wall -Wextra -Werror -std=c++98

all: $(NAME)

bonus: all

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "Ca compile \\o/ \nL'util s'appelle karenwaffen\n"

$(OBJDIR)/%.o: %.cpp
	@mkdir -p obj
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re bonus