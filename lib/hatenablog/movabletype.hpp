#include <string>
#include <vector>

class MovableType
{
private:
    std::vector<std::string> input;

public:
    void Parse();

    MovableType(std::vector<std::string> lines)
    {
        input = lines;
    }
};