CC = gcc
C_FLAG=-c
FILES=wait.o wait1.o
OBJ=main
RM = rm -rf 
$(OBJ):$(FILES)
	$(CC) $(FILES) -o $@
%.o:%.c
	$(CC) $(C_FLAG) $^
clean:
	$(RM) $(FILES) $(OBJ)
