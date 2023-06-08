#include <benchmark/benchmark.h>

#include <unistd.h>

namespace
{
    int sum(int a, int b)
    {
        usleep(0.1);
        return a * b;
    }
}

static void BM_SomeFunction(benchmark::State& state) {
  // Perform setup here
  for (auto _ : state) {
    // This code gets timed
    sum(2,4);
  }
}
// Register the function as a benchmark
BENCHMARK(BM_SomeFunction);
// Run the benchmark
BENCHMARK_MAIN();