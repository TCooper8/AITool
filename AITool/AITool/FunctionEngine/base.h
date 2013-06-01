#include <string>
#include <forward_list>
#include <unordered_map>
#include "../Output/out.h"
#pragma once

class Symbol {
	public:
		std::string Name;
		Symbol() : Name("NIL") {
			out::notify << "Constructed Symbol" << std::endl;
		}
		Symbol(const std::string& n) : Name(n) {
			out::notify << "Constructed Symbol" << std::endl;
		}
		~Symbol() {
			out::report << "Destroying Symbol" << std::endl;
		}
		virtual bool Literal() const {return true;}
};

class SymbolList {
	public:
		std::forward_list<Symbol *> List;
		SymbolList() {
			out::notify << "Constructed Symbol List" << std::endl;
		}
		SymbolList(const std::forward_list<Symbol *>& l) : List(l) {
			out::notify << "Constructed Symbol List" << std::endl;
		}
		~SymbolList() {
			out::report << "Destroying Symbol List" << std::endl;
		}
};

class SymbolTable : public std::unordered_map<std::string, Symbol *> {
	public:
		SymbolTable() {
			out::notify << "Constructed Symbol Table" << std::endl;
		}
		virtual ~SymbolTable() {
			out::report << "Destroying Symbol Table" << std::endl;
		}
};

class Interpreter {
	private:
		SymbolTable Table;
		std::forward_list<Symbol *> Mem;
	public:
		Interpreter() {
			out::notify << "Constructed Interpreter" << std::endl;
		}
		~Interpreter() {
			out::report << "Destroying Interpreter" << std::endl;
		}
};
