#include <iostream>

void recurse(){
    recurse();
}

int main(){
    std::cout << "Hello Travis!\n";
    
    recurse(); 

return 0;
}
