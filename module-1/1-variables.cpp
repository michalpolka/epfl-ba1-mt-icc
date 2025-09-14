int integer { 5 }; // Direct-list-initialisation -- the preferred way to initialise variables
int empty {}; // Value-initialisation -- the preferred way to initialise an empty variable

double floating {1.23}; // A decimal number
double scientific {-1.9e9}; // A large value with scientific notation

constexpr int permaInt = 69; // This is how to make something constant (you can't reassign it a different value later on)

// constexpr value is set at compile time, const value is set at runtime
// imo use constexpr unless something shouts at you -- really not sure tho