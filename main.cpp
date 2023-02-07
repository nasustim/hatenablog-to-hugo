#include <iostream>
#include <string>
#include <vector>

#include "lib/file/read.hpp"
#include "lib/hatenablog/movabletype.hpp"

int main(int argc, char **argv)
{
    if (argc <= 1)
    {
        std::cerr << "require path to target file." << std::endl;
        exit(-1);
    }
    std::vector<std::string> lines = ReadLine(argv[1]);

    MovableType *m = new MovableType(lines);
    m->Parse();

    exit(0);
}
