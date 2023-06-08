USERNAME := $(shell id -un)
UID      := $(shell id -u)
GID      := $(shell id -g)

build-cpp-dev-ubuntu-conan:
	@docker build --build-arg USERNAME=$(USERNAME)        \
				  --build-arg UID=$(UID)                  \
				  --build-arg GID=$(GID)                  \
				  -t cpp-dev-ubuntu-conan                 \
				  -f Dockerfile.cxx.ubuntu.conan          \
				  .
