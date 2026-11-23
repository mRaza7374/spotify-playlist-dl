// tags.cpp — part of spotify-playlist-dl.

#include "spotifyplaylistdl/tags.h"

#include <cstdio>

namespace spotifyplaylistdl {

Tags::Tags(const std::string& config_path)
    : config_path_(config_path) {}

void Tags::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Tags::run() {
    if (verbose_) std::fprintf(stderr, "[spotify-playlist-dl] tags: run\n");
    // core logic lives here
    return true;
}

}  // namespace spotifyplaylistdl
