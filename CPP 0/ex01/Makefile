NAME	= PhoneBook

CPP		= @c++

FLAGS	= -Wall -Wextra -Werror -std=c++98

SRCS	= main.cpp \
		  Contact.cpp \
	   	  PhoneBook.cpp
	   
all : $(NAME)

$(NAME) :
	@$(CPP) $(FLAGS) $(SRCS) -o $(NAME)
	@echo "$(NAME) was successfully compiled !"

clean :
	@rm -rf $(NAME)
	@echo "$(NAME) was successfully deleted !"

fclean : clean

re : fclean all