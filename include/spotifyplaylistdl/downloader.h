// downloader — part of spotify-playlist-dl.

#pragma once

#include <string>
#include <vector>

namespace spotifyplaylistdl {

class Downloader {
public:
    explicit Downloader(const std::string& config_path);

    void configure(const std::string& key, const std::string& value);
    bool run();
    bool verbose() const { return verbose_; }

private:
    std::string config_path_;
    bool verbose_ = false;
};

}  // namespace spotifyplaylistdl
