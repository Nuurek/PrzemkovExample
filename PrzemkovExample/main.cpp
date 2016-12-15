#include <iostream>
#include <string>
//#include <fmt/format.h>
#include <spdlog/spdlog.h>


int main() {
	
	fmt::print("Hello, {}!\n", "world");

	auto logger = spdlog::stdout_logger_mt("MainLogger", true);

	logger->set_level(spdlog::level::debug);
	logger->info("Dzisiaj maamy TechDay\n");
	logger->debug("Mówimy o C++\n");
	logger->error("eduroam znowu nie dzia³a!\n");

	return 0;
}