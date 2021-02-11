CXX=g++
CXXFLAGS = -Lbuild_dir -lpmem

ifeq ($(BUILD), debug)
CXXFLAGS += -O0 -g
CMAKEFLAGS += -DCMAKE_BUILD_TYPE=Debug
else
CXXFLAGS += -O2 -s -DNDEBUG
endif

all: libpmem malloc vector list set map
clean:
	-rm -rf build_dir 2>/dev/null
	-rm *_test 2>/dev/null

libpmem:
	cmake -G Ninja -S .. -B build_dir $(CMAKEFLAGS)
	cmake --build build_dir
malloc: libpmem
	$(CXX) -o malloc_test malloc_test.cpp $(CXXFLAGS)
vector: libpmem
	$(CXX) -o vector_test vector_test.cpp $(CXXFLAGS)
list: libpmem
	$(CXX) -o list_test list_test.cpp $(CXXFLAGS)
set: libpmem
	$(CXX) -o set_test set_test.cpp $(CXXFLAGS)
map: libpmem
	$(CXX) -o map_test map_test.cpp $(CXXFLAGS)
