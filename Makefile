CC			= gcc
CFLAGS		= -Werror -Wall -Wextra -Wpedantic -pedantic -Iinclude/

VPATH		:= src
OBJDIR		= obj

$(OBJDIR)/%.o: %.c
	mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -c -o $@ $<

SRCS		= main.c
OBJS		= $(SRCS:%.c=$(OBJDIR)/%.o)
NAME		= gabi

$(NAME):	all

all:	$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJDIR)

fclean:	clean
	rm -rf $(NAME)

re:	fclean	all