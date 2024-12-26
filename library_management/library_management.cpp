#include <iostream>
#include <string>

using namespace std;

struct Book {
    string title;
    string author;
};

const int MAX_BOOKS = 100; // Maximum number of books
Book library[MAX_BOOKS]; // Array to store books
int bookCount = 0; // Current number of books

void addBook() {
    if (bookCount >= MAX_BOOKS) {
        cout << "Error: Array is full." << endl;
        return;
    }
    cout << "Enter book title: ";
    cin.ignore(); // Ignore leftover newline character
    getline(cin, library[bookCount].title); // Get book title
    cout << "Enter author name: ";
    getline(cin, library[bookCount].author); // Get author name
    bookCount++; // Increment the book count
    cout << "Book added successfully." << endl;
}

void displayBooks() {
    if (bookCount == 0) {
        cout << "Library is empty." << endl;
        return;
    }
    cout << "--- List of Books ---" << endl;
    for (int i = 0; i < bookCount; i++) {
        cout << i + 1 << ". " << library[i].title << " - " << library[i].author << endl;
    }
}

void searchBook() {
    string searchTitle;
    cout << "Enter the book title to search: ";
    cin.ignore(); // Ignore leftover newline character
    getline(cin, searchTitle); // Get the title to search
    for (int i = 0; i < bookCount; i++) {
        if (library[i].title == searchTitle) { // Check if the title matches
            cout << "Book found:" << endl;
            cout << "Title: " << library[i].title << endl;
            cout << "Author: " << library[i].author << endl;
            return;
        }
    }
    cout << "Book not found." << endl; // Message if book is not found
}

int main() {
    int choice;
    do {
        cout << "--- Library Management ---" << endl;
        cout << "1. Add Book" << endl;
        cout << "2. Display Books" << endl;
        cout << "3. Search Book" << endl;
        cout << "4. Exit" << endl;
        cout << "Choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addBook(); // Call function to add a book
                break;
            case 2:
                displayBooks(); // Call function to display books
                break;
            case 3:
                searchBook(); // Call function to search for a book
                break;
            case 4:
                cout << "Exiting the program." << endl; // Exit message
                break;
            default:
                cout << "Invalid choice. Please try again." << endl; // Handle invalid choice
        }
    } while (choice != 4); // Repeat until the user chooses to exit

    return 0; // End of program
}
