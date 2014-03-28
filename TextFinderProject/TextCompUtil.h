//#pragma once
//# include <iostream>
//# include <vector>
//# include <future>
//# include <map>
//
//# include "OS_SLASH.h"
//# include "FileSystem.h"
//# include "FileAnalyzer.h"
//
//# include "AbstractReferenceCount.h"
//# include "ITextSearchComponent.h"
//# include "TextSearchComponent.h"
//
//# include "TextSearchFactory.h"
//
//using namespace std;
//using namespace FileSystem;
//
//using FileName = std::string;
//using Result = std::vector<std::string>;
//using DirectoryPath = std::string;
//using Patterns = std::vector<std::string>;
//
//using AbstractTextSearchComponent = ITextSearchComponent<Result, const DirectoryPath&, const Patterns &>;
//
//using AbstractTextSearchComponentReferenceCounted = AbstractReferenceCount<AbstractTextSearchComponent>;
//
//using TextComp = AbstractTextSearchComponentReferenceCounted;
//
//void title1(const std::string& title, char ch = '=');
//Result mergeVectors(Result x, Result y);
//
//void appendRootDirectory(Result &x, const DirectoryPath root);
//void removeCurrentAndPrevDirectory(Result & res);
//Result getAllDirectoriesRecursive(const DirectoryPath & dir);
//
//Patterns generatePatterns();
//bool runFileAnalyzer(FileName currFile, Patterns stringsToFind, TextComp *comp);
//Result filterFiles(Patterns stringsToFind, Result listOfFiles, TextComp *comp);
//
//void displayFiles(Result files);