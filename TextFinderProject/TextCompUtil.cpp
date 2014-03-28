//
//# include "TextCompUtil.h"
//
//void title1(const std::string& title, char ch = '=')
//{
//	std::cout << "\n  " << title;
//	std::cout << "\n " << std::string(title.size() + 2, ch);
//}
//
//Result mergeVectors(Result x, Result y)
//{
//	Result merged;
//
//	merged.reserve(x.size() + y.size());
//
//	merged.insert(merged.end(), x.begin(), x.end());
//
//	merged.insert(merged.end(), y.begin(), y.end());
//
//	return merged;
//}
//
//
//
//void appendRootDirectory(Result &x, const DirectoryPath root)
//{
//	Result newRes;
//
//	for (std::string inst : x)
//	{
//		newRes.push_back(root + slash + inst);
//	}
//
//	x = newRes;
//
//}
//
//void removeCurrentAndPrevDirectory(Result & res)
//{
//
//	Result newRes;
//
//	for (std::string inst : res)
//	{
//		if (inst != "." && inst != ".." && inst.length() > 0)
//			newRes.push_back(inst);
//	}
//
//	res = newRes;
//}
//
//Result getAllDirectoriesRecursive(const DirectoryPath & dir)
//{
//	Result tempDirectories;
//
//	if (dir.length() == 0)
//		return tempDirectories;
//
//	Result directoriesListRoot = Directory::getDirectories(dir);
//
//	removeCurrentAndPrevDirectory(directoriesListRoot);
//
//	appendRootDirectory(directoriesListRoot, dir);
//
//	tempDirectories = directoriesListRoot;
//
//	for (std::string directory : directoriesListRoot)
//	{
//		if (directory != "." && directory != "..")
//			tempDirectories = mergeVectors(tempDirectories, getAllDirectoriesRecursive(directory));
//	}
//
//	return tempDirectories;
//}
//
//
//Patterns generatePatterns()
//{
//	Patterns dummy;
//
//	dummy.push_back("std::cout");
//	dummy.push_back("<iostream>");
//	//dummy.push_back("<conio>");
//	dummy.push_back("std::string");
//
//	return dummy;
//}
//
//bool runFileAnalyzer(FileName currFile, Patterns stringsToFind, TextComp *comp)
//{
//	FileAnalyzer inst;
//
//	bool TextPatternFlag = static_cast<TextSearchComponent*>(comp)->getTextPatternSearchCondition();
//
//	bool res = inst.analyzeFile(currFile, stringsToFind, TextPatternFlag);
//
//	return res;
//}
//
//Result filterFiles(Patterns stringsToFind, Result listOfFiles, TextComp *comp)
//{
//	Result passedFiles;
//
//
//	using fileResult = std::future<bool>;
//
//	//Important Result.... You cant provide move semantics for any Threaded Construct ...
//	//You have to maintain a vector of pointers instead of conventional vector of objects
//
//	std::vector<fileResult> futureFiles(listOfFiles.size());
//
//	for (size_t i = 0; i < listOfFiles.size(); i++)
//	{
//
//		/**
//		Analyze each file in List Of Files on their own Thread
//		*/
//
//		futureFiles[i] = std::async(runFileAnalyzer, listOfFiles[i], stringsToFind, comp);
//
//	}
//
//	for (size_t i = 0; i < listOfFiles.size(); i++)
//	{
//
//		try
//		{
//			if (futureFiles[i].get())
//				passedFiles.push_back(listOfFiles[i]);
//		}
//		catch (exception ex)
//		{
//			std::cout << "Exception encountered :: " << ex.what() << endl;
//		}
//
//	}
//
//
//	return passedFiles;
//}
//
//void displayFiles(Result files)
//{
//	std::cout << "Files that Match All Pattern Restrictions :-" << endl;
//
//	for (std::string file : files)
//	{
//		std::cout << file.substr(file.find_last_of(slash) + 1) << endl;
//	}
//}
