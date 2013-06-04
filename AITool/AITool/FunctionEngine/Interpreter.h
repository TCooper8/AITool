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
			while (!Mem.empty()) {
				if(Mem.front()) {
					delete Mem.front();
				}
				Mem.pop_front();
			}
		}
		BaseType& Eval(const ListExpression& expr)const {
			if(expr.List.empty()) {
				out::error << "Cannot evaluate empty list" << std::endl;
			}
			else if(expr.List.front().IsSymbol()) {
			}
			else if(!expr.List.front().IsList()) {
			}
		}
};
