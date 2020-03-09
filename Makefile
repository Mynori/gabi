##
## gabi 
## 2020
##

CC			= gcc
CFLAGS		= -Werror -Wall -Wextra -Wpedantic -pedantic -Iinclude/

VPATH		:= src
OBJDIR		= obj
UTILSOBJDIR = utilities

$(OBJDIR)/%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

SRCS		= 	tokenManager.c 			\
				utilities/getNextLine.c	\
				utilities/charThings.c	\
				main.c

OBJS		= $(SRCS:%.c=$(OBJDIR)/%.o)

NAME		= gabi

$(NAME):	all

createObjDir:
	mkdir -p $(OBJDIR)
	mkdir -p $(OBJDIR)/$(UTILSOBJDIR)

all:	createObjDir	$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJDIR)

fclean:	clean
	rm -rf $(NAME)

re:	fclean	all