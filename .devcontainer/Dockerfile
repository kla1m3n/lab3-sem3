FROM mcr.microsoft.com/devcontainers/cpp:1-ubuntu-24.04

USER root
RUN apt-get update \
    && apt-get install -y --no-install-recommends ninja-build \
    && apt-get clean \
    && rm -rf /var/lib/apt/lists/*

USER vscode
