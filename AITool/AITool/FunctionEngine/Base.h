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
		size_t operator()(const VariableReference& a) const;
	};
};

size_t std::hash<VariableReference>::operator()(const VariableReference& a) const {
	if (a.label == "") {
		forceView(out::error, std::string("Illegal Use of Unamed Variable"));
		forceView(out::error, std::endl);
	}
	return hash<string>()(a.label);
}
