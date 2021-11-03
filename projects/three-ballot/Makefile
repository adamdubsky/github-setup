all: build archive

build: HW11.cc
    g++ -Wall HW11.cc

archive: *.cc *.h Makefile *.txt *.md
    tar cvf archive.tar *.cc *.h Makefile *.txt *.md

clean:
    rm -rf a.out
