NAME     := libftprintf.a
CC       := gcc
AR       := ar
ARFLAGS  := rcs
CFLAGS   := -Wall -Wextra -Werror
OBJDIR   := obj


SRC =	ft_printf.c
OBJ = $(patsubst %.c,$(OBJDIR)/%.o,$(SRC))

all: $(NAME)

GRAD1 = \033[38;2;255;120;255m
GRAD2 = \033[38;2;220;100;255m
GRAD3 = \033[38;2;180;80;255m
GRAD4 = \033[38;2;140;70;255m
GRAD5 = \033[38;2;100;60;255m
GRAD6 = \033[38;2;60;50;255m
RESET = \033[0m

all: $(NAME)

$(NAME): $(OBJ)
	@$(AR) $(ARFLAGS) $@ $^
	@echo ""
	@echo "$(GRAD1)                                                      ███  $(RESET)"
	@echo "$(GRAD1)                         █                    █     ██ ███ $(RESET)"
	@echo "$(GRAD2)                        ███                  ██    ██   ███$(RESET)"
	@echo "$(GRAD2)                         █                   ██    ██      $(RESET)"
	@echo "$(GRAD3)    ████   ███  ████                       ██████████      $(RESET)"
	@echo "$(GRAD3)   █ ███  █ ████ ████ ████    ███  ████   ████████ ██████  $(RESET)"
	@echo "$(GRAD3)  █   ████   ██   ████  ███    ████ ████ █   ██    █████   $(RESET)"
	@echo "$(GRAD4) ██    ██    ██          ██     ██   ████    ██    ██      $(RESET)"
	@echo "$(GRAD4) ██    ██    ██          ██     ██    ██     ██    ██      $(RESET)"
	@echo "$(GRAD4) ██    ██    ██          ██     ██    ██     ██    ██      $(RESET)"
	@echo "$(GRAD4) ██    ██    ██          ██     ██    ██     ██    ██      $(RESET)"
	@echo "$(GRAD4) ██    ██    ██          ██     ██    ██     ██    ██      $(RESET)"
	@echo "$(GRAD5) ███████     ███         ██     ██    ██     ██    ██      $(RESET)"
	@echo "$(GRAD5) ██████       ███        ███ █  ███   ███     ██   ██      $(RESET)"
	@echo "$(GRAD5) ██                       ███    ███   ███          ██     $(RESET)"
	@echo "$(GRAD6) ██                                                  ██    $(RESET)"
	@echo "$(GRAD6) ██                                                        $(RESET)"
	@echo "$(GRAD6)  ██                                                       $(RESET)"
	@echo "$(GRAD6)                                                           $(RESET)"
	@echo ""
	@echo "$(GRAD1)Archive built successfully:$(RESET) $(NAME)"
	@echo ""

$(OBJDIR)/%.o: %.c | $(OBJDIR)
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJDIR):
	mkdir -p $(OBJDIR)

clean:
	@echo "Removing object files."
	@rm -rf $(OBJDIR)

fclean: clean
	@echo "Removing archive."
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
