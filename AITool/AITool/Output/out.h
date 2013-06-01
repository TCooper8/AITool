#include <stdio.h>
#include <iostream>
#include <string>

#ifdef LINUX
	#define DEF_COLOR "255"
	#define OUT_COLOR "46"
	#define ERR_COLOR "160"
	#define NOTIFY_COLOR "27"
	#define COLOR_START(COLOR)(std::cout << "\033[38;5;"+COLOR+"m", (void)0)
	#define COLOR_END()(std::cout << "\033[0m", (void)0)
#else
	#define DEF_COLOR "F"
	#define OUT_COLOR "A"
	#define ERR_COLOR "4"
	#define NOTIFY_COLOR "9"
	#define COLOR_START(COLOR)(system("COLOR 0"+COLOR), (void)0)
	#define COLOR_END()(system("COLOR 0F"), (void)0)
#endif

namespace out {
	class coloredOutput {
		public:
			std::string color;
			bool to_cout;
			coloredOutput() : color(DEF_COLOR), to_cout(true) {}
			coloredOutput(const std::string& c, bool cout = true) : color(c), to_cout(cout) {};
	};
	coloredOutput error(ERR_COLOR, false);
	coloredOutput notify(NOTIFY_COLOR);
	coloredOutput report(OUT_COLOR);
	const coloredOutput out(const std::string& c) {
		return coloredOutput(c);
	}
}

template <typename T>
const out::coloredOutput& operator<<(const out::coloredOutput& a, const T& v) {
	COLOR_START(a.color);
	if(a.to_cout) {
		std::cout << v;
	}
	else {
		std::cerr << v;
	}
	COLOR_END();
	return a;
}

typedef std::ostream& (*ostream_manipulator)(std::ostream&);
const out::coloredOutput& operator<<(const out::coloredOutput& a, const ostream_manipulator v) {
	return operator<< <ostream_manipulator>(a, v);
}
