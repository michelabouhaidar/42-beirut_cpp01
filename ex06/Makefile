NAME     := harl
CXX      := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98

SRCS := main.cpp Harl.cpp
OBJS := $(SRCS:.cpp=.o)

all: $(NAME)
$(NAME): $(OBJS) Harl.hpp
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

%.o: %.cpp Harl.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re