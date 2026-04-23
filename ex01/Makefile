NAME = Moar_brainz!
CC = c++
FLAGS = -Wall -Wextra -Werror 
SRC = Zombie.cpp main.cpp zombieHorde.cpp
OBJ = $(SRC:.cpp=.o)
all : $(NAME)
$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)
%.o : %.cpp
	$(CC) $(FLAGS) -c $< -o $@
clean :
	rm -rf $(OBJ)
fclean : clean
	rm -rf $(NAME)
re : fclean all