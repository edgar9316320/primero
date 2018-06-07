DSG = ~/DeSiGNAR

CXX = clang++ -std=c++14

WARN = -Wall -Wextra -Wcast-align -Wno-sign-compare -Wno-write-strings \
       -Wno-parentheses 

OPT=-D_GLIBCXX__PTHREADS -pthread -Ofast -stdlib=libstdc++ $(WARN) -D__extern_always_inline="extern __always_inline" 

FLAGS = -DDEBUG -D_GLIBCXX__PTHREADS -g -O0 $(WARN)

INCLUDE = -I. -I $(DSG)/include

LIBS = -L $(DSG)/lib -lDesignar -lc -lm -lasprintf

all: mgrafos

clean:
	rm -f mgrafos *~

mgrafos: mgrafos.C 
	$(CXX) $(FLAGS) $(INCLUDE) $@.C -o $@ $(LIBS)

