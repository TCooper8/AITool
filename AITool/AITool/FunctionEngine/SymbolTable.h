class SymbolTable : public std::unordered_map<VariableReference *, BaseType *> {
	public:
		SymbolTable() {
			out::notify << "Constructed Symbol Table" << std::endl;
		}
		virtual ~SymbolTable() {
			out::report << "Destroying Symbol Table" << std::endl;
		}
};
