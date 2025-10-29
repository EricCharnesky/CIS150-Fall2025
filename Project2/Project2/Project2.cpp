
#include <iostream>

using namespace std;

string get_word() {
    string word = "";
    
    while (word.size() < 4) {
        cout << "Enter a word that is at least 4 characters long" << endl;
        cin >> word;
    }

    return word;
}

bool has_the_word_been_guessed(string hidden_word, string letters_guessed) {
    for (char letter : hidden_word) {
        bool matches = false;
        for (char guess : letters_guessed) {
            if (letter == guess) {
                matches = true;
                // break is slightly faster
            }
        }
        if (!matches) {
            return false;
        }
    }
    return true;

}

bool has_person_been_hanged(int number_of_guesses) {
    return number_of_guesses >= 6;
}

void display_hidden_word(string hidden_word, string letters_guessed) {
    for (char letter : hidden_word) {
        bool matches = false;
        for (char guess : letters_guessed) {
            if (letter == guess) {
                matches = true;
            }
        }

        if (matches) {
            cout << letter << " ";
        }
        else {
            cout << "_ ";
        }
        
    }
    cout << endl;
}

char get_letter_guess(string& letters_guessed) {
    
    bool already_guessed;
    char guess;
    do {

        cout << "Enter a letter to guess" << endl;
        cin >> guess;

        already_guessed = false;

        for (char letter : letters_guessed) {
            if (letter == guess) {
                already_guessed = true;
                cout << "You already guessed that letter" << endl;
            }
        }
    } while (already_guessed);

    letters_guessed += guess;

    return guess;

}

bool is_letter_guessed_in_hidden_word(char guess, string hidden_word) {
    for (char letter : hidden_word) {
        if (letter == guess) {
            return true;
        }
    }
    return false;
}

void print_gallows(int number_of_incorrect_guesses) {
    if (number_of_incorrect_guesses == 0) {
        cout << "|-----" << endl <<
            "|    |" << endl <<
            "|" << endl <<
            "|" << endl <<
            "|" << endl <<
            "|" << endl <<
            "-----------" << endl;
    } else if (number_of_incorrect_guesses == 1) {
        cout << "|-----" << endl <<
            "|    |" << endl <<
            "|    O" << endl <<
            "|" << endl <<
            "|" << endl <<
            "|" << endl <<
            "-----------" << endl;
    }
    else if (number_of_incorrect_guesses == 2) {
        cout << "|-----" << endl <<
            "|    |" << endl <<
            "|    O" << endl <<
            "|    |" << endl <<
            "|" << endl <<
            "|" << endl <<
            "-----------" << endl;
    }
    else if (number_of_incorrect_guesses == 3) {
        cout << "|-----" << endl <<
            "|    |" << endl <<
            "|    O" << endl <<
            "|  --|" << endl <<
            "|" << endl <<
            "|" << endl <<
            "-----------" << endl;
    }
    else if (number_of_incorrect_guesses == 4) {
        cout << "|-----" << endl <<
            "|    |" << endl <<
            "|    O" << endl <<
            "|  --|--" << endl <<
            "|" << endl <<
            "|" << endl <<
            "-----------" << endl;
    }
    else if (number_of_incorrect_guesses == 5) {
        cout << "|-----" << endl <<
            "|    |" << endl <<
            "|    O" << endl <<
            "|  --|--" << endl <<
            "|   /" << endl <<
            "|" << endl <<
            "-----------" << endl;
    }
    else if (number_of_incorrect_guesses == 6) {
        cout << "|-----" << endl <<
            "|    |" << endl <<
            "|    O" << endl <<
            "|  --|--" << endl <<
            "|   /\\" << endl <<
            "|" << endl <<
            "-----------" << endl;
    }
}

int main()
{
    string letters_guessed = "";
    string hidden_word = get_word();
    int number_of_incorrect_guesses = 0;

    while (!has_the_word_been_guessed(hidden_word, letters_guessed) and !has_person_been_hanged(number_of_incorrect_guesses)) {
        display_hidden_word(hidden_word, letters_guessed);
        char guess = get_letter_guess(letters_guessed);

        if (!is_letter_guessed_in_hidden_word(guess, hidden_word)) {
            number_of_incorrect_guesses += 1;
        }

        print_gallows(number_of_incorrect_guesses);

    }
    cout << "The word was: " << hidden_word << endl;

}
