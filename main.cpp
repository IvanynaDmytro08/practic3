#include <iostream>

//class Mystring{
//
//private:
//
//    std::string m_string;
//    int m_char;
//public:
//
//    Mystring() {
//    }
//
//
//    std::string operator()(int index1, int index2, std::string string){
//
//        std::string rezult;
//
//        for (int i = 0; i < index2; i++) {
//            rezult += string[index1 + i];
//        }
//        return rezult;
//    }
//
//};
//
//
//int main() {
//
//    int number;
//    std::string name;
//
//
//    std::cout << "Hello, World!" << std::endl;
//
//    Mystring string;
//    std::cout << string (7, 6, "Hello, World!");
//
//    std::cout << "\nInput  number which element you want return" << std::endl;
//    std::cin >> number;
//
//
//
//}

class String {

 std::string m_array;

public:

    String(std::string word):m_array(word){

    }
        char operator[](int index) {
        return m_array[index];
        }

        int operator()(char symbol){

        bool findChar = true;

            for (int count = 0; count < m_array.size(); count++ ) {

                if (symbol == m_array[count]) {
                    return count;
                }
            }
            if (findChar == true)
                return -1;
    }

};


int main () {

    int number;
    char symbol;
    std::string word;

    std::cout << "Input word - ";
    std::getline(std::cin, word);

    String index(word);

    do {
        std::cout << "Input index element which you want return " << std::endl;
        std::cin >> number;

    } while (number > word.size());

    std::cout <<  index[number];

    std::cout << "\nInput symbol which you want loking for " << std::endl;
    std::cin >> symbol;
    std::cout << index(symbol);

}