
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int sumOfVector(vector<int> numbers) {
    int sum = 0;

    // read-only loop
    for (int number : numbers) {
        sum += number;
    }

    /*for (int index = 0; index < numbers.size(); index++) {
        sum += numbers[index];
    }*/

    return sum;
}

int sumOfArray(int numbers[], int size) {
    
    int sum = 0;
    for (int index = 0; index < size; index++ ) {
        sum += numbers[index];
    }

    return sum;
}

int maxValue(vector<int> numbers) {
    int largest = numbers.at(0);

    for (int value : numbers) {
        if (value > largest ) {
            largest = value;
        }
    }

    return largest;
}

double average(vector<int> numbers) {
    double total = 0;
    for (int value : numbers) {
        total += value;
    }
    return total / numbers.size();
}

void selectionSort(vector<int>& numbers) {
    for (int indexToPutBiggest = numbers.size() - 1; indexToPutBiggest > 0; indexToPutBiggest--) {
        int indexOfBiggest = 0;
        for (int indexToCompare = 0; indexToCompare <= indexToPutBiggest; indexToCompare++) {
            if (numbers.at(indexToCompare) > numbers.at(indexOfBiggest)) {
                indexOfBiggest = indexToCompare;
            }
        }
        int biggest = numbers.at(indexOfBiggest);
        numbers.at(indexOfBiggest) = numbers.at(indexToPutBiggest);
        numbers.at(indexToPutBiggest) = biggest;
    }
}

void insertionSort(vector<int>& numbers) {
    for (int indexToSort = 1; indexToSort < numbers.size(); indexToSort++) {
        for (int indexToSwap = indexToSort; indexToSwap > 0; indexToSwap--) {
            if (numbers.at(indexToSwap) < numbers.at(indexToSwap - 1)) {
                int temp = numbers.at(indexToSwap);
                numbers.at(indexToSwap) = numbers.at(indexToSwap - 1);
                numbers.at(indexToSwap - 1) = temp;
            }
            else {
                break;
            }
        }
    }
}

void printVectorOnOneLine(vector<int> numbers) {
    for (int value : numbers) {
        cout << value << " ";
    }
    cout << endl;
}

// doesn't check for winner
bool isTied(vector<vector<char>> board) {
    for (vector<char> row : board) {
        for (char column : row) {
            if (column == ' ') {
                return false;
            }
        }
    }
    return true;
}

bool hasWinnerByRow(vector<vector<char>> board) {
    for (vector<char> row : board) {
        if (row.at(0) != ' ' && row.at(0) == row.at(1) && row.at(0) == row.at(2)) {
            return true;
        }
    }
    return false;
}

bool hasWinnerByColumn(vector<vector<char>> board) {
    for (int columnIndex = 0; columnIndex < board.size(); columnIndex++) {
        if (board.at(0).at(columnIndex) != ' ' &&
            board.at(0).at(columnIndex) == board.at(1).at(columnIndex) &&
            board.at(0).at(columnIndex) == board.at(2).at(columnIndex)) {
            return true;
        }
    }
    return false;
}

bool hasWinnerByDiagonal(vector<vector<char>> board) {
    return (board.at(1).at(1) != ' ' &&
        ((board.at(0).at(0) == board.at(1).at(1) && board.at(0).at(0) == board.at(2).at(2))
      || (board.at(0).at(2) == board.at(1).at(1) && board.at(0).at(2) == board.at(2).at(0))));
}

bool hasWinner(vector<vector<char>> board) {
    return hasWinnerByRow(board) || hasWinnerByColumn(board) || hasWinnerByDiagonal(board);
}

bool gameOver(vector<vector<char>> board) {
    return isTied(board) || hasWinner(board);
}

void printBoard(vector<vector<char>> board) {
    cout << board.at(0).at(0) << "|" << board.at(0).at(1) << "|" << board.at(0).at(2) << endl;
    cout << "-----" << endl;
    cout << board.at(1).at(0) << "|" << board.at(1).at(1) << "|" << board.at(1).at(2) << endl;
    cout << "-----" << endl;
    cout << board.at(2).at(0) << "|" << board.at(2).at(1) << "|" << board.at(2).at(2) << endl;
}

void markBoard(char currentPlayer, vector<vector<char>>& board) {
    int row;
    int column;
    
    cout << currentPlayer << "'s turn" << endl;
    cout << "Enter a row and column to mark" << endl;
    cin >> row >> column;
    while (row < 0 || row > 2 || column < 0 || column > 2 || board.at(row).at(column) != ' ') {
        cout << "Invalid spot!" << endl;
        cout << "Enter a row and column to mark" << endl;
        cin >> row >> column;
    }
    board.at(row).at(column) = currentPlayer;
}

int main()
{
    vector<vector<char>> board = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    };

    char currentPlayer = 'X';

    while (!gameOver(board)) {
        printBoard(board);
        markBoard(currentPlayer, board);
        currentPlayer = currentPlayer == 'O' ? 'X' : 'O';
    }

    printBoard(board);

    vector<int> numbersToSort = { 4, 7, 6, 9, 2 };
    printVectorOnOneLine(numbersToSort);
    insertionSort(numbersToSort);
    printVectorOnOneLine(numbersToSort);





    vector<string> names;
    vector<int> jerseyNumbers;

    string input;
    cout << "Enter a player name or QUIT to stop" << endl;
    getline(cin, input);

    int jerseyNumber;

    while (input != "QUIT") {
        names.push_back(input);
        cout << "Enter the jersey number for " << input << endl;
        cin >> jerseyNumber;
        jerseyNumbers.push_back(jerseyNumber);

        cout << "Enter a player name or QUIT to stop" << endl;
        getline(cin, input);
        getline(cin, input);
    }

    cout << "Enter a jersey number to lookup" << endl;
    cin >> jerseyNumber;

    bool match = false;
    for (int index = 0; index < jerseyNumbers.size(); index++) {
        if (jerseyNumbers.at(index) == jerseyNumber) {
            cout << "That number belongs to " << names.at(index) << endl;
            match = true;
        }
    }
    if (!match) {
        cout << "Couldn't find that jersey number" << endl;
    }


    int numbers[5];

    // first position is index 0
    numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 3;
    numbers[3] = 4;
    numbers[4] = 5;

    cout << sumOfArray(numbers, 5) << endl;

    cout << numbers[2] * 2 << endl;

    // nothing was ever written here, it's not part of the array
    cout << numbers[5] << endl;

    // won't compile
    //numbers[5] = 20;

    const int size = 3;
    cout << "enter the number of numbers you want to store" << endl;
   // cin >> size;
    int usersNumbers[size] = { 20, 30, 40 };

    // initializer to make this faster than going by index
    vector<int> betterNumbers = { 1,2,3,4,5 };

    // sets up vector with spaces for 5 values
    vector<int> presizedNumbers(5);

    presizedNumbers[0] = 42;
    presizedNumbers.at(1) = 77;
    presizedNumbers[2] = 100;
    presizedNumbers.at(3) = 0;
    presizedNumbers[4] = 6;

    presizedNumbers.push_back(7);

    cout << "The sum of all those values is " << sumOfVector(presizedNumbers) << endl;
    

    // crashes the program getting an invalid index
    //cout << presizedNumbers.at(5) << endl;
    cout << presizedNumbers[5] << endl;




}
