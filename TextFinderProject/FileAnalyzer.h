#pragma once

using FileName = std::string;
using Patterns = std::vector <std::string>;

class FileAnalyzer
{
public:
	bool analyzeFile(FileName fileName, Patterns x, bool fileShouldContainAllPatterns);
};

