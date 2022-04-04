\import name.variable

#ifndef \(uppercase name)_HPP
#define \(uppercase name)_HPP

class \(class name): \(base class name) {
private:
protected:
	\(class name)& initUnique(/* argument list */);
public:
	\(class name)(void);
	\(class name)(const \(class name)& \(instance name));
	\(class name)& operator=(const \(class name)& rhs);
	~\(class name)(void);
};

#endif
