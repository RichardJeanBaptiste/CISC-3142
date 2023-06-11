#include <iostream>


int seqSearch(const int list[], int listLength, int searchItem) {
    int returnIndex = -1;

    for(int i = 0; i < listLength; i++){

        if(list[i] == searchItem){
            returnIndex = i;
        }

        //std::cout << list[i] << "\n";

    }


    return returnIndex;
}


void sortArray(int list[], int listLength){

    int smallest, index, swapValue;
    int counter = listLength;
    int startIndex = 0;

    while(counter > 0){

        smallest = list[startIndex];

        for(int i = startIndex; i < listLength; i++){
            if(list[i] < smallest){
                smallest = list[i];
                index = i;
            }
        }

        if(list[startIndex] != smallest){
            swapValue = list[startIndex]; // 16
            list[startIndex] = smallest; // 16 -> 5
            list[index] = swapValue; // 5 -> 16
        } 
        
        //std::cout << "Swap Value: " << swapValue << "list[startIndex] = smallest: " << smallest << "list[index] = swapValue : " << swapValue << "\n";

        startIndex++;
        counter--;
    }
}


void multTable(){
    
     int myArray[9][9];

    
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            myArray[i][j] = (i + 1) * (j + 1);
        }
    }

    
    for(int i = 0; i < 9; i++){
        std::cout << "\n";
        for(int j = 0; j < 9; j++){
            std::cout << myArray[i][j] << " , ";
        }

    }
    
}

bool isPalindrome(std::string x){

    for(int i = 0; i < x.length(); i++){

        if(i == 0) {

            if(x[i] != x[x.length() - 1]){
                return false;
            }
        } else {

            if(x[i] != x[x.length() - i - 1]){
                return false;
            }
        }
    }

    return true;

}

std::string reversedString(std::string x) {

    std::string reveresed = "";
    std::string y;

    for(int i = x.length(); i >= 0; i--){

        y = x[i];

        reveresed.append(y);

    }

    return reveresed;
}

namespace myMath {
    void add(int matrix1[3][3], int matrix2[3][3]){

        int result[3][3];

        for(int i = 0; i < 3; i++){
            
            for(int j = 0; j < 3; j++) {
                result[i][j] = matrix1[i][j] + matrix2[i][j];
            }
        }

        for(int i = 0; i < 3; i++){
            std::cout << "\n";
            for(int j = 0; j < 3; j++) {
                std::cout << result[i][j] << " , ";
            }
        }
    };


    void sub(int matrix1[3][3], int matrix2[3][3]){

        int result[3][3];

        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++) {
                result[i][j] = matrix1[i][j] - matrix2[i][j];
            }
        }

        for(int i = 0; i < 3; i++){
            std::cout << "\n";
            for(int j = 0; j < 3; j++) {
                std::cout << result[i][j] << " , ";
            }
        }
    };
}



int main() {

    int list[] = {1,2,3,4,5,6};

    int x = seqSearch(list, 6, 9);
    int y = seqSearch(list, 6, 4);

    std::cout << "Item is located at: " << x << "\n";
    std::cout << "Item is located at: " << y << "\n";
    

    int unsorted[] = {16, 30, 24, 7, 62, 45, 5, 55};
    sortArray(unsorted, 8);

    std::cout << "\n";

    for(int i = 0 ; i < 8; i++){
        std::cout << unsorted[i] << " , ";
    }

    std::cout << "\n";

    multTable();

    std::cout << "\n \n";

    std::cout << isPalindrome("abcdefgh") << "\n";
    std::cout << isPalindrome("madam") << "\n";

    std::cout << "\n";

    std::cout << reversedString("hello") << "\n";

    int m1[3][3]= {
        {1 , 3, 4},
        {4 , 3, 7},
        {20, 8, 9}
    };

    int m2[3][3] = {
        {2 , 3, 16},
        {10 , 5, 6},
        {7, 2, 1}
    };

    myMath::add(m1, m2);
    std::cout << "\n";
    myMath::sub(m1, m2);

    std::cout << "\n";
}