#ifndef TABLE_H
#define TABLE_H

#include "Record.h"
#include <initializer_list>

class Table {
private:
	Table(); //Empty constructor not allowed
	std::vector<Record> v;

public:
	
	// make constructor that takes list of args
	Table(std::initializer_list<std::string> args);

	~Table();

	//Add atribute to end of table
	void add_attribute(std::string name);

	//Delete attribute from table
	void delete_attribute(std::string name);

	//insert record into table
	void insert_recortd(Record r);

	//return list of names
	std::vector<std::string> get_attributes();

	//return size of Table
	int get_size();

	//set key
	void set_key(std::string attribute);

	//cross join
	Table cross_join(Table table_1, Table table_2);

	//natural join
	Table natural_join(Table table_1, Table table_2);

	int get_count(std::string name);
	int get_min(std::string name);
	int get_max(std::string name);

};

#endif