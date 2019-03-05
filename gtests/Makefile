GTEST_DIR = ~/workspace/googletest/googletest
CC = g++

INC = -I ../include #-I ${GTEST_DIR}
INC += -I ../private
INC += -I ${GTEST_DIR}
CFLAGS = -std=c++11 -isystem ${GTEST_DIR}/include 

TEST_FILE = *.cc


all:test

test-all:libgtest.a ${TEST_FILE}
	$(CC) ${CFLAGS} ${INC} \
	-pthread test-all.cc libgtest.a -o \
	test-all

libgtest.a:
	$(CC) ${CFLAGS} -I ${GTEST_DIR} \
	-pthread -c $(GTEST_DIR)/src/gtest-all.cc 
	ar -rv libgtest.a gtest-all.o


test:test-all
	./test-all	
	

clean:
	rm *.o *.a test-all
