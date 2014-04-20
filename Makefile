##############################################################################
#
#  Sample Makefile for C/C++ applications for the Mac OS X environment.
#    Works for single and multiple file programs.
#
##############################################################################

# Define C compiler
CC            = g++

# Define C++ compiler
CCC	          = /usr/bin/g++

# Define C compiler options
CFLAGS        = -Wall -c -g 

# Define C++ compiler options
CCCFLAGS      = -Wall -c -g 

# Define C/C++ pre-processor options
CPPFLAGS      = -I./ -I/usr/X11/include -I/opt/local/include 

# Define the location of the destination directory for the executable file
DEST	      = .

# Define flags that should be passed to the linker
LDFLAGS	      =

# Define libraries to be linked with
LIBS	      = 

# Define linker
LINKER	      = g++

# Define all object files to be the same as CPPSRCS but with all the .cpp and .c suffixes replaced with .o
OBJ           = $(CPPSRCS:.cpp=.o) $(CSRCS:.c=.o)

# Define all C source files here
CSRCS         =

# Define all C++ source files here
CPPSRCS       = main.cpp

# Define name of target executable
PROGRAM	      = ChessEngine

##############################################################################
# Define additional rules that make should know about in order to compile our
# files.                                        
##############################################################################

# Define default rule if Make is run without arguments
all : $(PROGRAM)

# Define rule for compiling all C++ files
%.o : %.cpp
	$(CCC) $(CCCFLAGS) $(CPPFLAGS) $*.cpp
	
# Define rule for compiling all C files
%.o : %.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $*.c
	
# Define rule for creating executable
$(PROGRAM) :	$(OBJ)
		@echo -n "Loading $(PROGRAM) ... "
		$(LINKER) $(LDFLAGS) $(OBJ) $(LIBS) -o $(PROGRAM)
		@echo "done"
		
# Define rule to clean up directory by removing all object, temp and core
# files along with the executable
clean :
	@rm -f $(OBJ) *~ core $(PROGRAM)

refresh :
	make clean
	make

new :
	make refresh
	./$(PROGRAM)

run:
	make
	./$(PROGRAM)
