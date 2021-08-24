CC = gcc
#INCDIR = -I ./includes
CFLAGS = -Wall -Wextra -Werror
COMPILE_C = $(CC) $(CFLAGS)
TARGET = do-op
SRCS = *.c
#OBJS = $(SRCS:%.c=%.o)
all : ${TARGET}

#.SUFFIXES :
#.SUFFIXES : .o .c

${TARGET} : ${SRCS}
	@ ${COMPILE_C} -o $@ $^

#.c.o : 
#	${COMPILE_C} -c $< -o $@

clean :
	@ rm -f ${*.o}
fclean : clean
#	rm -f ${TARGET}
#re : fclean all

.PHONY : all clean fclean
