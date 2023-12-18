CC = clang
CFLAGS = -Wall -Werror -Wpedantic -Wconversion -std=c11 -ggdb
CINCLUDES = -I/home/samiamsaf/libs/raylib/src
CLIBS = -L/home/samiamsaf/libs/raylib -lraylib -lm

SRC = src
SUBDIRS = $(wildcard src/**/*.c)
SRCS = $(wildcard $(SRC)/*.c $(SUBDIRS))

build:
	$(CC) $(CFLAGS) $(SRCS) $(CINCLUDES) $(CLIBS) -o pong_game

run: build
	./pong_game

clean:
	rm -f $(OBJS) pong_game

