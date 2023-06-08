from conan import ConanFile


class CompressorRecipe(ConanFile):
    settings = "os", "compiler", "build_type", "arch"
    generators = "CMakeToolchain", "CMakeDeps"

    def requirements(self):
        self.requires("benchmark/1.8.0")
        self.requires("gtest/cci.20210126")

    def build_requirements(self):
        self.tool_requires("cmake/3.22.6")
