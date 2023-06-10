CXX = g++
CXXFLAGS = -Wall -std=c++11
INCLUDES = -I.
SOURCES = CropType.cpp Farm.cpp main.cpp
OBJECTS = $(SOURCES:.cpp=.o)
EXECUTABLE = farm

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(INCLUDES) -o $@ $(OBJECTS)

.cpp.o:
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f *.o $(EXECUTABLE)
