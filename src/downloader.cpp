// downloader.cpp — part of spotify-playlist-dl.

#include "spotifyplaylistdl/downloader.h"

#include <cstdio>

namespace spotifyplaylistdl {

Downloader::Downloader(const std::string& config_path)
    : config_path_(config_path) {}

void Downloader::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Downloader::run() {
    if (verbose_) std::fprintf(stderr, "[spotify-playlist-dl] downloader: run\n");
    // core logic lives here
    return true;
}

}  // namespace spotifyplaylistdl
