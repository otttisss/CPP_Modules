NAME				=	account

GREEN 				=	\033[0;32m
RED					=	\033[0;31m
RESET				=	\033[0m

CC					=	c++
FLAGS				=	-Wall -Wextra -Werror -std=c++98
INCLUDES			=	-I$(HEADERS_DIR)

HEADERS_LIST		=	Account.hpp
HEADERS_DIR			=	./includes/
HEADERS				=	$(addprefix $(HEADERS_DIR), $(HEADERS_LIST))

SOURCES_DIR			=	sources/
SOURCES_LIST		=	Account.cpp test.cpp

SOURCES				=	$(addprefix $(SOURCES_DIR), $(SOURCES_LIST))


OBJECTS_DIR			=	objects/
OBJECTS_LIST		=	$(patsubst %.cpp, %.o, $(SOURCES_LIST))
OBJECTS				=	$(addprefix $(OBJECTS_DIR), $(OBJECTS_LIST))

all					:	$(NAME)

$(NAME)				:	$(OBJECTS_DIR) $(OBJECTS)
					@$(CC) $(FLAGS) $(INCLUDES) $(OBJECTS) -o $(NAME)
					@echo "\n$(NAME): $(GREEN)object files were created$(RESET)"
					@echo "$(NAME): $(GREEN)$(NAME) was created$(RESET)"

$(OBJECTS_DIR)		:
					@mkdir -p $(OBJECTS_DIR)
					@echo "$(NAME): $(GREEN)$(OBJECTS_DIR) was created$(RESET)"

$(OBJECTS_DIR)%.o	: $(SOURCES_DIR)%.cpp $(HEADERS)
					@$(CC) $(FLAGS) -c  $(INCLUDES) $< -o $@
					@echo "$(GREEN)*$(RESET)\c"

clean				:
					@rm -rf $(OBJECTS_DIR)
					@echo "$(NAME): $(RED)$(OBJECTS_DIR) was deleted$(RESET)"
					@echo "$(NAME): $(RED)object files were deleted$(RESET)"

fclean				: clean
					@rm -f $(NAME)
					@echo "$(NAME): $(RED)$(NAME) was deleted$(RESET)"

re					:
					@$(MAKE) fclean
					@$(MAKE) all

.PHONY				:	all clean fclean re