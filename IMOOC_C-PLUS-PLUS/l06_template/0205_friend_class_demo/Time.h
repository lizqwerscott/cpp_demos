#ifndef TIME_H
#define TIME_H

class Match;

class Time
{
	friend class Match; // 1、friend class 类名; 2、friend 类名;
public:
	Time(int hour, int min, int sec);
private:
	void printTime();
	int m_iHour;
	int m_iMinute;
	int m_iSecond;
};

#endif