#include <string>
#include <regex>
#include <vector>
#include <iostream>

#include "movabletype.hpp"

#define PHASE_HEADER 0
#define PHASE_BODY 1

std::regex *_getHeaderRegex(std::string name)
{
    std::regex r = std::regex("^" + name + ":\\s(*)$");
    return &r;
}

void MovableType::Parse()
{
    int phase = PHASE_HEADER;

    size_t length = input.size();
    for (int i = 0; i < length; ++i)
    {
        if (phase == PHASE_HEADER)
        {
            parseHeader(input[i]);
        }
    }

    std::cout << article[0].title << std::endl;
}

void MovableType::parseHeader(std::string line)
{
    std::smatch r;
    if (std::regex_match(line, *_getHeaderRegex("TITLE")))
    {
        article[indexArticle].title = r[1];
    }
    else if (std::regex_match(line, *_getHeaderRegex("STATUS")))
    {
        article[indexArticle].draft = r[1] == "Publish";
    }
}

int changePhase(std::string line)
{
    if (line == "BODY:")
    {
        return PHASE_BODY;
    }

    return PHASE_HEADER;
}
