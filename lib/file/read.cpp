#include <fstream>
#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> ReadLine(std::string filename)
{
    std::ifstream ifs(filename);
    std::string line;
    std::vector<std::string> result;

    if (ifs.fail())
    {
        std::cerr << "failed to open target file." << std::endl;
        exit(-1);
    }

    while (getline(ifs, line))
    {
        result.push_back(line);
    }

    return result;
}
