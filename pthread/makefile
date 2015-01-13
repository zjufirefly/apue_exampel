srcs=prog.c common.c
objs:=$(srcs:.c=.o)
deps:=$(srcs:.c=.d)

CFLAGS=-c -g -w

prog:$(objs)
	gcc -o prog $^ -lpthread

-include $(deps)
$(objs):%.o:%.c
	gcc $(CFLAGS) -MMD -MP -MF"$(@:%.o=%.d)" -o $@ $<


.PHONY: clean
clean:
	rm -rf prog *.o *.d


