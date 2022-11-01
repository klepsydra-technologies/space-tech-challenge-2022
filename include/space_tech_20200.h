#include <vector>
#include <stdio.h>

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
                if (colValues[grid[j][i] - 1] == false) {
                    colValues[grid[j][i] - 1] = true;
                }
                else {
                    return false;
                }
            }
        }
        return true;  
    }
};