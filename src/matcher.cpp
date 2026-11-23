// matcher.cpp — part of spotify-playlist-dl.

#include "spotifyplaylistdl/matcher.h"

#include <cstdio>

namespace spotifyplaylistdl {

Matcher::Matcher(const std::string& config_path)
    : config_path_(config_path) {}

void Matcher::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Matcher::run() {
    if (verbose_) std::fprintf(stderr, "[spotify-playlist-dl] matcher: run\n");
    // core logic lives here
    return true;
}

}  // namespace spotifyplaylistdl
