#include <string>
#include <forward_list>
#include <unordered_map>
#pragma once

class Symbol {
	public:
		std::string Name;
		Symbol() : Name("NIL") {}
		Symbol(const std::string& n) : Name(n) {}
		virtual bool Literal() const {return true;}
};

class SymbolList {
	std::forward_list<Symbol *> List;
	SymbolList() {}
	SymbolList(const std::forward_list<Symbol *>& l) : List(l) {}
};

class SymbolTable : public std::unordered_map<std::string, Symbol *> {};

class interpreter {
	private:
		SymbolTable Table;
		std::forward_list<Symbol *> Mem;
};
