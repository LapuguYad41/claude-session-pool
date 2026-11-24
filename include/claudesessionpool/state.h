// state — part of claude-session-pool.

#pragma once

#include <string>
#include <vector>

namespace claudesessionpool {

class State {
public:
    explicit State(const std::string& config_path);

    void configure(const std::string& key, const std::string& value);
    bool run();
    bool verbose() const { return verbose_; }

private:
    std::string config_path_;
    bool verbose_ = false;
};

}  // namespace claudesessionpool
