// sessions.cpp — part of claude-session-pool.

#include "claudesessionpool/sessions.h"

#include <cstdio>

namespace claudesessionpool {

Sessions::Sessions(const std::string& config_path)
    : config_path_(config_path) {}

void Sessions::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Sessions::run() {
    if (verbose_) std::fprintf(stderr, "[claude-session-pool] sessions: run\n");
    // core logic lives here
    return true;
}

}  // namespace claudesessionpool
