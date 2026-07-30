#ifndef OPERATIONS_H
#define OPERATIONS_H
class Operations{

private:
    double current = 0;
public:

 double getValue() const {
     return current; }

     void setValue(double value){
        current = value;
     }
    void add_lask(double value);
    void minus_lask(double value);
    void multiply_lask(double value);
    void divide_lask(double value);
    void mod_lask(double value);
    void log_lask();
    void square_lask();
    void cube_lask();
    void power_lask(double exponent);
    void sin_lask();
    void cos_lask();
    void tan_lask();
    void sq_root();
    void clear_lask();
    void close_lask();

};



#endif