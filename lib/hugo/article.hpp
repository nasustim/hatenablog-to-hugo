#include <string>

class HugoArticle
{
public:
    std::string title;
    std::string date;
    bool draft;

    std::string *body;
};