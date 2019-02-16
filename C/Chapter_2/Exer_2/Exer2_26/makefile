CC = gcc # compiler to use
OPTIONS = -02 -g -Wall #-g for debug, -02 for optimise, -Wall for additional messages
#INCLUDES: -I.
OBJS = EX2_26.o #List of objects to build
.PHONY: all clean

EX2_26: ${OBJS}
	${CC} -o EX2_26 ${OBJS}

list: 
	@echo $(shell ls)

clean: 
	@echo "Cleaning up.."
	-rm -rf *.o
	-rm EX2_26
	-rm tags
