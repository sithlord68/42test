# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pascal <pascal@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/01 11:16:53 by pjolidon          #+#    #+#              #
#    Updated: 2024/10/05 12:49:09 by pascal           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

DATE    = $(shell date --iso=hour | sed 's\+\h\' | sed 's\:\m\' | sed 's\T\_\')

${BIN}:
		printf "hello world\n"

all:	${BIN}
		printf "hello world\n"

clean:
		printf "nothing to clean\n"

fclean: clean

re:		fclean

push:	fclean
		git add .
		git commit -m "make push ${DATE}"
		git push
		git push ${GIT2ND}

.PHONY:	all clean fclean re test push render bonus
