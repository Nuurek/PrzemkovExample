#include <iostream>
#include <string>
//#include <fmt/format.h>
#include <spdlog/spdlog.h>

int64_t fibbonaciNumber(int n) {
	int64_t f0 = 0;
	int64_t f1 = 1;

	int64_t nextF = f1;

	for (int i = 0; i < n; i++) {
		nextF = f1 + f0;
		f0 = f1;
		f1 = nextF;
	}

	return nextF;
}

int main() {
	
	fmt::print("Hello, {}!\n", "world");

	auto logger = spdlog::stdout_logger_mt("MainLogger", true);

	logger->set_level(spdlog::level::debug);
	logger->info("Dzisiaj maamy TechDay\n");
	logger->debug("Mówimy o C++\n");
	logger->error("eduroam znowu nie dzia³a!\n");

	for (int i = 0; i < 6; i++) {
		logger->info("fibbonaci({}) = {}", i, fibbonaciNumber(i));
	}
	return 0;
}