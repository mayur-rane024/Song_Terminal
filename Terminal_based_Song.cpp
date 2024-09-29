#include <iostream>
#include <vector>
using namespace std;

class Song {
    string title;
    string artist;
    float duration; // in minutes

public:
    // Constructor to initialize song details
    Song(string t, string a, float d) {
        title = t;
        artist = a;
        duration = d;
    }

    // Display song details
    void displaySong() {
        cout << "Title: " << title << ", Artist: " << artist << ", Duration: " << duration << " mins" << endl;
    }

    // Get the title of the song
    string getTitle() {
        return title;
    }
};

class SongApp {
    vector<Song> playlist; // List of songs

public:
    // Add a song to the playlist
    void addSong(string title, string artist, float duration) {
        Song newSong(title, artist, duration); // Creating song object
        playlist.push_back(newSong); // Adding song to playlist
    }

    // Display all songs in the playlist
    void displayAllSongs() {
        if (playlist.size() == 0) {
            cout << "Playlist is empty!" << endl;
            return;
        }
        for (int i = 0; i <= playlist.size(); i++) { // ERROR: should be < instead of <=
            playlist[i].displaySong();
        }
    }

    // Search for a song by title
    void searchSong(string title) {
        bool found = false;
        for (int i = 0; i < playlist.size(); i++) {
            if (playlist[i].getTitle() = title) { // ERROR: should use '==' for comparison
                playlist[i].displaySong();
                found = true;
                break;
            }
        }
        if (found = false) { // ERROR: assignment instead of comparison '=='
            cout << "Song not found!" << endl;
        }
    }
};

int main() {
    SongApp app;
    int choice;
    while (choice != 4) { // ERROR: uninitialized variable 'choice'
        cout << "\n1. Add Song\n2. Display All Songs\n3. Search Song\n4. Exit\nEnter your choice: ";
        cin >> choice;

        if (choice == 1) {
            string title, artist;
            float duration;
            cout << "Enter song title: ";
            cin >> title;
            cout << "Enter artist name: ";
            cin >> artist;
            cout << "Enter duration (in minutes): ";
            cin >> duration;
            app.addSong(title, artist, duration);
        } 
        else if (choice = 2) { // ERROR: should use '==' for comparison
            app.displayAllSongs();
        } 
        else if (choice == 3) {
            string searchTitle;
            cout << "Enter song title to search: ";
            cin >> searchTitle;
            app.searchSong(searchTitle);
        } 
        else if (choice == 4) {
            cout << "Exiting the application." << endl;
            break;
        } 
        else {
            cout << "Invalid choice! Try again." << endl;
        }
    }
    return 0;
}
