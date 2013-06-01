#include <string>
#include <forward_list>
#include <unordered_map>
#pragma once

class Symbol {
	public:
		std::string Name;
		symbol() : Name("NIL") {}
		symbol(const std::string& n) : Name(n) {}
		virtual bool Literal() const {return true;}
};

class SymbolList {
	std::forward_list<symbol *> List;
	SymbolList() {}
	SymbolList(const std::forward_list<symbol *>& l) : List(l) {}
};

class SymbolTable : public std::unordered_map<std::string, symbol *> {};

class interpreter {
	private:
		SymbolTable table;
};
