#include <iostream>
#include <vector>
#include "BaseClass.h"
#include "AppleClass.h"
#include "BananaClass.h"
#include "CornClass.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    std::unique_ptr<BaseClass> apple = std::make_unique<AppleClass>();
    std::unique_ptr<BaseClass> banana = std::make_unique<BananaClass>();
    std::unique_ptr<BaseClass> corn = std::make_unique<CornClass>();

    std::vector<std::unique_ptr<BaseClass>> mVector;

    mVector.push_back(std::move(apple));
    mVector.push_back(std::move(banana));
    mVector.push_back(std::move(corn));

    for (auto& item : mVector) {
        item->printClassName();
    }

    return 0;
}