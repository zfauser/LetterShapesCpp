# List all source files
SRCS := $(shell find . -name '*.cpp')

# List all header files
HEADERS := $(shell find . -name '*.h')

# Compiler
CXX := clang++

# Compiler flags
override CXXFLAGS += -g -Wmost -Werror

# Target for the main executable
main: $(SRCS) $(HEADERS)
    $(CXX) $(CXXFLAGS) $(SRCS) -o $@

# Target for the main-debug executable
main-debug: $(SRCS) $(HEADERS)
    $(CXX) $(CXXFLAGS) -U_FORTIFY_SOURCE -O0 $(SRCS) -o $@

# Clean up
clean:
    rm -f main main-debug
