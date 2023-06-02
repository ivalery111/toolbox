USERNAME := $(shell id -un)
UID      := $(shell id -u)
GID      := $(shell id -g)

build-cpp-dev-ubuntu-simple:
	@docker build --build-arg USERNAME=$(USERNAME)        \
				  --build-arg UID=$(UID)                  \
				  --build-arg GID=$(GID)                  \
				  -t cpp-dev-ubuntu-simple                \
				  -f Dockerfile.cxx.ubuntu.simple         \
				  .
