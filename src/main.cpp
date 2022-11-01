#include <cassert>
#include "space_tech_20200.h"

int main() {

    SudokuValidator sudokuValidator;
    //Test 1:
    std::vector<std::vector<int>> grid_1 = 
        {{1, 1, 1, 1, 1, 1, 1, 1, 1},
         {2, 2, 2, 2, 2, 2, 2, 2, 2},
         {3, 3, 3, 3, 3, 3, 3, 3, 3},
         {4, 4, 4, 4, 4, 4, 4, 4, 4},
         {5, 5, 5, 5, 5, 5, 5, 5, 5},
         {6, 6, 6, 6, 6, 6, 6, 6, 6},
         {7, 7, 7, 7, 7, 7, 7, 7, 7},
         {8, 8, 8, 9, 8, 8, 8, 8, 8},
         {9, 9, 9, 9, 9, 9, 9, 9, 9}};

    assert(!sudokuValidator.isValid(grid_1));

    //Test 2:
    std::vector<std::vector<int>> grid_2 = 
        {{1, 2, 3, 4, 5, 6, 7, 8, 9},
         {1, 2, 3, 4, 5, 6, 7, 8, 9},
         {1, 2, 3, 4, 5, 6, 7, 8, 9},
         {1, 2, 3, 4, 5, 6, 7, 8, 9},
         {1, 2, 3, 4, 5, 6, 7, 8, 9},
         {1, 2, 3, 4, 5, 6, 7, 8, 9},
         {1, 2, 3, 4, 5, 6, 7, 8, 9},
         {1, 2, 3, 4, 5, 6, 7, 8, 9},
         {1, 2, 3, 4, 5, 6, 7, 8, 9}};
    
    assert(!sudokuValidator.isValid(grid_2));

    //Test 3:
    std::vector<std::vector<int>> grid_3 = 
        {{1, 2, 3, 4, 5, 6, 7, 8, 9},
         {4, 5, 6, 7, 8, 9, 1, 2, 3},
         {7, 8, 9, 1, 2, 3, 4, 5, 6},
         {2, 3, 1, 5, 6, 4, 8, 9, 7},
         {5, 6, 4, 8, 9, 7, 2, 3, 1},
         {8, 9, 7, 2, 3, 1, 5, 6, 4},
         {3, 1, 2, 6, 4, 5, 9, 7, 8},
         {6, 4, 5, 9, 7, 8, 3, 1, 2},
         {9, 7, 8, 3, 1, 2, 6, 4, 5}};

    assert(sudokuValidator.isValid(grid_3));

    //Test 4:
    std::vector<std::vector<int>> grid_4 = 
        {{1, 2, 3, 4, 5, 6, 7, 8, 9},
         {4, 5, 6, 7, 8, 9, 1, 2, 3},
         {2, 8, 9, 1, 7, 3, 4, 5, 6},
         {7, 3, 1, 5, 6, 4, 8, 9, 2},
         {5, 6, 4, 8, 9, 7, 2, 3, 1},
         {8, 9, 7, 2, 3, 1, 5, 6, 4},
         {3, 1, 2, 6, 4, 5, 9, 7, 8},
         {6, 4, 5, 9, 2, 8, 3, 1, 7},
         {9, 7, 8, 3, 1, 2, 6, 4, 5}};

    assert(!sudokuValidator.isValid(grid_4));
}