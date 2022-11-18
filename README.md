<p align="right">
  <img width="25%" height="25%"src="images/klepsydra_logo.jpg">
</p>

# C++ Code challenge

## What is missing the in the following code?
A valid Sudoku solution is a 9 × 9 grid with digits such that each column, each row, and each of the nine 3 × 3 subgrids that compose the grid (also called "boxes", "blocks", or "regions") contains all of the digits from 1 to 9. The following code is intended to validate if a solution to Sudoku puzzle is correct or not.

Provide a solution that adds the minimal number lines to the code.


```cpp
#include <vector>

class SudokuValidator {
public:
   bool isValid(const std::vector<std::vector<int>>& grid)
   {
       for (int i = 0; i < 9; ++i) {
           std::vector<bool> rowValues(9, false);
           std::vector<bool> colValues(9, false);

           for (int j = 0; j < 9; ++j) {
              if (rowValues[grid[i][j] - 1] == false) {
                  rowValues[grid[i][j] - 1] = true;
              }
              else {
                  return false;
              }
              if (colValues[grid[i][i] - 1] == false) {
                  colValues[grid[j][i] - 1] = true;
              }
              else {
                  return false;
              }
          }
      }

      return true;  
   }
}

```

Drop your solution in paper in the box at Klepsydra's booth or send it electronically to challenge@klepsydra.com.

Please provide your name and email address when submitting your solution.

## Contact
https://www.klepsydra.com
