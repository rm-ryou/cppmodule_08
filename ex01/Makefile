NAME := a.out

SRCS_DIR := ./srcs
OBJS_DIR := ./objs
DEPS_DIR := ./deps
SRCS := $(wildcard $(SRCS_DIR)/*.cpp)
OBJS := $(SRCS:$(SRCS_DIR)/%.cpp=$(OBJS_DIR)/%.o)
DEPS := $(SRCS:$(SRCS_DIR)/%.cpp=$(OBJS_DIR)/%.d)

INC := -I ./srcs
CXX := c++
CXXFLAGS := -Wall -Wextra -Werror -std=c++98 $(INC)

RM := rm -rf

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.cpp
	@mkdir -p $(OBJS_DIR)/$(*D)
	@mkdir -p $(DEPS_DIR)/$(*D)
	$(CXX) $(CXXFLAGS) -MP -MMD -MF $(DEPS_DIR)/$(*).d -c $< -o $@

clean:
	$(RM) $(OBJS_DIR)
	$(RM) $(DEPS_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

test: all
	@./$(NAME)

-include $(DEPS)

.PHONY: all clean fclean re test