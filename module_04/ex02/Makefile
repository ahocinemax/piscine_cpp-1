NAME = I_dont_want_to_set_the_world_on_fire

################################################################################
#                           COMPILATION SETTING                        	       #
################################################################################

CC		= c++
CFLAGS	= -Wall -Wextra -Werror -MD -std=c++98 -g3 -fsanitize=address
LDFLAGS	= -Wall -Wextra -Werror -std=c++98 -g3 -fsanitize=address
SILENT	= --no-print-directory

################################################################################
#                               SOURCE FILES                              	   #
################################################################################

SRCS =	main.cpp \
		A_Animal.cpp \
		Brain.cpp \
		Dog.cpp \
		Cat.cpp \
				
################################################################################
#                               INCLUDES                             	       #
################################################################################

INC				=	-I ./includes/		\

LIBINC			=	

################################################################################
#                               PATH_TO_FILES                              	   #
################################################################################

SRC_PATH		=	./srcs/
OBJ_PATH		=	./objs/

################################################################################
#                               OUTPUT_FILES                              	   #
################################################################################


OBJS			=	$(addprefix $(OBJ_PATH), ${SRCS:.cpp=.o})
DEPENDS			=	$(addprefix $(OBJ_PATH), ${SRCS:.cpp=.d})

################################################################################
#                                   COLORS                                     #
################################################################################

BLUE			=	\033[0;34m
RED				=	\033[0;31m
GREEN			=	\033[0;32m
NO_COLOR		=	\033[m

################################################################################
#                                   RULES                                      #
################################################################################

all	: 
	@make compilation $(SILENT)
	@make $(NAME) $(SILENT)
	@make completed $(SILENT)

$(NAME) : linking $(OBJS)
	@$(CC) $(LDFLAGS) $(LIBINC) -o $@ $(OBJS) $(INC) 
	

$(OBJ_PATH)%.o : $(SRC_PATH)%.cpp
	@mkdir -p $(dir $@)
	@$(CC)  $(CFLAGS) $(LIBINC) -c -o $@ $<  $(INC)

clean : clean_files
	@rm -f $(OBJS)
	@rm -f $(OBJ_PATH)$(DEPENDS)
	@rm -rf $(OBJ_PATH)

fclean : clean clean_exec
	@rm -f $(NAME)

re : fclean 
	@make all $(SILENT)

test_right : all
	./$(NAME) maps/test.cub

test_wrong : all
	./$(NAME) maps/testwrong.cub

vtest : all
	valgrind --leak-check=full ./$(NAME) maps/test.cub

.PHONY : all clean fclean re compilation completed linking clean_files clean_exec test_right test_wrong vtest

-include $(DEPENDS)

################################################################################
#                                 PRINT_MSG                                    #
################################################################################

compilation :
	@echo "$(NAME) Compilation in progress..."

completed :
	@echo "$(GREEN)"
	@echo "$(NAME) -- Compilation complete !"
	@echo "$(NO_COLOR)"

linking :
	@echo "$(NAME) Linking in progress..."

clean_files :
	@echo "$(NAME) Cleaning files..."

clean_exec :
	@echo "$(NAME) Cleaning executable..."
