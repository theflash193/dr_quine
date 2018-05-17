# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: grass-kw <grass-kw@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/01/26 16:37:37 by grass-kw          #+#    #+#              #
#    Updated: 2016/07/22 15:15:28 by grass-kw         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
CFLAGS=-Wall -Werror -Wextra
COLLEEN=Colleen
GRACE=Grace
SULLY=Sully

COLLEEN_OBJ=Colleen.c
GRACE_OBJ=Grace.c
SULLY_OBJ=Sully.c


OBJ=$(COLLEN_OBJ:.c=.o)

all: $(COLLEEN) $(GRACE) $(SULLY)

$(COLLEEN): 
	$(CC) $(CFLAGS) $(COLLEEN_OBJ) -o $(COLLEEN)

$(GRACE): 
	$(CC) $(CFLAGS) $(GRACE_OBJ) -o $(GRACE)

$(SULLY): 
	$(CC) $(CFLAGS) $(SULLY_OBJ) -o $(SULLY)

clean:
	rm -rf $(COLLEEN).exe
	rm -rf $(GRACE).exe
	rm -rf $(SULLY).exe

fclean: clean
	rm -rf $(COLLEEN)
	rm -rf $(GRACE)
	rm -rf $(SULLY)

re: fclean all
