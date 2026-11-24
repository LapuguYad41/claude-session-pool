// main.cpp — entry point. Wires config and subsystems together.

#include "claudesessionpool/settings.h"
#include "claudesessionpool/sessions.h"
#include "claudesessionpool/rotate.h"
#include "claudesessionpool/proxy.h"
#include "claudesessionpool/cli.h"
#include "claudesessionpool/state.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    claudesessionpool::Settings settings = claudesessionpool::Settings::load_default();
    claudesessionpool::Sessions sessions(settings.store_path);
    claudesessionpool::Rotate rotate(settings.store_path);
    claudesessionpool::Proxy proxy(settings.store_path);
    claudesessionpool::Cli cli(settings.store_path);
    claudesessionpool::State state(settings.store_path);
    std::fprintf(stderr, "[claude-session-pool] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
