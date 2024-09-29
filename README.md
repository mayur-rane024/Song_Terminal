# Song Application (C++ Terminal-based)

## Overview
This is a simple terminal-based song management application built in C++ using object-oriented principles. The application allows users to add songs to a playlist, display all songs, and search for a specific song by its title. The application simulates basic functionalities such as adding, viewing, and searching songs.

## Features
- Add new songs with a title, artist, and duration.
- Display all songs in the playlist.
- Search for a song by title.
- Exit the application.

## Technologies Used
- C++
- Standard Library (`iostream`, `vector`)

## How to Run the Application
1. **Clone the repository** or download the source code files to your local machine.
2. **Compile the program** using any C++ compiler. For example, with `g++`:
   ```bash
   g++ song_app.cpp -o song_app


## Application Flow

Upon running the application, the user is presented with the following options:

1. Add a song

2. Display all songs in the playlist

3. Search for a song by title

4. Exit the application

The user can choose one of the options by entering the corresponding number (1-4).

The program continues to loop through the menu until the user selects the option to exit.

**Input Details**

Adding a song: You will be asked to input the song title, artist, and duration (in minutes).
Displaying all songs: Shows a list of all songs in the playlist with their details.

Searching for a song: You can search for a song by entering its exact title.


Future Improvements
Add input validation to ensure the duration is a valid float number.
Improve the input for song titles and artists to handle multiple-word inputs (e.g., using getline()).
Add functionality to remove songs from the playlist.
Implement file storage to save and retrieve playlists across sessions.
