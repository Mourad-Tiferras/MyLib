CXX = g++
CXXFLAGS = -Wall -Wextra -Werror
LIBNAME = libmylib.a
SRCS = itoa.cpp join.cpp rev_rot13.cpp rev_rot14.cpp rot13.cpp rot14.cpp split.cpp strtrim.cpp substr.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(LIBNAME)

$(LIBNAME): $(OBJS)
	ar rcs $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm $(OBJS)

fclean: clean
	rm $(LIBNAME)

re: fclean all
