// main.cpp — entry point. Wires config and subsystems together.

#include "spotifyplaylistdl/settings.h"
#include "spotifyplaylistdl/matcher.h"
#include "spotifyplaylistdl/downloader.h"
#include "spotifyplaylistdl/tags.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    spotifyplaylistdl::Settings settings = spotifyplaylistdl::Settings::load_default();
    spotifyplaylistdl::Matcher matcher(settings.store_path);
    spotifyplaylistdl::Downloader downloader(settings.store_path);
    spotifyplaylistdl::Tags tags(settings.store_path);
    std::fprintf(stderr, "[spotify-playlist-dl] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
