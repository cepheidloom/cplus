#include <cstdlib>
#include <iostream>

enum Day {SUN, MON, TUE, WED, THU, FRI, SAT};
enum Mood {HAPPY=0, SLEEPY=1, HORNY=2};
int main() {
	Day today =SUN;
	Mood myMood = HORNY;
	std::cout<<myMood<<"\n";
	return 0;
}	
