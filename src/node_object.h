/*
 * node_object.h
 *
 *  Created on: Nov 24, 2009
 *      Author: smitty
 */

#ifndef NODE_OBJECT_H_
#define NODE_OBJECT_H_

#include <string>
using namespace std;

class NodeObject{

public:
	NodeObject() {}

	virtual ~NodeObject() {}

	virtual NodeObject * clone() const = 0;
	virtual string type() {return "base";}
};

#endif /* NODE_OBJECT_H_ */
