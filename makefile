include NLIB_CROSS

all: ${EXE_FILE}

${EXE_FILE}:
	${CC} ${C_FILE} -o ${EXE_FILE}  ${CFLAGS}

clean:
	rm -rf *.adx *.log *.map *.o *.s
