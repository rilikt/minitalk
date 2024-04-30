# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: timschmi <timschmi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/30 12:29:08 by timschmi          #+#    #+#              #
#    Updated: 2024/04/30 13:25:38 by timschmi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS = client.c server.c

OFILES = $(SRCS:.c=.o)

EXES = $(SRCS:.c=)

SUBDIRS = ft_printf/ libft/

CC = cc

CFLAGS = -Wall -Wextra -Werror

all: $(SUBDIRS)

$(SUBDIRS): $(OFILES) $(EXES)
	$(MAKE) -C $@

%: %.c
	$(CC) $(CFLAGS) -o $@ $<
	
clean:
	$(MAKE) -C libft/ clean
	$(MAKE) -C ft_printf/ clean
	rm -f $(OFILES)
	rm -f $(SRCS:.c=)

fclean: clean
	$(MAKE) -C libft/ fclean
	$(MAKE) -C ft_printf/ fclean
	rm -f $(NAME)

re: fclean all

.PHONY:  all clean fclean re $(SUBDIRS)