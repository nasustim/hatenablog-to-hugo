#include <iostream>
#include <string>
#include <vector>

#include "lib/file/read.hpp"

int main(int argc, char **argv)
{
    if (argc <= 1)
    {
        std::cerr << "require path to target file." << std::endl;
        exit(-1);
    }
    std::vector<std::string> lines = ReadLine(argv[1]);

    // print lines
    for (int i = 0; i < lines.size(); i++)
        std::cout << lines[i] << std::endl;

    exit(0);
}
