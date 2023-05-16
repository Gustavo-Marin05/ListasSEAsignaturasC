#pragma once
class nodo
{
public:
	nodo* next;
	nodo();
	~nodo();

	virtual nodo* getnext() { return next; };



};