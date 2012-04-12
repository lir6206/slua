/*

*/
#pragma once
#ifndef __SLUA_TABLE_HPP__
#define __SLUA_TABLE_HPP__

namespace slua {
  
//LuaTable Handling
class Table
{
private:
    
    int ref_; //int luaL_ref (lua_State *L, int t);
    
    
    Table();
    ~Table();
    
public:
    //create a table and assign to name
    
    //create a new anonymous table on the stack
    static Table* const create(const Context& ctx);
    //load a table from the top of the stack
    static Table* const load(const Context& ctx)
};
    
    
    
}

#endif /* __SLUA_TABLE_HPP__ */