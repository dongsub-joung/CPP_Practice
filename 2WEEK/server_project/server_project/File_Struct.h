#pragma once

/* ####### ÆÄÀÏ ####### */
struct File
{
	std::string m_name;
	double m_volume;

	File() {};
	File(std::string input_name, double input_volume)
		: m_name(input_name), m_volume(input_volume) {};
	~File() {};
} File;
