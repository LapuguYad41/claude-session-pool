// proxy.cpp — part of claude-session-pool.

#include "claudesessionpool/proxy.h"

#include <cstdio>

namespace claudesessionpool {

Proxy::Proxy(const std::string& config_path)
    : config_path_(config_path) {}

void Proxy::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Proxy::run() {
    if (verbose_) std::fprintf(stderr, "[claude-session-pool] proxy: run\n");
    // core logic lives here
    return true;
}

}  // namespace claudesessionpool
