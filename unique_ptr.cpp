#include <iostream>
#include <memory>

using namespace std;

class ResourceType {
public:
    void foo() { cout << "foo called\n"; }
};

using ResourceVector = vector<unique_ptr<ResourceType>>;

int main(int argc, char const *argv[])
{
    unique_ptr<ResourceType> r1 { std::make_unique<ResourceType>() };
    auto r2 { std::make_unique<ResourceType>() };

    r1->foo();

    unique_ptr<ResourceType> r3 = std::move(r2);

    // ResourceVector vec;

    // vec.push_back(std::move(r3));

    return 0;
}
