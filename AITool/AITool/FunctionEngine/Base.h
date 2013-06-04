#include <string>
#include <forward_list>
#include <unordered_map>
#include "../Output/out.h"
#pragma once

class Env {
};

class BaseType {
	public:
		std::string label;
		BaseType() : label("") {
			out::notify << "Creating Object of Base Type" << std::endl;
		}
		BaseType(const std::string& l) : label(l) {
			out::notify << "Creating Object of Base Type" << std::endl;
			out::notify << "\tLabel: " << l << std::endl;
		}
		virtual ~BaseType() {
			out::report << "\tDestroying Object: " << label << std::endl;
		}
		virtual bool IsList()const = 0;
		virtual bool IsSymbol()const = 0;
};

class VariableReference : public BaseType {
	public:
		VariableReference() : BaseType() {
			out::notify << "\tObject Type: Variable Reference" << std::endl;
		}
		VariableReference(const std::string& l) : BaseType(l) {
			out::notify << "\tObject Type: Variable Reference" << std::endl;
		}
		virtual ~VariableReference() {
			out::report << "Destroying: Variable Reference" << std::endl;
		}
		virtual bool IsList()const {return false;}
		virtual bool IsSymbol()const {return true;}
};

namespace std {
	template <>
	struct hash<VariableReference> {
		size_t operator()(const VariableReference& a) const {
			if (a.label == "") {
				forceView(out::error, std::string("Illegal Use of Unamed Variable"));
				forceView(out::error, std::endl);
			}
			return hash<string>()(a.label);
		}
	};
};

class ConstantLiteral : public BaseType {
	public:
		float val;
		ConstantLiteral(): val(0), BaseType("0.0") {
			out::notify << "\tObject Type: Constant Literal" << std::endl;
		}
		ConstantLiteral(const std::string& a) : val(std::stof(a)), BaseType(a) {
			out::notify << "\tObject Type: Constant Literal" << std::endl;
		}
		virtual ~ConstantLiteral() {
			out::report << "Destroying: Constant Literal" << std::endl;
		}
		virtual bool IsList()const {return false;}
		virtual bool IsSymbol()const {return false;}
};

typedef std::forward_list<const BaseType *> LispList;
class ListExpression : public BaseType {
	public:
		LispList List;
		ListExpression() : BaseType("()") {}
		ListExpression(const LispList& list) : List(list) {
			std::string label = "(";
			for(auto it = List.begin(); it != List.end(); it++) {
				if(it != List.begin()) {
					label += " ";
				}
				if(!(*it)) {
					label += "NIL";
				}
				else {
					label += (*it)->label;
				}
			}
			label +=")";
			this->label = label;
		}
		virtual bool IsList()const {return true;}
		virtual bool IsSymbol()const {return false;}
		const BaseType& Head()const {
			return *List.front();
		}
		ListExpression Tail()const {
			return ListExpression(LispList(++(List.begin()), List.end()));
		}
};

//Eval
//if x Symbol
//	return env.find(Symbol)
//elif x not List
//	return x
//elif x[0] == 'quote'
//...
//...
//...
