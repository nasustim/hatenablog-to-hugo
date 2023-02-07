#include <string>
#include <vector>
#include "../hugo/article.hpp"

class MovableType
{
private:
    std::vector<std::string> input;
    std::vector<HugoArticle> article;
    int indexArticle;

    void parseHeader(std::string line);

public:
    void Parse();

    MovableType(std::vector<std::string> lines)
    {
        input = lines;
        indexArticle = 0;
    }
};