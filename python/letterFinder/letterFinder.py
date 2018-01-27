#! /usr/bin/python3
"""Non repeating letter finder

This script will read in a string and print out all of the non-repeating
letters. All letters will be stored in a dictionary
"""


class CharCheck:

    """Check string characters

    Check the characters in a string to see if they repeat throughout the
    string.

    Attributes
        word: A string that is received from the user that will be sorted
            through.
        letters: A dictionary containing all of the letters from word and
            amount of times they repeat.
    """
    def __init__(self):
        """Inits CharCheck"""
        self.word = ''
        self.letters = {}

    def get_string(self):
        """Receive a string"""
        print("Please enter a word to find the non-repeating letters: ")
        self.word = input()
        self.seperate()

    def seperate(self):
        """Seperate letters

        Seperates all the letters from the received word into a dictionary
        """
        for letter in self.word:
            self.letters[letter] = 1
        self.print_back()

    def print_back(self):
        """Prints non-repeating letters"""
        for letter in self.letters:
            if self.letters[letter] == 1:
                print(letter)


def main():
    myWord = CharCheck()
    myWord.get_string()

if __name__ == "__main__":
    main()
