#include <iostream>


class Mystring{

private:

    std::string m_string;

public:

    Mystring(const std::string line = " "):m_string(line) {
    }

    std::string operator()(int index1, int index2){

        std::string rezult;

        for (int i = 0; i < index2; i++) {
           rezult += m_string[index1 + i];
        }
        return rezult;
    }

};


int main() {

    Mystring string("Hello, World!");
    std::cout << string (7, 6);

}
