# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pjolidon <pjolidon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/01 11:16:53 by pjolidon          #+#    #+#              #
#    Updated: 2024/11/13 21:05:38 by pjolidon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Defintions
NAME	=	get_next_line.a

# Source files
SRCFIL	=	get_next_line.c \
			get_next_line_utils.c

BSRCFIL	=	get_next_line_bonus.c \
			get_next_line_utils_bonus.c

# Test files
TSTFIL	=	test.c

# Folders
TSTDIR	=	./
SRCDIR	=	./
OBJDIR	=	./
RESDIR	=	./

# Add folder to files and objects
SRCS	:=	$(addprefix $(SRCDIR), $(SRCFIL))
BSRCS	:=	$(addprefix $(SRCDIR), $(BSRCFIL))
OBJS	:=	$(addprefix $(OBJDIR), $(SRCFIL:.c=.o))
BOBJS	:=	$(addprefix $(OBJDIR), $(BSRCFIL:.c=.o))
TST		:=	$(addprefix $(TSTDIR), $(TSTFIL))

# Addon for cleaning debug files and folders
CLN		=	*out *dSYM

# Creation commands
CC		=	gcc
LIBFLG	=	-c -Wall -Werror -Wextra
CFLAGS	=	-Wall -Wextra -Werror
CFLDBG	=	-Wall -Wextra -Werror -g3
AR		=	ar rcs
RM		=	rm -f

# Actions
all:	$(NAME)

# Object files generation
%.o : %.c
		$(CC) $(CFLAGS) -c $< -o $@

$(OBJDIR)%.o : $(SRCDIR)%.c
		@mkdir -p $(OBJDIR)
		$(CC) $(CFLAGS) -c $< -o $@

# library
$(NAME):	$(OBJS)
		$(AR) $(NAME) $(OBJS)

$(BOBJS):	$(BSRCS)
		${CC} ${LIBFLG} ${BSRCS}

# bonus generation
bonus:		${BOBJS}
		$(AR) $(NAME) $(BOBJS)

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)
		$(RM) -r ${CLN}

re:			fclean all

# Test files compilation
test:		 $(NAME)
		$(CC) $(CFLDBG) $(TST) $(SRCS)

# Git commit message for make push
COMMSG	?= $(shell bash -c 'read -p "Message de commit: " commsg; echo $$commsg')
GIT2ND	= mygit


push:		ppush reps

pushend:	ppushend reps

render:		prender reps

# Enum repositories list and push
reps:
		@BRANCH="master"; \
		REMOTES=$$(git remote); \
		for REMOTE in $$REMOTES; do \
			echo "PUSH vers $$REMOTE sur la branche $$BRANCH"; \
			git push $$REMOTE $$BRANCH; \
		done

# Git push 
ppush:	fclean
		$(eval DATE = `date "+%Y-%m-%d %Hh%Mm%S"`)
		git add .
		git commit -m "${DATE} ${COMMSG} - make push"

# End of day git push
ppushend:	fclean
		$(eval DATE = `date "+%Y-%m-%d %Hh%Mm%S"`)
		git add .
		git commit -m "${DATE} - make pushend"

# Git push for rendering
prender:		fclean
		$(eval DATE = `date "+%Y-%m-%d %Hh%Mm%S"`)
		git add .
		git commit -m "${DATE} - make render"
		@git rm -r --cached ${TST} || true
		@git rm -r --cached ${TSTDIR} || true
		@git rm -r --cached ${OBJS} || true
		@git rm -r --cached *.pdf || true
render:		fclean
			$(eval DATE = `date "+%Y-%m-%d %Hh%Mm%S"`)
			git add .
			git commit -m "${DATE} - make render"
			git rm --cached test* || true
			git push
			git push ${GIT2ND}
#			git rm --cached Makefile || true

# naming booking (not mandatory)
.PHONY:		all clean fclean re run test push pushend render reps ppush ppushend prender
