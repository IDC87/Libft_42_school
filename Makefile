# -*- Makefile -*-


#  ---- NOTES ----

#OPTIONS
 #@ - to not display in console the command forwarded by this char
 #$ - like a variable declaration
 #$@ is the name of the target being generated
 #$< the first prerequisite (usually a source file)
 #.PHONY: - one that is not really the name of a file; rather it is just a name for a recipe to be executed
 #gcc -c - compiles to the .o files
 #:= variable evaluated once at assignment time 
 #= evaluated each time it's used (for reference)

#FUNCTIONS
 #$(shell date) - show the current time and date
 #$(shell sleep 'time)

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
 #git rev-parse HEAD - shows the last sha key 
 # git remote get-url origin - shows my current url origin
 # git remote show origin - almost the same, with more details
 # git remote -v - view all the remotes of current repository
 # git remote rm origin - remove current git url in origin
 # git push --set-upstream origin master - set the current url as upstream


#  ---- END OF NOTES ----
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SHOUT = say
SHELL = /bin/sh


MakefileREPO = git remote add origin https://github.com/IDC87/Makefile-WIP-.git
LibftREPO = git remote add origin https://github.com/IDC87/Libft_42_school.git
TestREPO = git remote add origin https://github.com/IDC87/Repo_test.git
DummyREPO = git remote add origin https://github.com/IDC87/Repo_test.git
GitPush = git push -u origin main
SetStream = git push --set-upstream origin master
CleanUrl = git remote rm origin             

SRCS = ft_bzero.c\
	ft_isalnum\
	ft_isalpha.c\
	ft_isascii.c\
	ft_isdigit.c\
	ft_isprint.c\
	ft_memcpy.c\
	ft_memmove.c\
	ft_memset.c\
	ft_strlen.c\

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
	@echo "All Systems OK!"
#FINAL COMMAND should be: make Push m="message" 




#target: dependencies
#	action

#MAKEFILE MUST CONTAIN RULES: $(NAME), all, clean, fclean, re.
#BONUSES MUST BE IN _bonus.{c/h}

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
tt:
	@echo $(XX)
	$(shell sleep 2)
	@echo $(XX)

XX = $(shell date) // date will be executed every time you use XX
tt2:
	@echo $(XX)
	$(shell sleep 0.5)
	@echo $(XX)







