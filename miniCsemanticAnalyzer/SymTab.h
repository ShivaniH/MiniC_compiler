#include<map>
#include<vector>

class SymTabEntry {

    std::string dataType;

    public:

    SymTabEntry(std::string dt) : dataType(dt)
    {}

    std::string getDataType()
    {
        return dataType;
    }
};

class VariableEntry : public SymTabEntry {

    std::string varType;    // simple, oneD, twoD
    int dim1, dim2;

    public:

    VariableEntry(std::string dType, std::string vType)
                 :
                 SymTabEntry(dType), varType(vType)
    {
        dim1 = -1;
        dim2 = -1;
    }

    void setDimOne(int d1)
    {
        if(varType == "oneD" || varType == "twoD")
        {
            dim1 = d1;
        }
    }

    void setDimTwo(int d2)
    {
        if(varType == "twoD")
        {
            dim2 = d2;
        }
    }

};

class FunctionEntry : public SymTabEntry {     // for now, can use it to check if main() is present, and whether a function being called has already been defined

    // TODO later
    // std::vector<std::pair<std::string, std::string>> params;    // You will need this to check if the types of the arguments passed match the func signature

    public:

    FunctionEntry(std::string dt) : SymTabEntry(dt) {}
};

class SymTab {

    std::map<std::string, SymTabEntry> symbolTable;        // key: identifier (var or fun name), value: other_info_about_var/fun
    std::vector<SymTab*> children;

    public:

    void addEntry(std::string identifier, SymTabEntry entry)
    {
        symbolTable.insert(make_pair(identifier, entry));
    }

    void addChild(SymTab *child)
    {
        children.push_back(child);
    }

    void printSymTab()
    {
        for(auto elem : symbolTable)
        {
            std::cout << elem.first << " " << elem.second.getDataType() << "\n";
        }
    }
};