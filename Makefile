LIB = -lm
C_FNS = OpampFunctions.c
C_MAIN = main.c $(C_FNS)

all:
	gcc $(C_MAIN) $(LIB) -o EXECUTE_PROGRAM

clean:
	rm EXECUTE_PROGRAM
