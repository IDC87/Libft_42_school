# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ivda-cru <ivda-cru@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/06 20:37:19 by ivda-cru          #+#    #+#              #
#    Updated: 2021/11/09 21:26:29 by ivda-cru         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -*- Makefile -*-



#  ---- NOTES ----

#OPTIONS
 #@ - to not display in console the command forwarded by this char
 #$ - like a variable declaration
 #$@ is the name of the target being generated
 #$< the first prerequisite (usually a source file) (dependencies)
 #.PHONY: - one that is not really the name of a file; rather it is just a name for a recipe to be executed
 #gcc -c - compiles to the .o files
 #:= variable evaluated once at assignment time 
 #= evaluated each time it's used (for reference)
 #wildcard -  wildcard card function in make file is to list all the source files with a particular extension
 #patsubst - function to rewrite file names
 # -f to use a makefile with a different name
 # "%.o: %.c" means that any file ending in .o depends on the same filename ending in .c to be present.

 #COMPLILING OPTIONS
 #gcc -WALL -WEXTRA -WERROR
 # -WALL (Enable all warning messages)
 # -WERROR (Make all warnings into erros)
 # -WEXTRA (enable extra warnings)
 # -E (Preprocessor), -S (compiler), -c (assembler)
 # gcc -c name.c && mv name.o folder/ (compiles then move to another folder)
 #gcc -WALL -WEXTRA -WERROR -c nome.c (para compilar o objecto .o)
 # -I (flag that indicates the libft.h)

#FUNCTIONS
 #$(shell date) - show the current time and date
 #$(shell sleep 'time')

#GIT UPLOAD COMMANDS (as they appear in the beginning of a new repo):
 #echo "# Repo_test" >> README.md
 #git init
 #git add README.md
 #git commit -m "first commit"
 #git branch -M main
 #git remote add origin https://github.com/IDC87/Repo_test.git
 #git push -u origin main

 #…or push an existing repository from the command line
 #git remote add origin https://github.com/IDC87/Repo_test.git
 #git branch -M main
 #git push -u origin main

#GIT GENERAL COMMANDS:
 # git rev-parse HEAD - shows the last sha key 
 # git remote get-url origin - shows my current url origin
 # git remote show origin - almost the same, with more details
 # git remote -v - view all the remotes of current repository
 # git remote rm origin/upstream - remove current git url in origin/upstream
 # git push --set-upstream origin master - set the current url as upstream


 #target: dependencies
#	action

#MAKEFILE MUST CONTAIN RULES: $(NAME), all, clean, fclean, re.
#BONUSES MUST BE IN _bonus.{c/h}

#A FAZER:
 #ler ficheiros executaveis com todas as opcoes


 # VER LINKs (Importante) : https://cs.colby.edu/maxwell/courses/tutorials/maketutor/

 


#  ---- END OF NOTES ----


#COMPILING VARIABLES
CC = gcc
CCmove = $(CC) -c $(SRCS) && mv
CFLAGS = -Wall -Wextra -Werror -g #--save --temps

#TARGET PROGRAM
TARGET = program

#EXTRAS
SHOUT = say
SHELL = /bin/sh

#DIRECTORIES FOR .o FILES
OBJDIR := OBJECTS/

MakefileREPO = git remote add origin https://github.com/IDC87/Makefile-WIP-.git
LibftREPO = git remote add origin https://github.com/IDC87/Libft_42_school.git
TestREPO = git remote add origin https://github.com/IDC87/Repo_test.git
DummyREPO = git remote add origin https://github.com/IDC87/Repo_test.git
GitPush = git push -u origin main
SetStream = git push --set-upstream origin master
CleanUrl = git remote rm origin

SRCS = ft_bzero.c\
	ft_isalnum.c\
	ft_isalpha.c\
	ft_isascii.c\
	ft_isdigit.c\
	ft_isprint.c\
	ft_memcpy.c\
	ft_memmove.c\
	ft_memset.c\
	ft_strlen.c\



all: $(NAME)

# COMPILE to .o and then moves to proper folder
Libft: $(SRC)
	$(CC) -c $(SRCS) && mv *.o $(OBJDIR)

clean:
	rm -rf ./$(OBJDIR)/*.o



#transform .c files in object files
%.o : %.c
	$(CC) $(CFLAGS) -c $(SRCS)
#	$(CC) -c $^ -o $@ 



#GIT BLOCK COMMANDS:
GitCommit:
	@git add .
	@git commit -m "$(shell date)"
#	@git commit -m "$m"
REPOLibft:
	$(LibftREPO)
UploadGit:
	@$(SetStream)
CleanUrl: 
	@$(CleanUrl)
Push: GitCommit REPOLibft UploadGit CleanUrl
	@echo
	@echo "UPDATE SUCCESSFUL! REPO CLEAN ALSO SUCCESSFUL!"
	@echo
#FINAL COMMAND should be: make Push m="message" 








all: Dictate loading exec

#Dictate: 
#	$(SHOUT) executing makefile
loading:
	$(CC) $(CFLAGS) loading_bar.c -o loading && ./loading
#exec:
#	./loading
clean:




dir:	
	current_dir = $(shell pwd)

dir2:
	current_dir = $(notdir $(shell pwd))
test:
	@echo "test $<"


XX := $(shell date) 
tt1:
	@echo $(XX)
	$(shell sleep 2)
	@echo $(XX)

XX = $(shell date) // date will be executed every time you use XX
tt2:
	@echo $(XX)
	$(shell sleep 0.5)
	@echo $(XX)

#(taken from a website. To edit later)
#norminette:
#	@$(ECHO) "$(CYAN)\nChecking norm for libft...$(DEFAULT)"
#	@norminette -R CheckForbiddenSourceHeader $(SRC_DIR) $(SRCB_DIR) $(SRCA_DIR) inc/libft.h







