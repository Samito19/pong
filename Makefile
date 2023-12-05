CC = clang
CFLAGS = -Wall -Werror -Wpedantic -Wconversion -std=c11 -ggdb
CINCLUDES = -I/home/samiamsaf/libs/raylib/src
CLIBS = -L/home/samiamsaf/libs/raylib -lraylib -lm

SRC = src
SRCS = $(wildcard $(SRC)/**/*.c)

main: $(OBJS)
	$(CC) $(CFLAGS) $(CINCLUDES) $(CLIBS) -o pong_game

run: main
	./pong_game

clean:
	rm -f $(OBJS) pong_game

