/*
 * Section 13 Challenge
 * Movies.h
 * 
 * Models a collection of Movies as a std::vector
 */

#include <iostream>
#include "Movies.h"

Movies::Movies() {
}

Movies::~Movies() {
}

bool Movies::add_movie(std::string name, std::string rating, int watched) {
    
    for (const Movie &movie : movies) {
        if (movie.get_name() == name) {
            return false;
        }
    }

    Movie m{ name, rating, watched };
    movies.push_back(m);
    return true;
}

bool Movies::increment_watched(std::string name) {

    for (Movie &movie : movies) {
        if (movie.get_name() == name) {
            movie.increment_watched();
            return true;
        }
    }

   return false;
}

void Movies::display() const {
    if (movies.size() == 0) {
        std::cout << "No movies to display\n";
    }
    else {
        std::cout << "\n==========================\n";
        for (const Movie& movie : movies) {
            movie.display();
        }
        std::cout << "==========================\n\n";

    }
}