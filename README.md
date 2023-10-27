# -Netflix-Showcase_-C-Object-Oriented-Project
Netflix Showcase is a C++ project that simulates a Netflix-style streaming platform, implemented using object-oriented programming principles. This program allows users to view the list of available videos, filter videos by rating and genre, view user information, and add videos to a user's watchlist.

## Requirements

To compile and run this project, you'll need:

- A C++ compiler (e.g., g++)
- A data file named "videos.txt" containing information about the movies and episodes available in the showcase. You can customize this file according to your needs.

## Project Structure

- `main.cpp`: This file contains the `main` function that initiates the program and controls the execution flow.

- `Video.h`, `Movie.h`, `Episode.h`, `User.h`: These files contain class definitions that represent different types of videos (Movies and Episodes) and a User.

## Usage Instructions

1. Program Execution: When you run the program, you will be prompted to enter the user's name and account. After that, you can choose various options from a menu.

2. Menu Options:
   - View the list of available videos.
   - Filter videos by rating.
   - Filter videos by genre.
   - View user information.
   - Modify the user's profile.
   - Add a video to the user's watchlist.
   - Quit.

3. View the List of Available Videos: This option displays a list of all the videos available in the showcase.

4. Filter Videos by Rating: You can enter a rating (from 1 to 5), and the program will display videos with that rating.

5. Filter Videos by Genre: You can enter a genre (e.g., "Science_Fiction"), and the program will display videos of that genre.

6. View User Information: This option shows user data, including their name, account, and the list of added videos.

7. Modify the User's Profile: Allows the user to change their name and account.

8. Add a Video to the User's Watchlist: You can add a video to the user's watchlist by entering the video ID. The program will verify if the video exists.

9. Quit: Exits the program.

## Customization

You can customize the "videos.txt" file to add more movies and episodes to the showcase. Make sure to follow the correct format in the data file.

