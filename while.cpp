#include <iostream>

int main(){
    int counter = 0;

    while (counter < 5){
        counter++;
        std::cout << "Counter: " << counter << std::endl;
    }

    std::cout << "Done. Value of counter: " << counter << std::endl;

    return 0;
}