
TARGET := kalkulator.out

SOURCES := main.cpp \
	modules/equations.cpp \
	modules/parser.cpp \

OBJFILES := $(notdir $(SOURCES:.cpp=.o))

vpath %.cpp modules

all: $(TARGET)

$(TARGET): $(OBJFILES)
	$(CXX) $(OBJFILES) -o $@

%.o: %.cpp
	$(CXX) -c $< -o $@
