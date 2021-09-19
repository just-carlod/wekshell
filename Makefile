.PHONY: build run install clean

SHELL=/bin/bash
PKG_NAME = wekshell
EXECUTABLE = core/main.c
CC = gcc
CFLAGS =
ARGS = $(filter-out $@,$(MAKECMDGOALS))

_build:
	@mkdir _build
build: _build
	@$(CC) $(CFLAGS) $(EXECUTABLE) -o _build/$(PKG_NAME)
run:
	@make -s build
	@./_build/$(PKG_NAME) $(ARGS)
install:
	@echo "not implemented yet"
clean:
	@rm -rf _build
%:
	@:
