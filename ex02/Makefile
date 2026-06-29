
C++         = c++
C++_FLAGS   = -Wall -Wextra -Werror -std=c++98 -I$(INC_DIR)


SRC_DIR     = src
INC_DIR     = inc
OBJ_DIR     = obj


INFILES     = main.cpp Base.cpp

SRC_FILES   = $(addprefix $(SRC_DIR)/, $(INFILES))


OBJFILES    = $(INFILES:%.cpp=$(OBJ_DIR)/%.o)


NAME       = dynamic

all: $(NAME)

$(NAME): $(OBJFILES)
	$(C++) $(C++_FLAGS) $(OBJFILES) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	$(C++) $(C++_FLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re